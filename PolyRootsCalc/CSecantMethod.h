#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootFindingAlgorithm.h"

class CSecantMethod : public CRootFindingAlgorithm
{
public:
	CSecantMethod(int initialApproximation, int maxIterations, int tolerance) : CRootFindingAlgorithm(initialApproximation, maxIterations, tolerance) {};
	list<double>calculateRoot(CPolynomial polynomial);
};