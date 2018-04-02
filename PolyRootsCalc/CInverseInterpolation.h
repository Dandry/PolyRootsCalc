#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootFindingAlgorithm.h"

class CInverseInterpolation : public CRootFindingAlgorithm
{
	public:
		CInverseInterpolation(int initialApproximation, int maxIterations, int tolerance) : CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance) {};
		list<double>calculateRoot(CPolynomial polynomial);
};