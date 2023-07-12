/*Напишите программа для чат-бота*/

#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "- Хаю-хай" << endl;
    cin >> text;
    if (text == "Привет")
    {
        cout << "- Как дела?" << endl;
        cin >> text;
        if (text == "Отлично")
        {
            cout << "- Супер. Рассказать анекдот?" << endl;
            cin >> text;
            if (text == "Да")
            {
                cout << "- Анекдот " << endl;
            }
            else if (text == "Нет")
            {
                cout << "- Душнила -_-" << endl;
            }
            else
            {
                cout << "- Сорян, я тебя не понимаю" << endl;
                
            }
        }
        else if (text == "Ужасно")
        {
            cout << "- Хочешь, чтобы Я поднял тебе настроение? " << endl;
            cin >> text;
            if (text == "Да")
            {
                cout << "- Анекдот" << endl;
            }
            else if (text == "Нет")
            {
                cout << "- Ну, ок." << endl;
            }
            else
            {
                cout << "- Сорян, я тебя не понимаю" << endl;
                
            }
        }
        else
        {
        cout << "- Сорян, я тебя не понимаю" << endl;
        }
    }
    else
    {
        cout << "- Сорян, я тебя не понимаю" << endl;
    }
    return 0;
}