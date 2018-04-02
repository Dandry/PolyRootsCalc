#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CNewtonMethod.h"

using namespace std;
using namespace System;

CNewtonMethod::CNewtonMethod(int initialApproximation, int maxIterations, int tolerance) : CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance)
{

}

list<double> CNewtonMethod::calculateRoot(CPolynomial polynomial)
{

}