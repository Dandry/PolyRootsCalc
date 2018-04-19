#pragma once
#include <string>

using namespace std;

template <class TResult> class CResult
{
	public:
		CResult(TResult result);
		CResult(string message);
		~CResult();
		
		bool isValid();
		TResult getResult();
		string getFailResultMessage();
	
	private:
		TResult resultObject;
		bool success;
		string failMessage;
};

template <class TResult>
CResult<TResult>::CResult(TResult result)
{
	this->resultObject = result;
	this->failMessage = "success";
	this->success = true;
}

template <class TResult>
CResult<TResult>::CResult(string message)
{
	this->failMessage = message;
	this->resultObject = NULL;
	this->success = false;
}

template <class TResult>
CResult<TResult>::~CResult()
{
}

template <class TResult>
bool CResult<TResult>::isValid()
{
	return this->success;
}

template<class TResult>
TResult CResult<TResult>::getResult()
{
	return this->resultObject;
}

template<class TResult>
string CResult<TResult>::getFailResultMessage()
{
	return this->failMessage;
}
