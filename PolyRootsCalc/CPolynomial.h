#pragma once

#include "stdafx.h"
#include "CPolynomial.h"

using namespace std;

class CPolynomial
{
	public:
		list<double> *coefficients;

		CPolynomial();
		~CPolynomial();

		int getDegree();
		double getHighestTerm();
		double getAbsoluteTerm();
		CPolynomial calculateDerivative();
		CPolynomial divideByBinomial();
};
