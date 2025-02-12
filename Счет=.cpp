#include <iostream>
using namespace std;

struct Score {
    int number ;
    string name ;
    int balance ;
};

void New_Score(Score* person) {
    cout << "Введите новый баланс: ";
    int bal;
    cin >> bal;
    person->balance = bal;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер счёта: ";
    int num;
    cin >> num;
    cout << "Введите имя владельца: ";
    string nam;
    cin >> nam;
    cout << "Введите баланс счёта: ";
    int bal;
    cin >> bal;
    Score person = { num,nam,bal };
    New_Score(&person);
    cout << "Ваш счёт: " << person.name << ", " << person.number << ", " << person.balance << endl;
}

