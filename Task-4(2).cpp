#include <iostream>

using namespace std;

int main()
{
    /*int x;
    cout << "Введите число: ";
    cin >> x;
    if (x == 0)
    {
        cout << "Ноль";
    }
    else if (x > 0)
    {
        cout << "Положительное";
    }
    else
    {
        cout << "Отрицательное";
    }
    */
    int x;
    string result;
    cout << "Введите число: ";
    cin >> x;
    result = (x == 0) ? "Ноль" : ((x > 0)? "Положительное" : "Отрицательное");
    cout << result << endl;

    return 0;
}