#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootFindingAlgorithm.h"
#include "CResult.h"

class CNewtonMethod : public CRootFindingAlgorithm
{
	public:
		CNewtonMethod(double initialApproximation, int maxIterations, double tolerance);
		 CResult<double> calculateRoot(CPolynomial* polynomial);
};