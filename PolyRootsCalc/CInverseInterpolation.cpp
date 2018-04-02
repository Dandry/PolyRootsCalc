#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CInverseInterpolation.h"

using namespace std;
using namespace System;

CInverseInterpolation::CInverseInterpolation(int initialApproximation, int maxIterations, int tolerance) : CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance)
{

}

list<double> CInverseInterpolation::calculateRoot(CPolynomial polynomial)
{

}