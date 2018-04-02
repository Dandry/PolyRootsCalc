#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootCalculator.h"

using namespace std;
using namespace System;


CRootCalculator::CRootCalculator()
{

}

CRootCalculator::~CRootCalculator()
{
	delete this->polynomials;
	this->polynomials = NULL;

	delete this->polynomialsRoots;
	this->polynomialsRoots = NULL;
}

string calculateRoots(String^ input)
{

}

list<CPolynomial> CRootCalculator::parsePolynomials(String^ input)
{

}

list<list<double>> CRootCalculator::calculateRoots(list<CPolynomial> polynomials)
{

}

string CRootCalculator::getCalculationSummary(list<list<double>> polynomialsRoots)
{

}

double CRootCalculator::getPolynomialMinRoot(list<double> polynomialRoots)
{

}

double CRootCalculator::getPolynomialMaxRoot(list<double> polynomialRoots)
{

}

void CRootCalculator::setInitialApproximation()
{

}

void CRootCalculator::setMaxIterations()
{

}

void CRootCalculator::setTolerance()
{

}
