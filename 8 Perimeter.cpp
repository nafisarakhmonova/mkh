#include<iostream>
using namespace std;

// прямоугольник
int perimeterRectangle(int a, int b) // a-длина  b-ширина
{
    int perRect = 2*(a + b);
    return perRect;
}

// треугольник
int perimeterTriangle(int a, int b, int c) // a, b, c - стороны
{
    int perTri = a + b + c;
    return perTri;
}

// круг
float circumferenceCircle(int r) // r - радиус
{
    float pi = 3.14;
    float cirCir = 2 * pi * r;
    return cirCir;
}
 
int main()
{
    int a, b, c, r;
    string figure;
    cout << "Введите фигуру\n(прямоугольник, треугольник, круг)" << endl;
    cin >> figure;
    
    if (figure == "Прямоугольник" || figure == "прямоугольник")
    {
        cout << "Введите значение длины a = ";
        cin >> a;
        cout << "Введите значение ширины b = ";
        cin >> b;
        cout << "Периметр P = " << perimeterRectangle(a, b);
    }
    else if (figure == "Треугольник" || figure == "треугольник")
    {
        cout << "Введите значение стороны a = ";
        cin >> a;
        cout << "Введите значение стороны b = ";
        cin >> b;
        cout << "Введите значение стороны c = ";
        cin >> c;
        cout << "Периметр P = " << perimeterTriangle(a, b, c);
    }
    else if (figure == "Круг" || figure == "круг")
    {
        cout << "Введите значение радиуса r = ";
        cin >> r;
        cout << "Длина С = " << circumferenceCircle(r);
    }
    else
    {
        cout << "Произошла ошибка. Повторите попытку.";
    }
    return 0;
}
