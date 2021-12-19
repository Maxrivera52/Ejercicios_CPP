#include<iostream>
#include<string>


using namespace std;

int main(){
    // 5 books, title and author
    string books[5][2];
    int rows = sizeof(books)/sizeof(books[0]);
    cout<<"Ingrese los siguientes datos:\n";
    for(int b=0;b<rows;b++){
	cout<<"\nLibro n°:"<<(b+1)<<"\nTítulo: \n";
	getline(cin,books[b][0]);
	cout<<"\nAutor: \n";
	getline(cin,books[b][1]);
	cout<<"\n\n";
    }
    cout<<"++++++++++\nLibros ingresados: \n";
    for(int b=0;b<rows;b++){
	cout<<"\nLibro n°:"<<(b+1);
	cout<<"\nTítulo:" + books[b][0];
	cout<<"\nAutor:"+books[b][1]+"\n-------";
    }
    return 0;
}
