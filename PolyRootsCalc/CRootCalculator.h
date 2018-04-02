#pragma once

#include "stdafx.h"
#include "CPolynomial.h"

using namespace std;
using namespace System;

class CRootCalculator
{
	private:
		int initialApproximation;
		int maxIterations;
		int tolerance;

		list<CPolynomial> *polynomials;
		list<list<double>> *polynomialsRoots;

		list<CPolynomial> parsePolynomials(String^ input);
		list<list<double>> calculateRoots(list<CPolynomial> polynomials);
		string getCalculationSummary(list<list<double>> polynomialsRoots);
		double getPolynomialMinRoot(list<double> polynomialRoots);
		double getPolynomialMaxRoot(list<double> polynomialRoots);

	public:
		CRootCalculator();
		~CRootCalculator();

		void setInitialApproximation();
		void setMaxIterations();
		void setTolerance();

		string calculateRoots(String^ input);
};
