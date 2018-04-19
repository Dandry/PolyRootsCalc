#pragma once
#include "stdafx.h"
#include "CResult.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace Runtime;

class CFileManager
{
	public:
		bool tryReadFromFile(OpenFileDialog^ _dlg, [InteropServices::Out] String^% output);
		bool trySaveToFile(SaveFileDialog^ _dlg, String^ fileContent, [InteropServices::Out] String^% output);
};
