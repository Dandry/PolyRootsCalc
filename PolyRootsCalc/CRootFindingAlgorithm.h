#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CResult.h"

using namespace std;

class CRootFindingAlgorithm
{
	public:
		CRootFindingAlgorithm(double initialApproximation, int maxIterations, double tolerance);
		virtual CResult<double> calculateRoot(CPolynomial* polynomial) = 0;

	protected:
		double initialApproximation;
		int maxIterations;
		double tolerance;
};
