#include <iostream>
#include "Shapes.h"

void print_info(Figure * fg)
{
	fg->print();
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const int SIZE = 9;
	Figure * pointer[SIZE];

	pointer[0] = new Triangle;
	pointer[1] = new Right_triangle;
	pointer[2] = new Isosceles_triangle;
	pointer[3] = new Equilateral_triangle;
	pointer[4] = new Quadrangle;
	pointer[5] = new Rectangle;
	pointer[6] = new Square;
	pointer[7] = new Parallelogram;
	pointer[8] = new Rhombus;
	
	for (int i = 0; i < SIZE; ++i)
	{
		print_info(pointer[i]);
		std::wcout << (i == SIZE - 1 ? "" : "\n");
	}

	for (int i = 0; i < SIZE; ++i)
	{
		delete pointer[i];
	}

	return 0;
}