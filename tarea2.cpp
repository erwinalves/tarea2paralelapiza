#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fs("utem.csv", ifstream::in);//abrir fichero
    int contador=0;//variable que contará las lineas de datos
    while(fs.good())//ciclo hasta llegar al final
        if(fs.get()=='\n')//Busca cuando hay un salto de linea
            contador++;//suma por cada salto de linea
    cout<<"El archivo tiene = "<<contador-1<<endl;// resto 1 porque esta contando la primera linea (titulo de los datos)
}
