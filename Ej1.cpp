#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

bool busqueda(ArbolBinario<int> & arbol, int dato) {
    return arbol.search(dato);
}

void elim(ArbolBinario<int> &arbol, int dato) {
    if(!busqueda(arbol, dato)){
        cout<<"El dato no se encuentra en el arbol"<<endl;
    }else{
        arbol.remove(dato);
        cout<<"El dato se ha eliminado correctamente"<<endl;
    }

}

int main() {

    cout << "Ejercicio N° 1" << endl;
    ArbolBinario<int> arbol;
    arbol.put(200);
    arbol.put(150);
    arbol.put(75);
    arbol.put(36);
    arbol.put(198);
    arbol.put(52);
    arbol.put(101);
    arbol.print();
    busqueda(arbol, 75);
    elim(arbol, 52);
    arbol.print();
    return 0;
}
