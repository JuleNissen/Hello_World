// Hello_World.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "ExternFile.h"

//ExternFile ex;

int volume;
int getVolume(int l = 0, int h = 0, int w = 0);
string getMessage(int volume);


int main() 
{
	cout << getVolume(5,2,3) << endl;

	cout << getMessage(volume) << endl;

	return 0;
}

int getVolume(int l, int h, int w)
{
	return volume = l * h * w;
}

string getMessage(int volume)
{
	string msg;

	if (volume == 0)
	{
		msg = "There is nothing here!";
	}

	if (volume < 0)
	{
		msg = "You just made a tear in the spacetime countinium!";
	}

	if (volume > 0)
	{
		msg = "The volume is: " + std::to_string(volume);
	}

	return msg;
}

/*
/*
Simple small interaction with user...

void stuff()
{
	cout << "Hello world! \nNew line \n";
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
}*/
