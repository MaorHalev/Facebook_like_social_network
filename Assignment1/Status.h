#ifndef __Status_H
#define __Status_H
#include <iostream>
#include <string.h>
using namespace std;

class Status
{
public:
	Status(char* text);
	char* GetText() const;   //��� ���� 2 ? �������� ������ ���� ���� ����
	void ShowText() const;
	~Status();
private:
	char* text;
	int textLen;
};

#endif // !1

