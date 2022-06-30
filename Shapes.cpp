#include "Shapes.h"

// class Equilateral_triangle
Equilateral_triangle::Equilateral_triangle(const std::wstring & nm, const int sd_a,
										   const int agl_A): name(nm), side_a(sd_a), angle_A(agl_A)
{
};

void Equilateral_triangle::show()
{
	std::wcout << L"Name: " << name << std::endl;
	std::wcout << L"Sides: a = " << side_a << L", b = " << side_a << L", c = " << side_a << std::endl;
	std::wcout << L"Angles: A = " << angle_A << L", B = " << angle_A << L", C = " << angle_A << std::endl;
	std::wcout << std::endl;
}

const std::wstring & Equilateral_triangle::get_name() const
{
	return name;
}

int Equilateral_triangle::get_side_a() const
{
	return side_a;
}

int Equilateral_triangle::get_angle_A() const
{
	return angle_A;
}

Equilateral_triangle::~Equilateral_triangle()
{
};

// class Isosceles_triangle
Isosceles_triangle::Isosceles_triangle(const std::wstring & nm, const int sd_a, const int sd_b,
									   const int agl_a, const int agl_B): Equilateral_triangle(nm, sd_a, agl_a)
{
	side_b = sd_b;
	angle_B = agl_B;
}

void Isosceles_triangle::show()
{
	std::wcout << L"Name: " << get_name() << std::endl;
	std::wcout << L"Sides: a = " << get_side_a() << L", b = " << get_side_b() << L", c = " << get_side_a() << std::endl;
	std::wcout << L"Angles: A = " << get_angle_A() << L", B = " << get_angle_B() << L", C = " << get_angle_A() << std::endl;
	std::wcout << std::endl;
}

int Isosceles_triangle::get_side_b() const
{
	return side_b;
}

int Isosceles_triangle::get_angle_B() const
{
	return angle_B;
}

// class Right_triangle
Right_triangle::Right_triangle(const std::wstring & nm, const int sd_a, const int sd_b,
							   const int sd_c, const int agl_A, const int agl_B,
							   const int agl_C): Isosceles_triangle(nm, sd_a, sd_b, agl_A, agl_B)
{
	side_c = sd_c;
	angle_C = agl_C;
}

void Right_triangle::show()
{
	std::wcout << L"Name: " << get_name() << std::endl;
	std::wcout << L"Sides: a = " << get_side_a() << L", b = " << get_side_b() << L", c = " << get_side_c() << std::endl;
	std::wcout << L"Angles: A = " << get_angle_A() << L", B = " << get_angle_B() << L", C = " << get_angle_C() << std::endl;
	std::wcout << std::endl;
}

int Right_triangle::get_side_c() const
{
	return side_c;
}

int Right_triangle::get_angle_C() const
{
	return angle_C;
}

// class Triangle
Triangle::Triangle(const std::wstring & nm, const int sd_a, const int sd_b,
				   const int sd_c, const int agl_A, const int agl_B,
				   const int agl_C): Right_triangle(nm, sd_a, sd_b, sd_c, agl_A, agl_B, agl_C)
{
};

void Triangle::show()
{
	Right_triangle::show();
}


// class Square
Square::Square(const std::wstring & nm, const int sd_a,
			   const int agl_A): Equilateral_triangle(nm, sd_a, agl_A)
{
};

void Square::show()
{
	std::wcout << L"Name: " << get_name() << std::endl;
	std::wcout << L"Sides: a = " << get_side_a() << L", b = " << get_side_a();
	std::wcout << L", c = " << get_side_a() << L", d = " << get_side_a() << std::endl;
	std::wcout << L"Angles: A = " << get_angle_A() << L", B = " << get_angle_A();
	std::wcout << L", C = " << get_angle_A() << L", D = " << get_angle_A() << std::endl;
	std::wcout << std::endl;
}

// class Rhombus
Rhombus::Rhombus(const std::wstring & nm, const int sd_a, const int agl_A,
				 const int agl_B): Equilateral_triangle(nm, sd_a, agl_A)
{
	angle_B = agl_B;
}

void Rhombus::show()
{
	std::wcout << L"Name: " << get_name() << std::endl;
	std::wcout << L"Sides: a = " << get_side_a() << L", b = " << get_side_a();
	std::wcout << L", c = " << get_side_a() << L", d = " << get_side_a() << std::endl;
	std::wcout << L"Angles: A = " << get_angle_A() << L", B = " << get_angle_B();
	std::wcout << L", C = " << get_angle_A() << L", D = " << get_angle_B() << std::endl;
	std::wcout << std::endl;
}

int Rhombus::get_angle_B() const
{
	return angle_B;
}

// class Rectangle
Rectangle::Rectangle(const std::wstring & nm, const int sd_a, const int sd_b,
					 const int agl_A): Equilateral_triangle(nm, sd_a, agl_A)
{
	side_b = sd_b;
};

void Rectangle::show()
{
	std::wcout << L"Name: " << get_name() << std::endl;
	std::wcout << L"Sides: a = " << get_side_a() << L", b = " << get_side_b();
	std::wcout << L", c = " << get_side_a() << L", d = " << get_side_b() << std::endl;
	std::wcout << L"Angles: A = " << get_angle_A() << L", B = " << get_angle_A();
	std::wcout << L", C = " << get_angle_A() << L", D = " << get_angle_A() << std::endl;
	std::wcout << std::endl;
}

int Rectangle::get_side_b() const
{
	return side_b;
}

// class Parallelogram
Parallelogram::Parallelogram(const std::wstring & nm, const int sd_a, const int sd_b, const int agl_A,
							 const int agl_B): Isosceles_triangle(nm, sd_a, sd_b, agl_A, agl_B)
{
};

void Parallelogram::show()
{
	std::wcout << L"Name: " << get_name() << std::endl;
	std::wcout << L"Sides: a = " << get_side_a() << L", b = " << get_side_b();
	std::wcout << L", c = " << get_side_a() << L", d = " << get_side_b() << std::endl;
	std::wcout << L"Angles: A = " << get_angle_A() << L", B = " << get_angle_B();
	std::wcout << L", C = " << get_angle_A() << L", D = " << get_angle_B() << std::endl;
	std::wcout << std::endl;
}

// class Quadrangle
Quadrangle::Quadrangle(const std::wstring & nm, const int sd_a, const int sd_b, const int sd_c,
					   const int sd_d, const int agl_A, const int agl_B, const int agl_C,
					   const int agl_D): Right_triangle(nm, sd_a, sd_b, sd_c, agl_A, agl_B, agl_C)
{
	side_d = sd_d;
	angle_D = agl_D;
}

void Quadrangle::show()
{
	std::wcout << L"Name: " << get_name() << std::endl;
	std::wcout << L"Sides: a = " << get_side_a() << L", b = " << get_side_b();
	std::wcout << L", c = " << get_side_c() << L", d = " << get_side_d() << std::endl;
	std::wcout << L"Angles: A = " << get_angle_A() << L", B = " << get_angle_B();
	std::wcout << L", C = " << get_angle_C() << L", D = " << get_angle_D() << std::endl;
}

int Quadrangle::get_side_d() const
{
	return side_d;
}

int Quadrangle::get_angle_D() const
{
	return angle_D;
}