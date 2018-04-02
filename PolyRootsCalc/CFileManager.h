#pragma once
#include "stdafx.h"

using namespace std;

class CFileManager
{
	public:
		CFileManager();

		string readFromFile();
		void saveToFile(string fileContent);
};
