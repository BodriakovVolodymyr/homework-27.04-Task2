#pragma once
#include "Voice_recording.h"
#include "Book.h"
class Talking_book :protected Book, protected Voice_recording
{
	int tapes;
public:
	Talking_book(string author, string edition, string date, long isbn, string speaker, int duration, string recording_date, int tapes);

	void ShowInfo();
};

