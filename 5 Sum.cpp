//Напишите программу, которая считает сумму всех четных чисел от 2 до 100 с помощью цикла while и инкремента

#include <iostream>

using namespace std;

int main()
{
    int num = 2;
    int total = 2;
    
    while (num < 100)
    {
        num = num +2;
        total += num;
    }
    cout << "Сумма всех четных чисел от 2 до 100 = " << total << endl;
    
    return 0;
}