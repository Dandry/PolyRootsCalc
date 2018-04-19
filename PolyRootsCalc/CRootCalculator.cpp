#pragma once

#include "stdafx.h"
#include "CPolynomial.h"
#include "CRootCalculator.h"
#include "CRootFindingAlgorithm.h"
#include "CNewtonMethod.h"
#include "CSecantMethod.h"
#include "CInverseInterpolation.h"
#include "MethodType.h"
#include "CFormatConverter.h"
#include "COutput.h"

using namespace std;
using namespace System;

CRootCalculator::CRootCalculator(double _initApprox, int _maxIter, double _tol, int _decPlac)
{
	this->initialApproximation = _initApprox;
	this->maxIterations = _maxIter;
	this->tolerance = _tol;
	this->toleranceDecimalPlaces = _decPlac;
}

CRootCalculator::~CRootCalculator()
{
}

string CRootCalculator::calculateRoots(list<CPolynomial>* _pols, methodType _method)
{
	COutput output;

	//tworzymy obiekt klasy odpowiadającej wybranemu algorytmowi
	CRootFindingAlgorithm* algorithm = getAlgorithm(_method);

	double x0 = initialApproximation; //pierwsza lub poprzednia iteracja
	double x1 = 0; //bieżąca iteracja

	int index = 0;
	list<CPolynomial>::iterator it;
	for (it = _pols->begin(); it != _pols->end(); it++)
	{
		output.appendWithSpace("W" + to_string(++index) + ":");

		COutput polyOutput;
		CPolynomial* poly = &(*it);

		//stopień wielomianu określa maksymalną liczbą możliwych miejsc zerowych
		int polyDegree = it->getDegree();
		if (polyDegree == 0)
		{
			polyOutput.appendWithSpace("Podany wielomian jest nieprawidłowy");
		}

		for (int i = polyDegree; i > 0; i--)
		{
			CResult<double> result = algorithm->calculateRoot(poly);

			if (result.isValid())
			{
				//mamy miejsce zerowe
				double root = result.getResult();
				polyOutput.appendWithSpace(CFormatConverter::toStringWithPrecision(root, toleranceDecimalPlaces));

				poly = *poly / root; //obniżamy za jego pomocą stopień wielomianu (twierdzenie Bezouta, schemat Hornera)
			}
			else
			{
				//jeżeli przy wyliczaniu któregokolwiek miejsca zerowego mamy błąd, nie wyświetlamy wyników które już uzyskaliśmy bo nie ma to sensu
				polyOutput.clear(); 
				polyOutput.appendWithSpace(result.getFailResultMessage());
				
				break;
			}
		}

		output.append(polyOutput);
		output.endLine();	
	}

	delete algorithm;

	return output.get();
}

CRootFindingAlgorithm* CRootCalculator::getAlgorithm(methodType _method)
{
	CRootFindingAlgorithm* algorithm;

	switch (_method)
	{
		case methodType::newton:
			algorithm = new CNewtonMethod(this->initialApproximation, this->maxIterations, this->tolerance);
			break;
		case methodType::secant:
			algorithm = new CSecantMethod(this->initialApproximation, this->maxIterations, this->tolerance);
			break;
		case methodType::inverseInterpolation:
			algorithm = new CInverseInterpolation(this->initialApproximation, this->maxIterations, this->tolerance);
			break;
	}

	return algorithm;
}

void CRootCalculator::setInitialApproximation(double value)
{
	this->initialApproximation = value;
}

void CRootCalculator::setMaxIterations(int value)
{
	this->maxIterations = value;
}

void CRootCalculator::setTolerance(double value)
{
	this->tolerance = value;
}
