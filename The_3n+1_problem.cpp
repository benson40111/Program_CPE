#include <iostream>

using namespace std;

int calue(int n){
	int count = 1;
	while(n != 1){
		if (n % 2 == 1)
			n = 3 * n + 1;
		else
			n /= 2;
		count++;
	}
	return count;
}

int main(){
	int a, b, max;

	while(cin >> a >> b){
		cout << a << " " << b << " ";
		for (int i = a ; i <= b ; i++){
			int length = calue(i);
			if (max < length)
				max = length;
		}
		cout << max << endl;
	}
}
