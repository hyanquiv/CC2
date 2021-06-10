#include <iostream>
#include "Estudiante.h"

using namespace std;
/*
int main()
{
    DynamicArray a;
    cout << a.getSize() << endl;

    int arreglo[] = {1, 2, 3, 6, 5, 4, 8, 9};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    DynamicArray b(arreglo, tam);
    cout << b.getSize() << endl;

    // Invocando a un constructor copia.
    if (true)
        DynamicArray c = b;

    b.print();
    b.push_back(15);
    b.print();

    b.remove(1);
    b.print();

    b.insert(99, 6);
    b.print();

    return 0;
}*/

int main()
{

    Estudiante e1("Jimena", 20201235, 18, 'F', "Tercer");
    Estudiante e2("Juan", 20202345, 17, 'M', "Segundo");
    Estudiante e3("Jorge", 20191234, 19, 'M', "Quinto");

    Estudiante arr[] = {e1, e2, e3};
    int tam = sizeof(arr) / sizeof(arr[0]);

    DynamicArray<Estudiante> da(arr, tam);

    cout << da << endl;

    return 0;
}

