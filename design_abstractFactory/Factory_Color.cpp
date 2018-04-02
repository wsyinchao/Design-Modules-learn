#include "Factory_Color.h"
#include "Red.h"
#include "Green.h"



Factory_Color::Factory_Color()
{
}


Factory_Color::~Factory_Color()
{
}


//
Color* Factory_Color::getColor(ColorType colorType)
{
	Color* color = nullptr;
	switch (colorType)
	{
	case red:
		color = new Red();
		break;
	case green:
		color = new Green();
		break;
	default:
		break;
	}

	return color;
}
