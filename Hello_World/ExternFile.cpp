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
/*
multi-line doc...
...
*/
void ExternFile::setName(string x)
{
	name = x;														  
}
