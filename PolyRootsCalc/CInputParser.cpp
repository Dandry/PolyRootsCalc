#pragma once

#include "CInputParser.h"

using namespace std;
using namespace System;

list<CPolynomial>* CInputParser::parsePolynomials(String^ input)
{
	list<CPolynomial>* polynomials = new list<CPolynomial>();
	list<CPolyTerm>* polyTerms = new list<CPolyTerm>();

	CPolynomial* polynomial;
	CPolyTerm* polyTerm;
	double coefficient;
	int degree;

	cli::array<String^>^ termsDelimiter = gcnew cli::array<String^>{" "};
	cli::array<String^> ^terms;

	cli::array<String^>^ lineDelimiter = gcnew cli::array<String^>{"\r\n"};
	cli::array<String^>^ polynomialLines = input->Split(lineDelimiter, StringSplitOptions::RemoveEmptyEntries);

	for each (String^ polyLine in polynomialLines)
	{
		terms = polyLine->Split(termsDelimiter, StringSplitOptions::RemoveEmptyEntries);
		degree = terms->Length - 1;

		for each (String^ term in terms)
		{
			coefficient = System::Convert::ToDouble(term);

			if (coefficient != 0)
			{
				polyTerm = new CPolyTerm(coefficient, degree);
				polyTerms->push_back(*polyTerm);
			}

			degree--;
		}

		polynomial = new CPolynomial(polyTerms);
		polynomials->push_back(*polynomial);

		polyTerms->clear();
	}

	return polynomials;
}

cli::array<String^>^ CInputParser::splitInputLines(String ^ input)
{
	cli::array<String^>^ lineDelimiter = gcnew cli::array<String^>{"\r\n"};
	return input->Split(lineDelimiter, StringSplitOptions::RemoveEmptyEntries);
}
