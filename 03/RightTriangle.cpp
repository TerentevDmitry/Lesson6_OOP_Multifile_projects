#include "RightTriangle.h"
#include "Triangle.h"

RightTriangle::RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB)
		: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, 90)
	{
		Triangle::nameOfFigure_ = "Прямоугольный треугольник";
	};