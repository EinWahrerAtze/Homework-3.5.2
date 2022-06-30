#pragma once
#include <iostream>
#include <string>

class Equilateral_triangle
{
public:
	Equilateral_triangle(const std::wstring & nm = L"Equilateral triangle", const int sd_a = 30, const int agl_A = 60);
	virtual void show();
	const std::wstring & get_name() const;
	int get_side_a() const;
	int get_angle_A() const;
	virtual ~Equilateral_triangle();
private:
	std::wstring name;
	int side_a;
	int angle_A;
};

class Isosceles_triangle: public Equilateral_triangle
{
public:
	Isosceles_triangle(const std::wstring & nm = L"Isosceles triangle", const int sd_a = 10, const int sd_b = 20,
					   const int agl_A = 50, const int agl_B = 80);
	void show() override;
	int get_side_b() const;
	int get_angle_B() const;
private:
	int side_b;
	int angle_B;
};

class Right_triangle: public Isosceles_triangle
{
public:
	Right_triangle(const std::wstring & nm = L"Right triangle", const int sd_a = 10, const int sd_b = 20,
				   const int sd_c = 30, const int agl_A = 40, const int agl_B = 50, const int agl_C = 90);
	void show() override;
	int get_side_c() const;
	int get_angle_C() const;
private:
	int side_c;
	int angle_C;
};

class Triangle: public Right_triangle
{
public:
	Triangle(const std::wstring & nm = L"Triangle", const int sd_a = 10, const int sd_b = 20,
			 const int sd_c = 30, const int agl_A = 50, const int agl_B = 60, const int agl_C = 70);
	void show() override;
};

class Square: public Equilateral_triangle
{
public:
	Square(const std::wstring & nm = L"Square", const int sd_a = 20, const int agl_A = 90);
	void show() override;
};

class Rhombus: public Equilateral_triangle
{
public:
	Rhombus(const std::wstring & nm = L"Rhombus", const int sd_a = 30,
			const int agl_A = 60, const int agl_B = 120);
	void show() override;
	int get_angle_B() const;
private:
	int angle_B;
};

class Rectangle: public Equilateral_triangle
{
public:
	Rectangle(const std::wstring & nm = L"Rectangle", const int sd_a = 10,
			  const int sd_b = 20, const int agl_A = 90);
	void show() override;
	int get_side_b() const;
private:
	int side_b;
};

class Parallelogram: public Isosceles_triangle
{
public:
	Parallelogram(const std::wstring & nm = L"Parallelogram", const int sd_a = 20, const int sd_b = 30,
				  const int agl_A = 60, const int agl_B = 120);
	void show() override;
};

class Quadrangle: public Right_triangle
{
public:
	Quadrangle(const std::wstring & nm = L"Quadrangle", const int sd_a = 10, const int sd_b = 20,
			   const int sd_c = 30, const int sd_d = 40, const int agl_A = 70, const int agl_B = 80,
			   const int agl_C = 90, const int agl_D = 120);
	void show() override;
	int get_side_d() const;
	int get_angle_D() const;
private:
	int side_d;
	int angle_D;
};