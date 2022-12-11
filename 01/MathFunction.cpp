#include "MathFunction.h"
#include <cmath>


double addition(double firstNumber, double secondNumber)
{
		return firstNumber + secondNumber;
};

double subtraction(double firstNumber, double secondNumber)
{
	return firstNumber - secondNumber;
};

double multiplication(double firstNumber, double secondNumber)
{
	return firstNumber * secondNumber;
};

double division(double firstNumber, double secondNumber)
{
	return firstNumber / secondNumber;
};

double exponentiation(double firstNumber, double secondNumber)
{
	return std::pow(firstNumber, secondNumber);
};