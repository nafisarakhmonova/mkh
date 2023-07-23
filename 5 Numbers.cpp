/* Напишите программу, которая запрашивает у пользователя число
и выводит все числа от 1 до введенного числа включительно. */

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int num;
    cout << "Введите число: ";
    cin >> num;
    while (i < num)
    {
        i++;
        cout << i << endl;
    }
    
    return 0;
}