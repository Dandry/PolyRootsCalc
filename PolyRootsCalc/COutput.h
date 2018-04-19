#pragma once
#include <string>

using namespace std;

class COutput 
{
	public:
		COutput();
		~COutput();

		string get();
		void append(COutput _outpt);
		void appendWithSpace(string _str);
		void endLine();
		void clear();

	private:
		string output;
};