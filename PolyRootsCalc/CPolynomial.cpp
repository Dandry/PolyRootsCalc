#include "stdafx.h"
#include <string>
#include "CPolynomial.h"
#include "CPolyTerm.h"

using namespace std;

CPolynomial::CPolynomial(list<CPolyTerm>* _terms)
{
	this->polyTerms = new list<CPolyTerm>(*_terms);
}

CPolynomial::~CPolynomial()
{
	delete this->polyTerms;
}

int CPolynomial::getDegree()
{
	if (this->polyTerms->size() > 0)
		return this->polyTerms->front().degree();

	return 0;
}

double CPolynomial::getHighestTerm()
{
	if (this->polyTerms->size() > 0)
		return this->polyTerms->front().coefficient();

	return 0;
}

double CPolynomial::getConstant()
{
	if (this->polyTerms->size() > 0)
		return this->polyTerms->back().coefficient();
	
	return 0;
}

double CPolynomial::evaluate(double _val)
{
	double result = 0;

	list<CPolyTerm>::iterator polyTerm;
	for (polyTerm = polyTerms->begin(); polyTerm != polyTerms->end(); polyTerm++)
	{
		result += polyTerm->coefficient() * pow(_val, polyTerm->degree());
	}

	return result;
}

CPolynomial* CPolynomial::getDerivative()
{
	int multiplier;
	double derivativeCoefficient;
	int derivativeDegree;
	CPolyTerm *derivativeTerm;

	list<CPolyTerm> *derivativeTerms = new list<CPolyTerm>();

	list<CPolyTerm>::iterator polyTerm;
	for (polyTerm = polyTerms->begin(); polyTerm != polyTerms->end(); polyTerm++)
	{
		if (polyTerm->degree() <= 0) continue;

		multiplier = polyTerm->degree();
		derivativeCoefficient = multiplier * polyTerm->coefficient();
		derivativeDegree = polyTerm->degree() - 1;

		derivativeTerm = new CPolyTerm(derivativeCoefficient, derivativeDegree);
		derivativeTerms->push_back(*derivativeTerm);
	}

	return new CPolynomial(derivativeTerms);
}

CPolynomial* CPolynomial::operator / (const double _root)
{
	//wykorzystujemy schemat Hornera
	double coefficient;
	int degree = this->getDegree();

	CPolyTerm* dividedTerm;
	list<CPolyTerm>* dividedTerms = new list<CPolyTerm>();

	list<CPolyTerm>::iterator term;
	for (term = this->polyTerms->begin(); term != this->polyTerms->end() && degree != 0; term++)
	{
		degree--;

		if (term == this->polyTerms->begin())
		{
			//pierwszy wspó³czynnik ma tê s¹m¹ wartoœæ, obni¿amy za to stopieñ
			coefficient = term->coefficient();
		}
		else
		{
			coefficient = (coefficient * _root) + term->coefficient();
		}

		if (coefficient != 0) //jak wspó³czynnik = 0 to pomijamy
		{
			dividedTerm = new CPolyTerm(coefficient, degree);
			dividedTerms->push_back(*dividedTerm);
		}
	}

	return new CPolynomial(dividedTerms);
}
