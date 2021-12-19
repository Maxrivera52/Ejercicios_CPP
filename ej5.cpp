#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int lim,acc;
    acc=0;
    cout<<"Ingrese un número: \n";
    cin>>lim;
	for(int i=0;i<=lim;i++){
		acc+=i;
	}
	cout<<"La sumatoria de "<<lim<<" naturales es: "<<acc<<endl;


}
