#include<iostream>
#define kuti 10000000
#define lakh 100000
#define hajar 1000
#define shata 100
using namespace std;

void output(unsigned long long int input){
	if (input / kuti){
		output(input / kuti);
		cout << " kuti";
		input %= kuti;
	}
	if (input / lakh){
		output(input / lakh);
		cout << " lakh";
		input %= lakh;
	}
	if (input / hajar){
		output(input / hajar);
		cout << " hajar";
		input %= hajar;
	}
	if (input / shata){
		output(input / shata);
		cout << " shata";
		input %= shata;
	}
	if (input)
		cout << " " << input;
}

int main(){
	unsigned long long int input;
	while(cin >> input){
		output(input);
		cout << "\n";
	}
}
