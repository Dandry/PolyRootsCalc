#pragma once

#include "stdafx.h"
#include "CPolynomial.h"

using namespace std;
using namespace System;

class CInputParser
{
	public:
		list<CPolynomial>* parsePolynomials(String^ input);
		cli::array<String^>^ splitInputLines(String^ input);
};