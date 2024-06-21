#include "Reservoir.h"
#include <iostream>

using namespace std;


int main()
{
    setlocale(0, "ru");

    // �������� ������������� ������� �������� Reservoir
    int size = 3;
    Reservoir* reservoirs = new Reservoir[size];

    // ������������� ��������
    reservoirs[0] = Reservoir("Lake", 50, 30, 50);
    reservoirs[1] = Reservoir("Pool", 50, 25, 2);
    reservoirs[2] = Reservoir("Ocean", 100, 20, 50);

    // ����������� ���������� � ��������
    for (int i = 0; i < size; ++i)
    {
        reservoirs[i].display();
        cout << "Volume: " << reservoirs[i].calculateVolume() << endl;
        cout << "Surface Area: " << reservoirs[i].calculateSurfaceArea() << endl;
    }

    // �������� �� ���������� ���
    if (reservoirs[0].isSameType(reservoirs[1]))
    {
        cout << reservoirs[0].getName() << " � " << reservoirs[1].getName() << " ������ ����." << endl;
    }
    else
    {
        cout << reservoirs[0].getName() << " � " << reservoirs[1].getName() << " ������� ����." << endl;
    }

    // ��������� ������� ������ �����������
    if (reservoirs[0].isLargerSurfaceArea(reservoirs[2]))
    {
        cout << reservoirs[0].getName() << " ����� ������� ������� ������ ����������� ��� " << reservoirs[2].getName() << "." << endl;
    }
    else
    {
        cout << reservoirs[2].getName() << " ����� ������� ������� ������ ����������� ��� " << reservoirs[0].getName() << "." << endl;
    }

    // ������� ������
    delete[] reservoirs;

    return 0;
}