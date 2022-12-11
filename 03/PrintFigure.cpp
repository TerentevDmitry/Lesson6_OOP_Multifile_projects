#include "PrintFigure.h"
#include <iostream>

void printFigure(Figure* figure)
{
	std::cout << std::endl;
	std::cout << figure->getNameOfFigure() << ":" << std::endl;

	std::cout << "�������:";
	std::cout << " a = " << figure->getSideLengthA() << ", b = " << figure->getSideLengthB() << ", � = " << figure->getSideLengthC();
	if (figure->getHaveFourSides())
	{
		std::cout << ", d = " << figure->getSideLengthD() << std::endl;
	}
	else { std::cout << std::endl; }

	std::cout << "����:";
	std::cout << " � = " << figure->getAngleA() << ", � = " << figure->getAngleB() << ", � = " << figure->getAngleC();
	if (figure->getHaveFourSides()) { std::cout << ", D = " << figure->getAngleD() << std::endl; }
	else { std::cout << std::endl; }
}