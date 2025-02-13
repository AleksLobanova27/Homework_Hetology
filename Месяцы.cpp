#include <iostream>
using namespace std;

enum Season {
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};
int main()
{

    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите номер месяца: ";
    cin >> number;
    Season snumber = static_cast<Season>(number);
    while (snumber != 0) {
        if (snumber < 0 || snumber > 12) {
            cout << "Неправильный номер!\n";

        }
        else {
            switch (snumber) {
            case  Январь:
                cout << "Январь\n";
                break;
            case  Февраль:
                cout << "Февраль\n";
                break;
            case  Март:
                cout << "Март\n";
                break;
            case  Апрель:
                cout << "Апрель\n";
                break;
            case  Май:
                cout << "Май\n";
                break;
            case  Июнь:
                cout << "Июнь\n";
                break;
            case  Июль:
                cout << "Июль\n";
                break;
            case  Август:
                cout << "Август\n";
                break;
            case  Сентябрь:
                cout << "Сентябрь\n";
                break;
            case  Октябрь:
                cout << "Октябрь\n";
                break;
            case  Ноябрь:
                cout << "Ноябрь\n";
                break;
            case  Декабрь:
                cout << "Декабрь\n";
                break;

            }
        }
        cout << "Введите номер месяца: ";
        cin >> number;
        snumber = static_cast<Season>(number);
    }
    cout << "До свидания.";
}

