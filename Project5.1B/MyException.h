//MyException.h
#pragma once
#include <string>
#include <sstream>

using namespace std;

class MyException
{
private:
	string message;

public:
	MyException() throw();
	MyException(const string& m) throw();
	string what() const throw() { return message; }

};
