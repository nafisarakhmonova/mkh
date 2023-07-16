// Программа выставления оценок

#include<iostream>

using namespace std;

int main()
{
    int score;
    string name;
    cout << "Введите своё имя: ";
    cin >> name;
    if (name == "Нафиса" || name == "Алишер" || name == "Рустам")
    {
        cout << "Введите свой балл: ";
        cin >> score;
        if (score >= 87 && score <= 100)
        {
            cout << "5" << endl;
        }
        else if (score >= 73 && score <= 86)
        {
            cout << "4" << endl;
        }
        else if (score >= 60 && score <= 72)
        {
            cout << "3" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    else
    {
        cout << "Повторите попытку" << endl;
    }
    return 0;
}