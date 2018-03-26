#ifndef _OBSERVER_H_
#define _OBSERVER_H_

//#pragma once
class Observer
{
public:
	Observer();
	virtual ~Observer();

	//
	virtual void update() = 0;
};

#endif // !_OBSERVER_H_

