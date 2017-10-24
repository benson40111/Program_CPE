#include<iostream>
using namespace std;

int f(int input){
	if (input <= 9)
		return input;
	else{
		int temp = 0;

		while(input){
			temp += input % 10;
			input /= 10;
		}
		input = temp;
		return f(input);
	}
}

int main(){
	int input;

	while(cin >> input && input)
		cout << f(input) << endl;
}
