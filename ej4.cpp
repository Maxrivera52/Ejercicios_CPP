#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero,contador, sumador;
    sumador = contador = 0;
    do{
    cout<<"Introduzca un número mayor a 0 y menor a 493";
    cin >> numero;
    }while(numero<0 || numero>492);
    
    if(numero<=492){
	for(numero;numero<500;numero+=8){
	    sumador+=numero;
	    contador++;
	    cout<<numero<<" ,";
	}
    }
    cout<<"\nEsta es la suma: "<<sumador<<endl;
    cout<<"\nEl número total hasta 500 separados en 8 posiciones es: "<<contador<<endl;
    system("PAUSE");
    return 0;

}
