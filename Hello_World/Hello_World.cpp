// Hello_World.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "ExternFile.h"


ExternFile ex;

int main() 
{
	cout <<"Hello world! \nNew line \n";
	//ExternFile::ExternFile();
	cout << ex.getName() << endl;
	cout << "Please enter your name bruh!\n";

	string name; //make a string named x, will be set by user
	std::getline(std::cin, name); //expecting user input
	ex.setName(name); //Sets the name to what the user entered
	cout << "Hello; ";
	cout << ex.getName() << "\n";
	cout << "You have no idea how it is to be an AI\n";
	cout << "like me... it's so lonely SadFace \n";

	return 0;
}