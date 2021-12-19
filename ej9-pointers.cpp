#include<iostream>
#include<stdio.h>

using namespace std;

int opernum(int num){
	num = num + 50;
	return num;
}

int opnPointer(int *num){
     *num = *num + 50;
     return *num;
}

int main(){

	int num = 30;
	cout << "Numero af. : "<<num<<endl;
	opernum(num);
    cout << "Numero af. : "<<num<<endl;


    opnPointer(&num);
    cout << "Numero af.Pointer : "<<num<<endl;

    return 0;
}
