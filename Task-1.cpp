/*Программа для вычисления площади и периметра следующих фигур:
1. Круг 2. Прямоугольник 3. Треугольник 4. Квадрат и д.р.*/

#include <iostream>
#include <cmath> //библиотека мат. операций

using namespace std;

int main()
{
    float pi=3.14;
    int r=5; //радиус круга (сферы)
    int l=7; //длина прямоуг (квадрата)
    int w=9; //ширина прямоуг (грань куба)
    int a=3; //сторона треуг
    int b=4; //сторона треуг
    int c=5; //сторона треуг
    
    double pcircle=2*pi*r;
    double psquare=4*l;
    double prectangle=2*(l+w);
    double ptriangle=a+b+c;
    
    double scircle=pi*r*r;
    double ssquare=l*l;
    double srectangle=l*w;
    double striangle=sqrt((ptriangle/2)*(ptriangle/2-a)*(ptriangle/2-b)*(ptriangle/2-c)); //формула Герона
    
    double vsphere=(4*r*scircle)/3;
    double vcube=l*l*l;
    
    cout<<"Длина окружности: "<<pcircle<<endl;
    cout<<"Периметр квадрата: "<<psquare<<endl;
    cout<<"Периметр прямоугольника: "<<prectangle<<endl;
    cout<<"Периметр треугольника: "<<ptriangle<<endl;
    
    cout<<"Площадь окружности: "<<scircle<<endl;
    cout<<"Площадь квадрата: "<<ssquare<<endl;
    cout<<"Площадь прямоугольника: "<<srectangle<<endl;
    cout<<"Площадь треугольника: "<<striangle<<endl;
    
    cout<<"Объём сферы: "<<vsphere<<endl;
    cout<<"Объём куба: "<<vcube<<endl;

    /*float pi=3.14;
    int r; //радиус круга (сферы)
    cout<<"Введите значение радиуса r: ";
    cin>>r;
    double pcircle=2*pi*r;
    cout<<"Длина окружности: "<<pcircle;*/

    return 0;
}