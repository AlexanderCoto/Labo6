#include <iostream>
using namespace std;

int main()
{
    int n = 0,
    suma = 0,
    impares = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            suma += i;
            impares++;
        }
    }
    cout << "La suma de los impares es: " << suma << endl;
    cout << "La cantidad de impares es: " << impares << endl;

    return 0;
}