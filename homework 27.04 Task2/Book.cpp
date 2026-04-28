#include "Book.h"

Book::Book(string author, string edition, string date, long isbn)
{
	this->author = author;
	this->edition = edition;
	this->date = date;
	this->isbn = isbn;
}

void Book::showInfo()
{
	cout << "Author: " << author << endl;
	cout << "Edition: " << edition << endl;
	cout << "Date: " << date << endl;
	cout << "ISBN: " << isbn << endl;
}
