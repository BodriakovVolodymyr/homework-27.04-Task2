#pragma once
#include <string>
#include<iostream>
#include<fstream>
using namespace std;

class Book
{
	protected:
	string author;
	string edition;
	string date;
	long isbn;
public:
	Book(string author, string edition, string date, long isbn);


	void showInfo();

};

