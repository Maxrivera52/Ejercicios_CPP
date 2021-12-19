#include<iostream>
#include<string>

using namespace std;

int main(){
    string autor[3];
    string nombre[3];
    cout << "Por favor ingresa la info brah: \n"<<endl;
    for(int i;i<3;i++){
	cout<< "\n********Libro n° "<<i+1<<"******\n"<<endl;
	cout<<"Titulo: ";
	//cin>>nombre[i];
	getline(cin,nombre[i]);
	cout<<"Autor: ";
	//cin >> autor[i];
	getline(cin,autor[i]);
    }

    return 0;

}
