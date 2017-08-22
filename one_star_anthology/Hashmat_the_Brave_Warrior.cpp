#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	long long int our, enemy;
	while(cin >> our >> enemy){
		if (our == 0 || enemy == 0)
			break;
		cout << abs(our - enemy) << endl;
	}
}

