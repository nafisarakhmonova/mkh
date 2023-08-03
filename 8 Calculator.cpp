#include<iostream>
#include<cmath>
using namespace std;

// сложение
float addition(float a, float b) 
{
    float result = a + b;
    return result;
}
// вычитание
float subtraction(float a, float b) 
{
    float result = a - b;
    return result;
}
// умножение
float multiplication(float a, float b)
{
    float result = a * b;
    return result;
}
// деление
float division(float a, float b) 
{
    float result = a / b;
    return result;
}
// возведение в степень
float exponentiation(float a, float b) 
{
    float result = pow(a,b);
    return result;
}

int main()
{
    float a, b;
    char oper;
 
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите операцию: "; 
    cin >> oper;
    cout << "Введите второе число: "; 
    cin >> b;
 
    switch (oper)
    {
	    case '+' :
	        cout << addition(a, b);
	        break;
	    case '-' :
	        cout << subtraction(a, b);
	        break;
	    case '*' :
	        cout << multiplication(a, b);
	        break;
	    case '/' :
	        cout << division(a, b);
	        break;
	    case '^' :
	        cout << exponentiation(a, b);
	        break;
    }

    return 0;
}
