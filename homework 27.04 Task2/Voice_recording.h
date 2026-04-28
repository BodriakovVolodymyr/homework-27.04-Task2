#pragma once
#include <string>
#include<iostream>
#include<fstream>
using namespace std;

class Voice_recording
{
protected:
	string speaker;
	int duration;
	string recording_date;
public:
	Voice_recording(string speaker, int duration, string recording_date);

	void showInfo();
};

