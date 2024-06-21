#pragma once
class Reservoir
{
private:
    char* name;
    long double width;
    long double length;
    long double maxDepth;

public:
    // ����������� �� ���������
    Reservoir() = default;

    // ����������� � �����������
    Reservoir(const char* name, long double width, long double length, long double maxDepth);

    // ����������� �����������
    Reservoir(const Reservoir& other);

    // �������� ������������
    Reservoir& operator=(const Reservoir& other);

    // ����������
    ~Reservoir();

    // ������ ��� ����������� ���������������� ������
    double calculateVolume() const;

    // ������ ��� ����������� ������� ������ �����������
    double calculateSurfaceArea() const;

    // ����� ��� �������� ��������� �� ������� � ������ ����
    bool isSameType(const Reservoir& other) const;

    // ����� ��� ��������� ������� ������ ����������� �������� ������ ����
    bool isLargerSurfaceArea(const Reservoir& other) const;

    // ������ set � get
    void setName(const char* name);
    void setDimensions(long double width, long double length, long double maxDepth);

    const char* getName() const;
    double getWidth() const;
    double getLength() const;
    double getMaxDepth() const;

    // ����� ��� ����������� ��������
    void copyFrom(const Reservoir& other);

    // ����� ��� ����������� ���������� � �������
    void display() const;
};

