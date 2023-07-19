/*Напишите программу, которая потребует от пользователя ввести значения
твердости, содержания углерода и предела прочности на растяжение стали
и распечатать марку стали в соответствии с заданными условиями.*/

#include <iostream>

using namespace std;

int main()
{
   int hardness; // твёрдость
   float carbon; // содержание углерода
   int strength; // прочность
   
   cout << "Введите значение твёрдости: " << endl;
   cin >> hardness;
   cout << "Введите уровень содержания углерода: " << endl;
   cin >> carbon;
   cout << "Введите значение прочности: " << endl;
   cin >> strength;
   
   if (hardness > 50 && carbon < 0.7 && strength > 5600)
   {
       cout << "Марка стали - 10";
   }
   else if (hardness > 50 && carbon < 0.7)
   {
       cout << "Марка стали - 9";
   }
   else if (carbon < 0.7 && strength > 5600)
   {
       cout << "Марка стали - 8";
   }
   else if (hardness > 50 && strength > 5600)
   {
       cout << "Марка стали - 7";
   }
   else if (hardness > 50 || carbon < 0.7 || strength > 5600)
   {
       cout << "Марка стали - 6";
   }
   else
   {
       cout << "Марка стали - 5";
   }
   return 0;
}