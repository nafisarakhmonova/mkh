#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char oper;
 
    cout << "Введите первое число: "; cin >> a;
    cout << "Введите первое число: "; cin >> b;
    cout << "Введите операцию: "; cin >> oper;
 
    switch (oper)
	{
	    case '+' : cout << a+b; break;
	    case '-' : cout << a-b; break;
	    case '*' : cout << a*b; break;
	    case '/' : cout << a/b; break;
	}

    return 0;
}