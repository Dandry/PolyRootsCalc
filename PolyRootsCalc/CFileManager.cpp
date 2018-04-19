#include "stdafx.h"
#include "CFileManager.h"
#include "CResult.h"

using namespace std;
using namespace System;

bool CFileManager::tryReadFromFile(OpenFileDialog^ _dlg, [Runtime::InteropServices::Out] String^% output)
{
	bool isSuccess = false;

	System::IO::Stream^ fileStream = nullptr;
	System::IO::StreamReader^ streamReader = nullptr;

	try
	{
		fileStream = _dlg->OpenFile();
		streamReader = gcnew System::IO::StreamReader(fileStream);
		output = streamReader->ReadToEnd();

		isSuccess = true;
	}
	catch (Exception ^ex)
	{
		output = ex->Message;
	}
	finally
	{
		streamReader->Close();
		fileStream->Close();
		delete streamReader;
		delete fileStream;
	}

	return isSuccess;
}

bool CFileManager::trySaveToFile(SaveFileDialog^ _dlg, String^ fileContent, [Runtime::InteropServices::Out] String^% output)
{
	bool isSuccess = false;

	System::IO::Stream^ fileStream = nullptr;
	System::IO::StreamWriter^ streamWriter = nullptr;

	try
	{
		fileStream = _dlg->OpenFile();
		streamWriter = gcnew System::IO::StreamWriter(fileStream);

		streamWriter->Write(fileContent);
		streamWriter->Flush();

		isSuccess = true;
	}
	catch (Exception ^ex)
	{
		output = ex->Message;
	}
	finally
	{
		streamWriter->Close();
		fileStream->Close();
		delete streamWriter;
		delete fileStream;
	}

	return isSuccess;
}
