#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Месяца года: \n"
        << "1. Январь\n2. Февраль\n3. Март\n4. Апрель\n5. Май\n6. Июнь\n7. Июль\n8. Август\n9. Сентябрь\n10. Октябрь\n11. Ноябрь\n12. Декабрь\nВыберите месяц: ";
    short nMonth; cin >> nMonth;
    switch (nMonth)
    {
    case 1:
        cout<<"Выбран месяц \"Январь\"";
        break;
    case 2:
        cout << "Выбран месяц \"Февраль\"";
        break;
    case 3:
        cout << "Выбран месяц \"Март\"";
        break;
    case 4:
        cout << "Выбран месяц \"Апрель\"";
        break;
    case 5:
        cout << "Выбран месяц \"Май\"";
        break;
    case 6:
        cout << "Выбран месяц \"Июнь\"";
        break;
    case 7:
        cout << "Выбран месяц \"Июль\"";
        break;
    case 8:
        cout << "Выбран месяц \"Август\"";
        break;
    case 9:
        cout << "Выбран месяц \"Сентябрь\"";
        break;
    case 10:
        cout << "Выбран месяц \"Октябрь\"";
        break;
    case 11:
        cout << "Выбран месяц \"Ноябрь\"";
        break;
    case 12:
        cout << "Выбран месяц \"Декабрь\"";
        break;

    default: 
        cout << "Вы ввели неверное число";
        break;
    }
    return 0;
    
}
