#pragma once

#include "stdafx.h"
#include "CPolyTerm.h"

CPolyTerm::CPolyTerm(double coefficient, int degree)
{
	this->coefficient_ = coefficient;
	this->degree_ = degree;
}

CPolyTerm::~CPolyTerm()
{
}
