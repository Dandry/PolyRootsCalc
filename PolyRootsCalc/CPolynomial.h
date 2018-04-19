#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CPolyTerm.h"

using namespace std;

class CPolynomial
{
	public:
		list<CPolyTerm>* polyTerms;

		CPolynomial(list<CPolyTerm>* _terms);
		~CPolynomial();

		int getDegree();
		double getHighestTerm();
		double getConstant();
		double evaluate(double _val);
		CPolynomial* getDerivative();

		CPolynomial* operator / (const double _root);
};
