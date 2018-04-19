#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CInverseInterpolation.h"

using namespace std;
using namespace System;

CInverseInterpolation::CInverseInterpolation(double initialApproximation, int maxIterations, double tolerance) 
	: CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance) 
{
	throw exception("Algorytm metody odwrotnej interpolacji kwadratowej nie zosta³ zaimplementowany!");
};

CResult<double> CInverseInterpolation::calculateRoot(CPolynomial* polynomial)
{
	throw exception("Algorytm metody odwrotnej interpolacji kwadratowej nie zosta³ zaimplementowany!");
}