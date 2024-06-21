#include "Reservoir.h"
#include <iostream>

using namespace std;


int main()
{
    setlocale(0, "ru");

    // Создание динамического массива объектов Reservoir
    int size = 3;
    Reservoir* reservoirs = new Reservoir[size];

    // Инициализация объектов
    reservoirs[0] = Reservoir("Lake", 50, 30, 50);
    reservoirs[1] = Reservoir("Pool", 50, 25, 2);
    reservoirs[2] = Reservoir("Ocean", 100, 20, 50);

    // Отображение информации о водоемах
    for (int i = 0; i < size; ++i)
    {
        reservoirs[i].display();
        cout << "Volume: " << reservoirs[i].calculateVolume() << endl;
        cout << "Surface Area: " << reservoirs[i].calculateSurfaceArea() << endl;
    }

    // Проверка на одинаковый тип
    if (reservoirs[0].isSameType(reservoirs[1]))
    {
        cout << reservoirs[0].getName() << " и " << reservoirs[1].getName() << " одного типа." << endl;
    }
    else
    {
        cout << reservoirs[0].getName() << " и " << reservoirs[1].getName() << " разного типа." << endl;
    }

    // Сравнение площади водной поверхности
    if (reservoirs[0].isLargerSurfaceArea(reservoirs[2]))
    {
        cout << reservoirs[0].getName() << " имеет большую площадь водной поверхности чем " << reservoirs[2].getName() << "." << endl;
    }
    else
    {
        cout << reservoirs[2].getName() << " имеет большую площадь водной поверхности чем " << reservoirs[0].getName() << "." << endl;
    }

    // Очистка памяти
    delete[] reservoirs;

    return 0;
}