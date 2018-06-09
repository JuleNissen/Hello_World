#pragma once
class ExternFile
{
public:
	/**
	 *Constructor for ExternFile, prints a message, and sets name to "null"
	 */
	ExternFile();

	/*
	Return name as string
	*/
	string getName();

	/*
	Set name to given parameter
	@param string to give as name
	*/
	void setName(string);

};