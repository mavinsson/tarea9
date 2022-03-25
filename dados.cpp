#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>


using namespace std;



int main(void)
{
    int dado1, dado2;
    int i;
    cout << "los numeros de los dados debes ser iguales" << endl;
    cout << " numero de tirada  dado1 dado2" << endl;

    i = 1;

    while (5 == 5)
    {
        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;
        cout  << setw(4) << i << setw(8) << dado1
              << setw(4) << dado2 << endl;
              if (dado1 == dado2)
              {break;
              }
              i++;
    }
    cout << "en " << i << "tiradas, son iguales" << endl <<endl;
    cout << "presione una tecla para continuar...." << endl; getch();
    cout << " numero de tirada  dado1 dado2" << endl;
    i = 1;
     while (1 == 1)
     {
         dado1 = 1 + rand() % 6;
         dado2 = 1 + rand() % 6;
        cout  << setw(4) << i << setw(8) << dado1
         << setw(4) << dado2 << endl;
         if (dado1 == 6 && dado2 == 6)
         {
            break;
         }
      i++;   
     }
     
     cout <<"en " << i << "tiradas es igual a 6" << endl << endl;
     cout << "oprima una tecla para continuar.. ";
     getch();
 


    return 0;
}
