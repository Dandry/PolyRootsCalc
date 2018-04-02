#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CSecantMethod.h"

using namespace std;
using namespace System;

CSecantMethod::CSecantMethod(int initialApproximation, int maxIterations, int tolerance) : CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance)
{

}

list<double> CSecantMethod::calculateRoot(CPolynomial polynomial)
{

}