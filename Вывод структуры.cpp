#include <iostream>
using namespace std;

struct Inform {
    string city;
    string street;
    int num_house;
    int num_apartment;
    int zip;
};

void Informazion(Inform* person) {
    cout << "Город: " << person->city << endl;
    cout << "Улица: " << person->street << endl;
    cout << "Номер дома: " << person->num_house << endl;
    cout << "Номер квартиры: " << person->num_apartment << endl;
    cout << "Индекс: " << person->zip << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    Inform person1 = { "Москва", "Арбат", 121, 42, 123454 };
    Inform person2 = { "Ижевск", "Пушкина", 76, 64, 876543 };
    Informazion(&person1);
    cout << "\n";
    Informazion(&person2);
}

