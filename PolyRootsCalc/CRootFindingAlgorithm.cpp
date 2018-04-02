#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootFindingAlgorithm.h"

using namespace std;
using namespace System;

CRootFindingAlgorithm::CRootFindingAlgorithm(int initialApproximation, int maxIterations, int tolerance)
{
	this->initialApproximation = initialApproximation;
	this->maxIterations = maxIterations;
	this->tolerance = tolerance;
}