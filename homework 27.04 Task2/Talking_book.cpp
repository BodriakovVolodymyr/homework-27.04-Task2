#include "Talking_book.h"

Talking_book::Talking_book(string author, string edition, string date, long isbn, string speaker, int duration, string recording_date, int tapes)
	: Book(author, edition, date, isbn), Voice_recording(speaker, duration, recording_date)
{
	this->tapes = tapes;
}

void Talking_book::ShowInfo()
{
	Book::showInfo();
	Voice_recording::showInfo();
	cout << "Number of Tapes: " << tapes << endl;
}
