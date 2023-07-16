// Чат-бот

#include<iostream>

using namespace std;

int main()
{
    string text;
    cout << "- Хаю-хай" << endl;
    cin >> text;
    if (text == "Привет" || text == "Hi" || text == "Здравствуйте")
    {
        cout << "- Как дела?" << endl;
        cin >> text;
        if (text == "Отлично" || text == "Круто" || text == "Норм")
        {
            cout << "- Супер. Рассказать анекдот?" << endl;
            cin >> text;
            if (text == "Да" || text == "Ага" || text == "Ок")
            {
                cout << "- Анекдот " << endl;
            }
            else if (text == "Нет" || text == "Неа" || text == "Не надо")
            {
                cout << "- Душнила -_-" << endl;
            }
            else
            {
                cout << "- Сорян, я тебя не понимаю" << endl;
                
            }
        }
        else if (text == "Ужасно" || text == "Плохо" || text == "Так себе")
        {
            cout << "- Хочешь, чтобы Я поднял тебе настроение? " << endl;
            cin >> text;
            if (text == "Да" || text == "Ага" || text == "Я не против")
            {
                cout << "- Анекдот" << endl;
            }
            else if (text == "Нет" || text == "Не хочу")
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