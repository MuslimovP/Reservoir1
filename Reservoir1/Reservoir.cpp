#include "Reservoir.h"
#include <iostream>

using namespace std;

// ����������� � �����������
Reservoir::Reservoir(const char* name, long double width, long double length, long double maxDepth) : width(width), length(length), maxDepth(maxDepth)
{
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

// ����������� �����������
Reservoir::Reservoir(const Reservoir& other)
{
    name = new char[strlen(other.name) + 1];
    strcpy_s(name, strlen(other.name) + 1, other.name);
    width = other.width;
    length = other.length;
    maxDepth = other.maxDepth;
}

// �������� ������������
Reservoir& Reservoir::operator=(const Reservoir& other)
{
    if (this == &other)
    {
        return *this;
    }
    //if (this != &other) 
    //{ 
    //    delete[] name;
    //}
    name = new char[strlen(other.name) + 1];
    strcpy_s(name, strlen(other.name) + 1, other.name);
    width = other.width;
    length = other.length;
    maxDepth = other.maxDepth;

    return *this;
}

// ����������
Reservoir::~Reservoir()
{
    delete[] name;
    width = 0;
    length = 0;
    maxDepth = 0;
}

// ������ ��� ����������� ���������������� ������
double Reservoir::calculateVolume() const
{
    return width * length * maxDepth;
}

// ������ ��� ����������� ������� ������ �����������
double Reservoir::calculateSurfaceArea() const
{
    return width * length;
}

// ����� ��� �������� ��������� �� ������� � ������ ����
bool Reservoir::isSameType(const Reservoir& other) const
{
    return strcmp(name, other.name) == 0;
}

// ����� ��� ��������� ������� ������ ����������� �������� ������ ����
bool Reservoir::isLargerSurfaceArea(const Reservoir& other) const
{
    return calculateSurfaceArea() > other.calculateSurfaceArea();
}

// ������ set � get
void Reservoir::setName(const char* name)
{
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

void Reservoir::setDimensions(long double width, long double length, long double maxDepth)
{
    this->width = width;
    this->length = length;
    this->maxDepth = maxDepth;
}

const char* Reservoir::getName() const
{
    return name;
}

double Reservoir::getWidth() const
{
    return width;
}

double Reservoir::getLength() const
{
    return length;
}

double Reservoir::getMaxDepth() const
{
    return maxDepth;
}

// ����� ��� ����������� ��������
void Reservoir::copyFrom(const Reservoir& other)
{
    delete[] name;
    name = new char[strlen(other.name) + 1];
    strcpy_s(name, strlen(other.name) + 1, other.name);
    width = other.width;
    length = other.length;
    maxDepth = other.maxDepth;
}

// ����� ��� ����������� ���������� � �������
void Reservoir::display() const
{
    cout << "Name: " << name << ", Width: " << width << ", Length: " << length << ", Max Depth: " << maxDepth << endl;
}
#include "Reservoir.h"
