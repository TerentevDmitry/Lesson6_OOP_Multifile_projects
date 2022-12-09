#include "MathFunction.h"
#include <cmath>


double MathFunc::addition(double firstNumber, double secondNumber)
{
		return firstNumber + secondNumber;
};

double MathFunc::subtraction(double firstNumber, double secondNumber)
{
	return firstNumber - secondNumber;
};

double MathFunc::multiplication(double firstNumber, double secondNumber)
{
	return firstNumber * secondNumber;
};

double MathFunc::division(double firstNumber, double secondNumber)
{
	return firstNumber / secondNumber;
};

double MathFunc::exponentiation(double firstNumber, double secondNumber)
{
	return std::pow(firstNumber, secondNumber);
};