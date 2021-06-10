#include <iostream>
#include "DynamicArray.h"
using namespace std;

class Estudiante
{
private:
    string name;
    int cui;
    int age;
    char sx;
    string year;

public:
    Estudiante()
    {
        this->name = "pendiente";
        this->cui = 0;
        this->age = 0;
        this->sx = 'o';
        this->year = "pendiente";
    }
    Estudiante(string name, int cui, int age, char sx, string year)
    {
        this->name = name;
        this->cui = cui;
        this->age = age;
        this->sx = sx;
        this->year = year;
    }
    Estudiante& operator=(const Estudiante&o)
    {
        this->name = o.name;
        this->cui = o.cui;
        this->age = o.age;
        this->sx = o.sx;
        this->year = o.year;
        return *this;
    }
    ~Estudiante()=default;
    friend ostream &operator<<(ostream &os, const DynamicArray<Estudiante> &o);
};

ostream &operator<<(ostream &output, const DynamicArray<Estudiante> &o)
{
    for (int i = 0; i < o.getSize(); i++)
        output << "Estudiante: " << o.arr[i].name << "\nCUI:" << o.arr[i].cui << "\nSexo: " << o.arr[i].sx << "\nAño: " << o.arr[i].year << "\n";
    return output;
}