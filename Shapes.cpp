#include "Shapes.h"

// Абстрактный базовый класс Фигура
void Figure::print()
{
	std::wcout << name << ":\n";
	std::wcout << L"Стороны: ";
	print_sides();
	std::wcout << '\n';
	std::wcout << L"Углы: ";
	print_angles();
	std::wcout << '\n';
}

Figure::Figure(const std::wstring & nm): name(nm) { }
Figure::~Figure() { }

// Треугольник
Triangle::Triangle(const std::wstring & nm, int a, int b, int c, int A, int B, int C) : Figure(nm)
{
	m_a = a;
	m_b = b;
	m_c = c;
	m_A = A;
	m_B = B;
	m_C = C;
}

void Triangle::print_sides() const
{
	std::wcout << L"a = " << m_a << L", b = " << m_b << L", c = " << m_c << L".";
}

void Triangle::print_angles() const
{
	std::wcout << L"A = " << m_A << L"°, B = " << m_B << L"°, C = " << m_C << L"°.";
}

// Прямоугольный треугольник
Right_triangle::Right_triangle(const std::wstring & nm, int a, int b, int c, int A, int B) : Triangle(nm, a, b, c, A, B, 90) { }

// Равнобедренный треугольник
Isosceles_triangle::Isosceles_triangle(const std::wstring & nm, int a, int b, int A, int B) : Triangle(nm, a, b, a, A, B, A) { }

// Равносторонний треугольник
Equilateral_triangle::Equilateral_triangle(const std::wstring & nm, int a, int A) : Triangle(nm, a, a, a, A, A, A) { }

// Четырёхугольник
Quadrangle::Quadrangle(const std::wstring & nm, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(nm)
{
	m_a = a;
	m_b = b;
	m_c = c;
	m_d = d;
	m_A = A;
	m_B = B;
	m_C = C;
	m_D = D;
}

void Quadrangle::print_sides() const
{
	std::wcout << L"a = " << m_a << L", b = " << m_b << L", c = " << m_c << L", d = " << m_d << L".";
}

void Quadrangle::print_angles() const
{
	std::wcout << L"A = " << m_A << L"°, B = " << m_B << L"°, C = " << m_C << L"°, D = " << m_D << L"°.";
}

// Прямоугольник
Rectangle::Rectangle(const std::wstring & nm, int a, int b, int A) : Parallelogram(nm, a, b, A, A) { }

// Квадрат
Square::Square(const std::wstring & nm, int a, int A) : Rectangle(nm, a, a, A) { }

// Параллелограмм
Parallelogram::Parallelogram(const std::wstring & nm, int a, int b, int A, int B) : Quadrangle(nm, a, b, a, b, A, B, A, B) { }

// Ромб
Rhombus::Rhombus(const std::wstring & nm, int a, int A, int B) : Parallelogram(nm, a, a, A, B) { }