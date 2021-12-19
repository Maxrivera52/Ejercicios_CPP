#include<iostream>

using namespace std;

int main(){
    int arrint[] = {1,6,81,82,99,32,11}; 
    int lim = sizeof(arrint)/sizeof(arrint[0]);
    //recorrer em array
    for(int i; i < lim; i++){
        cout<<arrint[i]<<endl;
    }
    return 0;
}

