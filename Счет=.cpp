#include <iostream>
using namespace std;

struct Score {
    int number;
    string name;
    int balance;
};

void New_Score(Score* persona, int newbalance) {
    persona->balance = newbalance;
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
    cout << "Введите новый баланс: ";
    int newbalance;
    cin >> newbalance;
    New_Score(&person, newbalance);
    cout << "Ваш счёт: " << person.name << ", " << person.number << ", " << person.balance << endl;
}

