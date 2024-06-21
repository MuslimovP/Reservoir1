#include "Reservoir.h"
#include <iostream>

using namespace std;

// Конструктор с параметрами
Reservoir::Reservoir(const char* name, long double width, long double length, long double maxDepth) : width(width), length(length), maxDepth(maxDepth)
{
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

// Конструктор копирования
Reservoir::Reservoir(const Reservoir& other)
{
    name = new char[strlen(other.name) + 1];
    strcpy_s(name, strlen(other.name) + 1, other.name);
    width = other.width;
    length = other.length;
    maxDepth = other.maxDepth;
}

// Оператор присваивания
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

// Деструктор
Reservoir::~Reservoir()
{
    delete[] name;
    width = 0;
    length = 0;
    maxDepth = 0;
}

// Методы для определения приблизительного объема
double Reservoir::calculateVolume() const
{
    return width * length * maxDepth;
}

// Методы для определения площади водной поверхности
double Reservoir::calculateSurfaceArea() const
{
    return width * length;
}

// Метод для проверки относятся ли водоемы к одному типу
bool Reservoir::isSameType(const Reservoir& other) const
{
    return strcmp(name, other.name) == 0;
}

// Метод для сравнения площади водной поверхности водоемов одного типа
bool Reservoir::isLargerSurfaceArea(const Reservoir& other) const
{
    return calculateSurfaceArea() > other.calculateSurfaceArea();
}

// Методы set и get
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

// Метод для копирования объектов
void Reservoir::copyFrom(const Reservoir& other)
{
    delete[] name;
    name = new char[strlen(other.name) + 1];
    strcpy_s(name, strlen(other.name) + 1, other.name);
    width = other.width;
    length = other.length;
    maxDepth = other.maxDepth;
}

// Метод для отображения информации о водоеме
void Reservoir::display() const
{
    cout << "Name: " << name << ", Width: " << width << ", Length: " << length << ", Max Depth: " << maxDepth << endl;
}
#include "Reservoir.h"
