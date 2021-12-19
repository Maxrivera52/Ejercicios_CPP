#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //Write file
    string itext;
    ofstream ntext("ntext.txt");
    cout<<"Ingrese un texto: \n>";
    getline(cin,itext);
    ntext<<itext+"\nSecond line?";
    cout<<"File Writed!"<<endl;
    ntext.close();

    //Read file
    ifstream rfile("ntext.txt");
    while(getline(rfile,itext)){
	cout<<"."+itext<<endl;
    }
    return 0;
}
