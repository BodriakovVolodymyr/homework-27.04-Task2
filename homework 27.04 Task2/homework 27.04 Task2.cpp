#include "Voice_recording.h"
#include "Book.h"
#include "Talking_book.h"
#include <iostream>

int main()
{
	Book a("J.K. Rowling", "First Edition", "1997", 9780747532743);
	cout << "Book Information:" << endl;
	a.showInfo();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	Voice_recording b("John Doe", 840, "2023-04-27");
	cout << "Voice Recording Information:" << endl;
	b.showInfo();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	Talking_book c("J.K. Rowling", "First Edition", "1997", 9780747532743, "John Doe", 840, "2023-04-27", 2);
	cout << "Talking Book Information:" << endl;
	c.ShowInfo();
}

