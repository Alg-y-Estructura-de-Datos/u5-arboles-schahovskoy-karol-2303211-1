#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {

    cout << "Ejercicio N° 2" << endl;
    ArbolBinario<int> arbol;
    arbol.put(2002);
    arbol.put(4001);
    arbol.put(6003);
    arbol.put(1500);
    arbol.put(3500);
    arbol.put(5000);
    arbol.put(7000);
    arbol.print();
    arbol.remove(2002);
    arbol.remove(6003);
    arbol.print();
    arbol.put(2500);
    arbol.print();
    if (arbol.search(4001)){
        cout<<"El dato se encuentra en el arbol"<<endl;
    }
    else {
        cout<<"El dato no se encuentra en el arbol"<<endl;
    }
    return 0;
}
