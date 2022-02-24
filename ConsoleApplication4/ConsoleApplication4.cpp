#include <iostream>
#include <cstdlib>
using namespace std;

struct team {
    char strana[20];
    char fio[40];
    int year;
};
istream& read(istream& is, team& t)
{
    cout << " Страна:";
    is >> t.strana;
    cout << "ФИО:";
    is >> t.fio;
    cout << "Возраст:";
    cin >> t.year;
    cout << "\n";
    return is;
}
int main()
{
    system("chcp 1251 > nul");
    team dinamo[3], spartak[3], chelsea[3];
    int a = 0, b = 0, c = 0;
    const char* tmp;
    for (int i = 0; i != 3; i++)
    {
        cout << "Введите данные игрока команды dinamo: " << endl;
        read(cin, dinamo[i]);
        a += dinamo[i].year;
    }
    for (int i = 0; i != 3; i++)
    {
        cout << "Введите данные игрока команды spartak: " << endl;
        read(cin, spartak[i]);
        b += spartak[i].year;
    }
    for (int i = 0; i != 3; i++)
    {
        cout << "Введите данные игрока команды chelsea: " << endl;
        read(cin, chelsea[i]);
        c += chelsea[i].year;
    }
    if (a < b) {
        if (c < a) {
            tmp = "chelsea";
        }
        else {
            tmp = "dinamo";
        }
    }
    else if (c < b) {
        tmp = "chelsea";
    }
    else {
        tmp = "spartak";
    }

    cout << "Min: " << tmp << endl;

    return 0;
}