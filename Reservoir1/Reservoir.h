#pragma once
class Reservoir
{
private:
    char* name;
    long double width;
    long double length;
    long double maxDepth;

public:
    // Конструктор по умолчанию
    Reservoir() = default;

    // Конструктор с параметрами
    Reservoir(const char* name, long double width, long double length, long double maxDepth);

    // Конструктор копирования
    Reservoir(const Reservoir& other);

    // Оператор присваивания
    Reservoir& operator=(const Reservoir& other);

    // Деструктор
    ~Reservoir();

    // Методы для определения приблизительного объема
    double calculateVolume() const;

    // Методы для определения площади водной поверхности
    double calculateSurfaceArea() const;

    // Метод для проверки относятся ли водоемы к одному типу
    bool isSameType(const Reservoir& other) const;

    // Метод для сравнения площади водной поверхности водоемов одного типа
    bool isLargerSurfaceArea(const Reservoir& other) const;

    // Методы set и get
    void setName(const char* name);
    void setDimensions(long double width, long double length, long double maxDepth);

    const char* getName() const;
    double getWidth() const;
    double getLength() const;
    double getMaxDepth() const;

    // Метод для копирования объектов
    void copyFrom(const Reservoir& other);

    // Метод для отображения информации о водоеме
    void display() const;
};

