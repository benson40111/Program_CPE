#include<iostream>
#include<ctype.h>

using namespace std;

int main(){
	int line, count[1000] = {0}, largest = -1;
	char text[1000];

	cin >> line;
	line++;
	while(line--){
		cin.getline(text, 1000);
		int i = 0;
		while(text[i] != '\0'){
			if (isalpha(text[i])){
				text[i] = toupper(text[i]);
				count[text[i]]++;
				largest = max(largest, count[text[i]]);
			}
			i++;
		}
	}

	for (int j = largest ; j >= 1 ; j--){
		for (int i = 'A' ; i <= 'Z' ; i++){
			if (j == count[i])
				cout << (char)i << " " << count[i] << endl;
		}
	}
}
