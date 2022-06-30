#pragma once
#include <iostream>
#include <string>

class Equilateral_triangle
{
public:
	Equilateral_triangle(const std::wstring & nm = L"Равносторонний треугольник", const int a = 30, const int A = 60);
	virtual void show() const;
	const std::wstring & get_name() const;
	int get_a() const;
	int get_A() const;
	virtual ~Equilateral_triangle();
private:
	std::wstring name;
	int m_a;
	int m_A;
};

class Isosceles_triangle: public Equilateral_triangle
{
public:
	Isosceles_triangle(const std::wstring & nm = L"Равнобедренный треугольник", const int a = 10, const int b = 20,
					   const int A = 50, const int B = 80);
	void show() const override;
	int get_b() const;
	int get_B() const;
private:
	int m_b;
	int m_B;
};

class Right_triangle: public Isosceles_triangle
{
public:
	Right_triangle(const std::wstring & nm = L"Прямоугольный треугольник", const int a = 10, const int b = 20,
				   const int c = 30, const int A = 40, const int B = 50, const int C = 90);
	void show() const override;
	int get_c() const;
	int get_C() const;
private:
	int m_c;
	int m_C;
};

class Triangle: public Right_triangle
{
public:
	Triangle(const std::wstring & nm = L"Треугольник", const int a = 10, const int b = 20,
			 const int c = 30, const int A = 50, const int B = 60, const int C = 70);
	void show() const override;
};

class Square: public Equilateral_triangle
{
public:
	Square(const std::wstring & nm = L"Квадрат", const int a = 20, const int A = 90);
	void show() const override;
};

class Rhombus: public Equilateral_triangle
{
public:
	Rhombus(const std::wstring & nm = L"Ромб", const int a = 30, const int A = 60, const int B = 120);
	void show() const override;
	int get_B() const;
private:
	int m_B;
};

class Rectangle: public Equilateral_triangle
{
public:
	Rectangle(const std::wstring & nm = L"Прямоугольник", const int a = 10, const int b = 20, const int A = 90);
	void show() const override;
	int get_b() const;
private:
	int m_b;
};

class Parallelogram: public Isosceles_triangle
{
public:
	Parallelogram(const std::wstring & nm = L"Параллелограмм", const int a = 20, const int b = 30,
				  const int A = 60, const int B = 120);
	void show() const override;
};

class Quadrangle: public Right_triangle
{
public:
	Quadrangle(const std::wstring & nm = L"Четырёхугольник", const int a = 10, const int b = 20, const int c = 30,
			   const int d = 40, const int A = 70, const int B = 80, const int C = 90, const int D = 120);
	void show() const override;
	int get_d() const;
	int get_D() const;
private:
	int m_d;
	int m_D;
};