#include "COutput.h"
#pragma once

COutput::COutput()
{
	this->output = "";
}

COutput::~COutput()
{
}

string COutput::get()
{
	return this->output;
}

void COutput::append(COutput _outpt)
{
	//_outpt jako parametr i teoretycznie jego zmienna output jest prywatna, 
	//ale ¿e jesteœmy w tej samej klasie to mamy do niej dostêp
	this->output += _outpt.output; 
}

void COutput::appendWithSpace(string _str)
{
	this->output += _str + " ";
}

void COutput::endLine()
{
	this->output += "\r\n";
}

void COutput::clear()
{
	this->output = "";
}

