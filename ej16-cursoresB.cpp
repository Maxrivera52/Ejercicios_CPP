#include<iostream>
#include<string>

using namespace std;

int main(){
    int nlib,cols = 2;
    string **libros,input,autor,titulo;
    cout<<"Libros a ingresar: ";
    getline(cin,input);
    nlib=stoi(input);
    libros = new string*[nlib];
    cout<<"Complete: \n";
    for(int i=0;i<nlib;i++){
	libros[i]=new string[cols];
	cout<<"\n*******Libro n•"<<i+1<<"\n";
	cout<<"Titulo: ";
	getline(cin,titulo);
	cout<<"Autor: ";
	getline(cin,autor);
	libros[i][0]=titulo;
	libros[i][1]=autor;
    }
    for(int i=0;i<nlib;i++){
	delete [] libros[i];
    }
    delete[] libros;
    return 0;
}
