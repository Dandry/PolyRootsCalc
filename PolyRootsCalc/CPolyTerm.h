#pragma once

#include "stdafx.h"

using namespace std;

class CPolyTerm
{
	public:
		double coefficient() const { return this->coefficient_; };
		int degree() const { return this->degree_; };

		CPolyTerm(double coefficient, int degree);
		~CPolyTerm();

	private:
		double coefficient_;
		int degree_;
};