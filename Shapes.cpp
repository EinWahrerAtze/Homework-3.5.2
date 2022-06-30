#include "Shapes.h"

// class Equilateral_triangle
Equilateral_triangle::Equilateral_triangle(const std::wstring & nm, const int a, const int A): name(nm), m_a(a), m_A(A)
{
};

void Equilateral_triangle::show() const
{
	std::wcout << get_name() << L":\n";
	std::wcout << L"Стороны: a = " << get_a() << L", b = " << get_a() << L", c = " << get_a();
	std::wcout << L"\nУглы: A = " << get_A() << L"°, B = " << get_A() << L"°, C = " << get_A() << L"°\n\n";
}

const std::wstring & Equilateral_triangle::get_name() const
{
	return name;
}

int Equilateral_triangle::get_a() const
{
	return m_a;
}

int Equilateral_triangle::get_A() const
{
	return m_A;
}

Equilateral_triangle::~Equilateral_triangle()
{
};

// class Isosceles_triangle
Isosceles_triangle::Isosceles_triangle(const std::wstring & nm, const int a, const int b, const int A, const int B): Equilateral_triangle(nm, a, A)
{
	m_b = b;
	m_B = B;
}

void Isosceles_triangle::show() const
{
	std::wcout << get_name() << L":\n";
	std::wcout << L"Стороны: a = " << get_a() << L", b = " << get_b() << L", c = " << get_a();
	std::wcout << L"\nУглы: A = " << get_A() << L"°, B = " << get_B() << L"°, C = " << get_A() << L"°\n\n";
}

int Isosceles_triangle::get_b() const
{
	return m_b;
}

int Isosceles_triangle::get_B() const
{
	return m_B;
}

// class Right_triangle
Right_triangle::Right_triangle(const std::wstring & nm, const int a, const int b, const int c, const int A, const int B,
							   const int C): Isosceles_triangle(nm, a, b, A, B)
{
	m_c = c;
	m_C = C;
}

void Right_triangle::show() const
{
	std::wcout << get_name() << L":\n";
	std::wcout << L"Стороны: a = " << get_a() << L", b = " << get_b() << L", c = " << get_c();
	std::wcout << L"\nУглы: A = " << get_A() << L"°, B = " << get_B() << L"°, C = " << get_C() << L"°\n\n";
}

int Right_triangle::get_c() const
{
	return m_c;
}

int Right_triangle::get_C() const
{
	return m_C;
}

// class Triangle
Triangle::Triangle(const std::wstring & nm, const int a, const int b, const int c, const int A, const int B,
				   const int C): Right_triangle(nm, a, b, c, A, B, C)
{
};

void Triangle::show() const
{
	Right_triangle::show();
}

// class Square
Square::Square(const std::wstring & nm, const int a, const int A): Equilateral_triangle(nm, a, A)
{
};

void Square::show() const
{
	std::wcout << get_name() << L":\n";
	std::wcout << L"Стороны: a = " << get_a() << L", b = " << get_a() << L", c = " << get_a() << L", d = " << get_a();
	std::wcout << L"\nУглы: A = " << get_A() << L"°, B = " << get_A() << L"°, C = " << get_A() << L"°, D = " << get_A() << L"°\n\n";
}

// class Rhombus
Rhombus::Rhombus(const std::wstring & nm, const int a, const int A, const int B): Equilateral_triangle(nm, a, A)
{
	m_B = B;
}

void Rhombus::show() const
{
	std::wcout << get_name() << L":\n";
	std::wcout << L"Стороны: a = " << get_a() << L", b = " << get_a() << L", c = " << get_a() << L", d = " << get_a();
	std::wcout << L"\nУглы: A = " << get_A() << L"°, B = " << get_B() << L"°, C = " << get_A() << L"°, D = " << get_B() << L"°\n\n";
}

int Rhombus::get_B() const
{
	return m_B;
}

// class Rectangle
Rectangle::Rectangle(const std::wstring & nm, const int a, const int b, const int A): Equilateral_triangle(nm, a, A)
{
	m_b = b;
};

void Rectangle::show() const
{
	std::wcout << get_name() << L":\n";
	std::wcout << L"Стороны: a = " << get_a() << L", b = " << get_b() << L", c = " << get_a() << L", d = " << get_b();
	std::wcout << L"\nУглы: A = " << get_A() << L"°, B = " << get_A() << L"°, C = " << get_A() << L"°, D = " << get_A() << L"°\n\n";
}

int Rectangle::get_b() const
{
	return m_b;
}

// class Parallelogram
Parallelogram::Parallelogram(const std::wstring & nm, const int a, const int b, const int A, const int B): Isosceles_triangle(nm, a, b, A, B)
{
};

void Parallelogram::show() const
{
	std::wcout << get_name() << L":\n";
	std::wcout << L"Стороны: a = " << get_a() << L", b = " << get_b() << L", c = " << get_a() << L", d = " << get_b();
	std::wcout << L"\nУглы: A = " << get_A() << L"°, B = " << get_B() << L"°, C = " << get_A() << L"°, D = " << get_B() << L"°\n\n";
}

// class Quadrangle
Quadrangle::Quadrangle(const std::wstring & nm, const int a, const int b, const int c, const int d,
					   const int A, const int B, const int C, const int D): Right_triangle(nm, a, b, c, A, B, C)
{
	m_d = d;
	m_D = D;
}

void Quadrangle::show() const
{
	std::wcout << get_name() << L":\n";
	std::wcout << L"Стороны: a = " << get_a() << L", b = " << get_b() << L", c = " << get_c() << L", d = " << get_d();
	std::wcout << L"\nУглы: A = " << get_A() << L"°, B = " << get_B() << L"°, C = " << get_C() << L"°, D = " << get_D() << L"°\n";
}

int Quadrangle::get_d() const
{
	return m_d;
}

int Quadrangle::get_D() const
{
	return m_D;
}