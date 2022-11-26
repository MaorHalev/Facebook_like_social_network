#include "Status.h"

Status::Status(const char* inputText)
	: currentTime(time(NULL)), statusTime(localtime(&currentTime)), dateOfStatus(statusTime->tm_mday, (statusTime->tm_mon) + 1, (statusTime->tm_year + 1900))//ctor
{
	textLen = strlen(inputText) + 1;
	text = new char[textLen];
	strcpy(text, inputText);
}
const tm& Status::getTime()   const
{
	return *statusTime;
}
void Status::showTime()				const
{
	char time_string[100];
	strftime(time_string, 50, "Current time is %T", statusTime);
	cout << time_string << endl;
}
const char* Status::GetText() const
{
	return text;
}
void  Status::showText() const
{
	cout << text << endl;
}
int   Status::getTextLen()      const
{
	return  strlen(text);
}
const Date& Status::getDate() const
{
	return dateOfStatus;
}
Status::~Status()
{
	delete[]text;
}