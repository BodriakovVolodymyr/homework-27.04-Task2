#include "Voice_recording.h"

Voice_recording::Voice_recording(string speaker, int duration, string recording_date)
{
	this->speaker = speaker;
	this->duration = duration;
	this->recording_date = recording_date;
}

void Voice_recording::showInfo()
{
	cout << "Speaker: " << speaker << endl;
	cout << "Duration: " << duration << " seconds" << endl;
	cout << "Recording Date: " << recording_date << endl;
}
