#include<iostream>
#include<cstdlib>

using namespace std;

void decode(char key[], char input){
	int i = 0;

	while(key[i] != '\0'){
		if (key[i] == input){
			cout << key[i - 2];
			break;
		}
		i++;
	}
}

int main(){
	char text[1000];
	char key[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

	while(cin.getline(text, 1000)){
		int i = 0;
		while(text[i] != '\0'){
			if (text[i] == ' ')
				cout << " ";
			else
				decode(key, tolower(text[i]));
			i++;
		}
		cout << endl;
	}
}
