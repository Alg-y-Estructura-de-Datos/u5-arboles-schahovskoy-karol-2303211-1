#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {

    ArbolBinario<int> socios;
    socios.put(500);
    socios.put(250);
    socios.put(750);
    socios.put(100);
    socios.put(300);
    socios.put(600);
    socios.put(800);
    if (socios.search(250)){
        socios.remove(250);
    }
    else {
        cout<<"El socio no se encuentra en el arbol"<<endl;
    }
    if (socios.search(300)&&socios.search(750)){
        cout<<"Los socios aún se encuentran activos"<<endl;
    }
    else {
        cout<<"El socio no se encuentra en el arbol"<<endl;
    }
    socios.print();
    return 0;
}
