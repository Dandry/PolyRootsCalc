#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CSecantMethod.h"

using namespace std;
using namespace System;

CSecantMethod::CSecantMethod(double initialApproximation, int maxIterations, double tolerance) 
	: CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance) 
{
	throw exception("Algorytm metody siecznych nie zosta³ zaimplementowany!");
};

CResult<double> CSecantMethod::calculateRoot(CPolynomial* polynomial)
{
	throw exception("Algorytm metody siecznych nie zosta³ zaimplementowany!");
}