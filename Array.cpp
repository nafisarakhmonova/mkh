/* Создать два массива, наполнить их значениями, вывести их;
объединить их и вывести значения; удалить несколько элементов */

#include <iostream>
using namespace std;

int main()
{
    int array1[10], array2[5], array3[15];
    int pos;
    
    cout << "Введите элементы первого массива:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array1[i];
    }
    cout << "Элементы первого массива:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << array1[i] << endl;
    }
    cout << "Введите элементы второго массива:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array2[i];
    }
    cout << "Элементы второго массива:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array2[i] << endl;
    }
    
    for (int i = 0; i < 10; i++)
    {
        array3[i] = array1[i];
    }
    for (int i = 10; i < 15; i++)
    {
        array3[i] = array2[i - 10];
    }
    cout << "Элементы объединённого массива:" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << array3[i] << ' ' << endl;
    }
    
    cout << "Укажите индекс элемента для удаления:";
    cin >> pos;
    for(int i = 0; i < 15; i++)
    {
        array3[pos] = 0;
        cout << array3[i] << ' ';
    }
    return 0;
}