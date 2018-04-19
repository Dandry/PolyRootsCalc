#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CNewtonMethod.h"

using namespace std;
using namespace System;

CNewtonMethod::CNewtonMethod(double initialApproximation, int maxIterations, double tolerance) 
	: CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance) 
{
};

CResult<double> CNewtonMethod::calculateRoot(CPolynomial* polynomial)
{
	double x0 = initialApproximation; //pierwsza lub poprzednia iteracja
	double x1 = 0; //bieżąca iteracja

	//liczymy od razu pochodną
	CPolynomial* derivative = polynomial->getDerivative();

	for (int i = 0; i < maxIterations; i++)
	{
		double polyValue = polynomial->evaluate(x0);
		double deriValue = derivative->evaluate(x0);

		if (deriValue == 0) //nie można dzielić przez zero!
			return CResult<double>("Punkt startowy został niepoprawnie określony");

		// x = x - f(x)/f'(x)
		x1 = x0 - polyValue / deriValue;

		//jeżeli |x1 - x0| < ε lub |f0| < ε to osiągneliśmy oczekiwaną dokładność wyznaczenia miejsca zerowego
		if (fabs(x1 - x0) < tolerance || fabs(polynomial->evaluate(x0)) < tolerance)
		{
			delete derivative;

			return CResult<double>(x1);
		}	
		else //w przeciwnym wypadku przechodzimy do kolejnej iteracji pętli
		{
			x0 = x1;
		}		
	}

	delete derivative;

	return CResult<double>("Nie znaleziono miejsca zerowego o określonej dokładności w zadanej liczbie iteracji");
}