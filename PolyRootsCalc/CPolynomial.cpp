#include "stdafx.h"
#include "CPolynomial.h"

using namespace std;

CPolynomial::CPolynomial()
{
	this->coefficients = new list<double>();
}

CPolynomial::~CPolynomial()
{
	delete this->coefficients;
	this->coefficients = NULL;
}

int CPolynomial::getDegree()
{
	//stopieñ wielomianu 
	return this->coefficients->size() - 1;
}

double CPolynomial::getHighestTerm()
{

}

double CPolynomial::getAbsoluteTerm()
{
	return this->coefficients->back();
}

CPolynomial CPolynomial::calculateDerivative()
{

}

CPolynomial CPolynomial::divideByBinomial()
{

}