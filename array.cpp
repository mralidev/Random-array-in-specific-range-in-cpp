#include<iostream>
using namespace std;

int main()
{

    int result[1000];
    for(int i=0;i<1000;i++){
        int r=(rand()%1000)-400; // number between -4 and 4
	    result[i] = r; 
		cout << result[i] << endl;
    }

    
    return 0;
}
