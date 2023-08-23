#include <iostream>
using namespace std;

void array (int a[]);
void average (int a[]);
void search (int a[], int check);

int main()
{
    int a[5], num;
    array (a);
    average (a);
    search(a, num);
    
    return 0;
}

void array (int a[])
{
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

void average (int a[])
{
    int i;
    double sum = 0, average = 0;
    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    average = sum / 5;
    cout << "Среднее значение элементов массива: " << average << endl;
    return;
}

void search (int a[], int num)
{
    int i;
    cout << "Введите число, которое хотите найти: ";
    cin >> num;
    for (i = 0; i < 5; i++)
    {
       if (a[i] == num)
       {
           cout << "Ваше число найдено" << endl;
           break;
       }
    }
    if (i == 5)
        cout << "Ваше число НЕ найдено" << endl;
    return;
}