#ifndef _OBSERVER1_H_
#define _OBSERVER1_H_

#include "Observer.h"

//#pragma once
class Observer1 : public Observer
{
public:
	Observer1();
	~Observer1();

	//override
	virtual void update();
};


#endif // !_OBSERVER1_H_

