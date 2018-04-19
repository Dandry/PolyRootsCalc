#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootFindingAlgorithm.h"

class CSecantMethod : public CRootFindingAlgorithm
{
	public:
		CSecantMethod::CSecantMethod(double initialApproximation, int maxIterations, double tolerance);
		CResult<double> calculateRoot(CPolynomial* polynomial);
};