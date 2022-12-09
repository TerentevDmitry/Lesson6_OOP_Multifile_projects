#include <iostream>
#include "MathFunction.h"

int main()
{
    setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
    system("chcp 1251");

    double firstNumber = 0;
    double secondNumber = 0;
    int operationSelection = 0;
    std::string nameOfOperation;
    bool checkingValue = false;

    std::cout << "Введите первое число: ";
    std::cin >> firstNumber;
   
    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;

    do
    {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> operationSelection;

        if (operationSelection == 4 && secondNumber == 0)
        {
            std::cout << " Делить на ноль нельзя... " << std::endl;
        }
        else if (operationSelection <= 5 && operationSelection >= 1)
        {
            checkingValue = true;
        }
        else
        {
            std::cout << " Плохой выбор. Выберете еще разок... " << std::endl;
        }
    } while (!checkingValue);
    
    switch (operationSelection)
    {
        case(1):
        {
            nameOfOperation = "плюс";
            break;
        }
        case(2):
        {
            nameOfOperation = "минус";
            break;
        }
        case(3):
        {
            nameOfOperation = "умножить";
            break;
        }
        case(4):
        {
            nameOfOperation = "разделить";
            break;
        }
        case(5):
        {
            nameOfOperation = "в степени";
            break;
        }
    };

    std::cout << firstNumber << " " << nameOfOperation << " " << secondNumber << " = ";
    
    if (operationSelection == 1)
    {
        MathFunc addition1;
        std::cout << addition1.addition(firstNumber, secondNumber);
    }
    else if (operationSelection == 2)
    {
        MathFunc subtraction1;
        std::cout << subtraction1.subtraction(firstNumber, secondNumber);
    }
    else if (operationSelection == 3)
    {
        MathFunc multiplication1;
        std::cout << multiplication1.multiplication(firstNumber, secondNumber);
    }
    else if (operationSelection == 4)
    {
        MathFunc division1;
        std::cout << division1.division(firstNumber, secondNumber);
    }
    else
    {
        MathFunc exponentiation1;
        std::cout << exponentiation1.exponentiation(firstNumber, secondNumber);
    };
};