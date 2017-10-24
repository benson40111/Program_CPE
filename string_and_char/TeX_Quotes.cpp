#include<iostream>
using namespace std;

int main(){
	char input[1000];
	int flag = 0;

	while(cin.getline(input, 1000)){
		int i = 0;
		while(input[i]){
			if (input[i] != '"')
				cout << input[i];
			else if (input[i] == '"' && flag == 0){
				cout << "``";	
				flag = 1;
			}
			else{
				cout << "''";
				flag = 0;
			}
			i++;
		}
		cout << endl;
	}	
}
