#include "stdafx.h"
#include "ExternFile.h"

string name;

ExternFile::ExternFile()
{
	cout << "External construct called... \n";
	name = "null";
}

string ExternFile::getName()
{
	return name;
}

void ExternFile::setName(string x)
{
	x = name;
}
