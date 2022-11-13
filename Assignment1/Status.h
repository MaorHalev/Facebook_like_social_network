#ifndef __Status_H
#define __Status_H
#include <iostream>
#include <string.h>
using namespace std;
#pragma warning (disable: 4996)

class Status
{
public:
	Status(char* inputText);
	Status(const Status& other);
	char* GetText() const;   //��� ���� 2 ? �������� ������ ���� ���� ����
	void ShowText() const;
	~Status();
private:
	char* text;
	int textLen;
};

#endif // !1

