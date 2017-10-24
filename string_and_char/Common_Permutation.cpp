#include <iostream>
#include <algorithm>
#include <string.h>
#define MAX 1005
using namespace std;

int main(){
	char a[MAX],b[MAX];
	while(cin.getline(a,MAX)){
		cin.getline(b,MAX);
		sort(a,a+strlen(a));
		sort(b,b+strlen(b));
		int i = 0, j = 0;
		while(a[i] && b[j]){
			if(a[i] == b[j]){
				cout<<a[i];
				i++;
				j++;
			}
			else if(a[i]<b[j])
				i++;
			else
				j++;
		}
		cout<<endl;
	}
}
