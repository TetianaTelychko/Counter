#include <iostream>
#include "DigitalCounter.h"

using namespace std;

int main() {
    cout << "Введіть мінімум лічильника : ";
    int min;
    cin >> min;

    cout << "Введіть максимум лічильника : ";
    int max;
    cin >> max;

    if(min < 0 || max < 0){
        cout << "Некоректні дані !";
        return 0;
    }


    DigitalCounter dc{min, max};
    cout << "-----------------------------------------\n"
            "Лічильник створений !\n"
            "Збільшити максимум на одиницю - 1\n"
            "Отримати поточне значення лічильника - 2\n"
            "Значення лічильника в реальному часі - 10\n"
            "-----------------------------------------\n"
            "Введіть номер пункту меню : ";
    int user;
    cin >> user;

    bool menu = true;
    while(menu){
        switch(user){
            case 1:
                dc.increase();
                cout << "\nВведіть номер пункту меню : ";
                cin >> user;
                break;
            case 2:
                dc.getCurrent();
                cout << "\nВведіть номер пункту меню : ";
                cin >> user;
                break;
            case 10:
                dc.show();
                sleep(300);
                menu = false;
                break;
            default:
                cout << "Помилка введення даних !";
                menu = false;
                break;
        }
    }

    return 0;
}
