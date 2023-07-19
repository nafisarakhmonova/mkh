/*
Напишите программу для подсчета налогов, со следующими условиями:
•	Если зарплата меньше 1500$, значит нет налогов
•	Если зарплата от 1501 до 3000$ (1501<=salary<3000) значит налог должен быть в размере 10%
•	Если зарплата от 3001 до 5000$ (3001<=salary<5000) значит налог должен быть в размере 20%
•	Если зарплата выше 5000$, значит налог должен быть равн 30%
*/

#include <iostream>

using namespace std;

int main()
{
    int salary1;
    float tax;
    float salary2;
    cout << "Введите значение зарплаты ($): ";
    cin >> salary1;
    if (salary1 >= 5000)
    {
        tax = salary1 * 0.3;
        salary2 = salary1 - tax;
        cout << "Значение налога: " << tax << " Зарплата после вычета налога: " << salary2 << endl;
    }
    else if (salary1 >= 3001 && salary1 < 5000)
    {
        tax = salary1 * 0.2;
        salary2 = salary1 - tax;
        cout << "Значение налога: " << tax << " Зарплата после вычета налога: " << salary2 << endl;
    }
    else if (salary1 >= 1501 && salary1 < 3000)
    {
        tax = salary1 * 0.2;
        salary2 = salary1 - tax;
        cout << "Значение налога: " << tax << " Зарплата после вычета налога: " << salary2 << endl;
    }
    else
    {
        salary2 = salary1;
        cout << "Значение налога: 0" << " Зарплата после вычета налога: " << salary2 << endl;
    }
    return 0;
}