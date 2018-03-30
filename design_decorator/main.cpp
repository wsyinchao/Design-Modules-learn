#include "redShapeDecorator.h"
#include "shape.h"
#include "circle.h"

#include <iostream>
using namespace std;

int main()
{
	Shape* tcircle = new circle();
	redShapeDecorator* redCircle = new redShapeDecorator(tcircle);

	cout << "common circle:" << endl;
	tcircle->draw();

	cout << endl;
	cout << "red circle:" << endl;
	redCircle->draw();

	return 0;
}