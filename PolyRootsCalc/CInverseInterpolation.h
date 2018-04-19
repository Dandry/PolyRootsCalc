#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootFindingAlgorithm.h"

class CInverseInterpolation : public CRootFindingAlgorithm
{
	public:
		CInverseInterpolation::CInverseInterpolation(double initialApproximation, int maxIterations, double tolerance);
		CResult<double> calculateRoot(CPolynomial* polynomial);
};