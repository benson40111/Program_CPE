#include <iostream>

using namespace std;

int main(){
	int a ,b;

	while (cin >> a >> b && (a != 0 || b != 0)){
		int sum = 0, carry = 0;
		while (a || b){
			sum = a % 10 + b % 10 + sum;
			if (sum /= 10)
				carry++;
			a /= 10;
			b /= 10;
		}
		if (carry == 0)
			cout << "No carry operation." << endl;
		else
			cout << carry << " carry operations." << endl;
	}
}
