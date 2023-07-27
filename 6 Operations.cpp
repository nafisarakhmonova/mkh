/* Напишите программу, которая запрашивает у пользователя два числа и операцию
(+, -, *, /), которую он хочет выполнить над этими числами. Используя оператор
switch, выполните выбранную операцию и выведите результат на экран */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char oper;
 
    cout << "Введите первое число: "; cin >> a;
    cout << "Введите операцию: "; cin >> oper;
    cout << "Введите второе число: "; cin >> b;
 
    switch (oper)
	{
	    case '+' : cout << a + b; break;
	    case '-' : cout << a - b; break;
	    case '*' : cout << a * b; break;
	    case '/' : cout << a / b; break;
	}

    return 0;
}
