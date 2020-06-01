#include "Toy.h"
#include "Seller.h"
#include <iostream>
using namespace std;

void print_menu() {
    system("cls");
    cout << "          Магазин іграшок\n" << endl;
    cout << "1.  Додати продавця" << endl;
    cout << "2.  Переглянути продавців" << endl;
    cout << "3.  Пошук продавця" << endl;
    cout << "4.  Редагування продаця" << endl;
    cout << "5.  Видалення продавця" << endl << endl;

    cout << "6.  Додати іграшку" << endl;
    cout << "7.  Переглянути іграшки" << endl;
    cout << "8.  Пошук іграшок" << endl;
    cout << "9.  Редагування іграшки" << endl;
    cout << "10. Видалення іграшки" << endl;
    cout << "11. Вихід" << endl;
    cout << ">";
}

void printSearchSellerMenu()
{
    cout << "Пошук за полем: \n";
    cout << "1. Ім'я" << endl;
    cout << "2. Прізвище" << endl;
    cout << "3. По батькові" << endl;
    cout << "4. Вік" << endl;
    cout << "5. id" << endl;
}
void printSearchToyMenu()
{
    cout << "Пошук за полем: \n";
    cout << "1. Назва" << endl;
    cout << "2. Вікова категорія" << endl;
    cout << "3. Ціна" << endl;
    cout << "4. id працівника" << endl;
    cout << "5. Продано" << endl;
    //cout << "6. Номером документа" << endl;
    //cout << "7. Дійсний до" << endl;
}
int get_variant(int max) {
    double input = -1;
    bool valid = false;
    do
    {
        cin >> input;
        if (cin.good())
        {
            valid = true;
            if (input > 0 && input < max)
                return input;
            else
            {
                valid = false;
                cout << "Помилка вводу. Введіть ще раз" << endl;
            }

        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Помилка вводу. Введіть ще раз" << endl;
        }
    } while (!valid);
    return input;
}
int main()
{
    system("chcp 1251>nul");
    int variant;
    string str;
    Toy toy;
    int n;
    Seller seller;
    do {
        print_menu();
        char ch;
        variant = get_variant(11);
        switch (variant) {
        case 1:
            break;

        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            cout << "Введіть число від 1 до 11\n";
        }
        if (variant != 11 || variant == 't')
            system("pause");
    } while (variant != 11);
    return 0;
}