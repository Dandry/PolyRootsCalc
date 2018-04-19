#pragma once

#include <sstream>
#include <iomanip>

using namespace std;

class CFormatConverter
{
	public:
		template <typename T>
		static std::string toStringWithPrecision(const T _val, const int prec);
};

template <typename T>
static string CFormatConverter::toStringWithPrecision(const T _val, const int prec)
{
	std::ostringstream out;
	out << std::setprecision(prec) << _val;
	return out.str();
}
