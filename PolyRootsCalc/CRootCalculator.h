#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "MethodType.h"
#include "CRootFindingAlgorithm.h"

using namespace std;
using namespace System;

class CRootCalculator
{
	public:
		CRootCalculator(double _initApprox, int _maxIter, double _tol, int _decPlac);
		~CRootCalculator();

		void setInitialApproximation(double _val);
		void setMaxIterations(int _val);
		void setTolerance(double _val);

		string calculateRoots(list<CPolynomial>* _pols, methodType _method);

	private:
		double initialApproximation;
		int maxIterations;
		double tolerance;
		int toleranceDecimalPlaces;

		CRootFindingAlgorithm* CRootCalculator::getAlgorithm(methodType _method);
};
