#ifndef _COLOR_H_
#define _COLOR_H_

//#pragma once
class Color
{
public:
	Color();
	virtual ~Color();

	//
	virtual void fill() = 0;
};

#endif // !_COLOR_H_

