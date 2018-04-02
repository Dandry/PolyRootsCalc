#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootFindingAlgorithm.h"

class CNewtonMethod : public CRootFindingAlgorithm
{
	public:
		CNewtonMethod(int initialApproximation, int maxIterations, int tolerance) : CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance) {};
		list<double>calculateRoot(CPolynomial polynomial);
};