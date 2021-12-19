#include<iostream>

using namespace std;

int main(){
    int ages[3][2]={{15,25},{30,56},{45,12}};
    int rows = sizeof(ages)/sizeof(ages[0]);
    int cols = sizeof(ages[0])/sizeof(ages[0][0]);

    for(int r=0;r<rows;r++){
	for(int c=0;c<cols;c++){
	    cout<<ages[r][c]<<endl;
	}
    }

    return 0;
}
