#include<string.h>
#include<iostream>

using namespace std;

int main(){
	cout<<"Hola, ingresa tu nombre: ";
	string str = "Bienvenido ";
	
	string name;
	cin >> name;

	str+=name;
	cout<<str<<endl;
	return 0;
}
