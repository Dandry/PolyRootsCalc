#pragma once

#include "stdafx.h"
#include "CPolynomial.h"

using namespace std;

class CRootFindingAlgorithm
{
	public:
		CRootFindingAlgorithm(int initialApproximation, int maxIterations, int tolerance);
		virtual ~CRootFindingAlgorithm() = 0;
		virtual list<double>calculateRoot(CPolynomial polynomial) = 0;

	protected:
		int initialApproximation;
		int maxIterations;
		int tolerance;
};
