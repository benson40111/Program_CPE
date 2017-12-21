#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	while(n--){
		long long int c, o, i = 0, sum = 0, condition = 0;
		i++;
		cin >> c;
		o = c;
		while (1){
			if (c == 1) {
				cout << "Case #" << i << ": " << o << " is a Happy number." << endl;
				break;
			}
			
			if (c == o) {
				condition++;
				if (cond == 2) {
					cout << "Case #" << i << ": " << o << " is an Unhappy number." << endl;
					break;
				}
				
			}

			while (c >= 10){
				sum += (c % 10) * (c % 10);
				c /= 10;
			}
			c = c * c;
			sum += c;
			c = sum;
			sum = 0;
		}
	}//
}//
