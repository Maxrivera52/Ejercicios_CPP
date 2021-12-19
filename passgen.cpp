#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

string random_ascii_generator(char* argv[3]){
	string pass;
	int  lenpass,numpass,min, max, rgen, rann;
	lenpass = atoi(argv[1]);
	numpass = atoi(argv[2]);
	min = 32;
	max = 128;
	srand(time(NULL));
	for(int it = 0; it<numpass;it++){
	    pass += "> ";
	    for(int i = 0; i<lenpass; i++){
	        rann = rand() % (max - min) + min;
	        pass += static_cast<char>(rann);
	    }
	    pass += "\n";
	}
	pass += "\n\n-> n.pass: "+to_string(numpass)+"\n-> n.chars: "+to_string(lenpass)+"\n"; 
	return pass;
}

//Ascii 32-128
int main(int argc,char **argv){
	string pass;
	int def_argc = 4;
	char* def_argv[] = {(char*)"0",(char*)"1",(char*)"1"};
	if(argc < 3){
	    pass = random_ascii_generator(def_argv);
	}else{
            pass = random_ascii_generator(argv);
	}
	cout << "\n++++++GENPASSWORD by Max++++++\n"<<endl;
	cout << pass << endl;
	return 0;
}
