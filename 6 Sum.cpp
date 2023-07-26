/* Напишите программу, которая запрашивает у пользователя
целое число N и выводит на экран сумму всех чисел от 1 до N */

#include <iostream>

using namespace std;

int main()
{
    int N;
    int sum = 0;
 
    cout << "Введите целое число: ";
    cin >> N;
 
    for (int i = 1; i <= N; i++)
        sum += i;
    
    cout << "Сумма всех чисел от 1 до " << N << " равна: " << sum;
    
    return 0;
}
