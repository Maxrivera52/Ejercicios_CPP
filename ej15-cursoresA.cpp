#include<iostream>
#include<string>
//#include<stdio.h>

using namespace std;

int main(){
    string snlib;
    int nlib;
    cout<<"Libros a ingresar: ";
    getline(cin,snlib);
    nlib=stoi(snlib);
    string* titulos = NULL; 
    string* autores = NULL;
    titulos = autores = new string[nlib]; 
    for(int i=0;i<nlib;i++){
	cout<<"Título: ";
        getline(cin,titulos[i]);
        cout<<"Autor: ";
        getline(cin,autores[i]);	
    }
    delete[] titulos;
    delete[] autores;
    titulos=NULL;
    autores=NULL;
    return 0;
}
