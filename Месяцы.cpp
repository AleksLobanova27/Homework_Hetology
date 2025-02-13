#include <iostream>
using namespace std;

enum Season {
    January =1,
    February,
    March,
    April, May,
    June,
    July,
    August,
    September,
    October, 
    November,
    December
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
            case January :
                cout << "Январь\n";
                break;
            case  February:
                cout << "Февраль\n";
                break;
            case March:
                cout << "Март\n";
                break;
            case April:
                cout << "Апрель\n";
                break;
            case May:
                cout << "Май\n";
                break;
            case June:
                cout << "Июнь\n";
                break;
            case July:
                cout << "Июль\n";
                break;
            case August:
                cout << "Август\n";
                break;
            case September:
                cout << "Сентябрь\n";
                break;
            case October:
                cout << "Октябрь\n";
                break;
            case November:
                cout << "Ноябрь\n";
                break;
            case December:
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

