#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    srand(time(NULL));

    cout<<"================================"<<endl;
    cout<<"GENERADOR DE NUMEROS ALEATÓRIOS"<<endl;
    cout<<"================================"<<endl;

    for(int i=0;i<20;i++){
	cout<<"> "<<rand()<<endl;
    }

    cout<<"   ---------    ";
    return 0;
}
