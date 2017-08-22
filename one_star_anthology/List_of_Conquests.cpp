#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int main(){
	char country_name[1000];
	map<string, int> countries;
	map<string,int>::iterator found;
	int n;

	cin >> n;
	for (int i = 0 ; i < n ; i++){
		scanf("%s%*[^\n]", country_name);
		countries[string(country_name)]++;
	}

	for (found = countries.begin() ; found != countries.end() ; found++){
		printf("%s %d\n", found->first.c_str(), found -> second);
	}

}
