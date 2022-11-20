#ifndef __FANPAGE_H
#define __FANPAGE_H
#include "User.h"

class Fanpage
{
public:
	Fanpage(char* newName);
	char* getName()     const;
	void printName()    const;
	void addFan(User* fan);
	void addStatus(Status* status);
	void showAllFans()  const;
	void showAllStatus() const;
	int getNumberOfStatus() const;
	int getNumberOfFans() const;
	~Fanpage();
private:
	char* name;
	int numberOfFans,numberOfStatus,physicalNumberOfFans,PhysicalNumberOfStatus;
	User** arrOfFans;
	bool setName(char* newName);
	Status** statusPtrArr;
	Fanpage(const Fanpage&);
};


#endif