#include <iostream>
#include "Shapes.h"

void print_info(Equilateral_triangle * p)
{
	p->show();
}

int main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 9;
	Equilateral_triangle * pointer[SIZE];

	pointer[0] = new Equilateral_triangle;
	pointer[1] = new Isosceles_triangle;
	pointer[2] = new Right_triangle;
	pointer[3] = new Triangle;
	pointer[4] = new Square;
	pointer[5] = new Rhombus;
	pointer[6] = new Rectangle;
	pointer[7] = new Parallelogram;
	pointer[8] = new Quadrangle;

	for (int i = 0; i < SIZE; ++i)
	{
//		pointer[i]->show();
		print_info(pointer[i]);
	}

	for (int i = 0; i < SIZE; ++i)
	{
		delete pointer[i];
	}

	return 0;
}