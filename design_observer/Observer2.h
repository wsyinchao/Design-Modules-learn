#ifndef _OBSERVER2_H_
#define _OBSERVER2_H_

#include "Observer.h"

//#pragma once
class Observer2 : public Observer
{
public:
	Observer2();
	~Observer2();

	//
	virtual void update();
};

#endif // !_OBSERVER2_H_

