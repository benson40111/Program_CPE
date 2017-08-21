#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

void check11(char input[]){
	int sum = 0, odd = 0, even = 0, i = 0;
	while(input[i]){
		if (i % 2)
			odd += input[i] - '0';
		else
			even += input[i] - '0';
		i++;
	}
	sum = abs(odd - even);
	if (sum % 11)
		cout << input << " is not a multiple of 11" << endl;
	else
		cout << input << " is a multiple of 11" << endl;
}

int main(){
	char input[100000];
	while(cin >> input && strcmp(input,"0"))
		check11(input);
}
