#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	int x,y=0, ilosc, maks;
	fstream myfile;
	cout<<"podaj ile chcesz wygenerowac liczb"<<endl;
	cin>>ilosc;
	cout<<"podaj jak duża może być maksymalnie liczba"<<endl;
	cin>>maks;
	myfile.open ("numbers.txt", ios::out);
		srand(time(NULL));
		for(int i=0;i<ilosc;i++){
			x=rand()%maks+1;
			myfile<<x<<endl;
			y=x;
		}
		myfile.close();
    return 0;
}
