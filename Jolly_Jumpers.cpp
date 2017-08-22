#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n, answer;

	while(cin >> n){
		answer = 1;
		int steps[1000], answer_steps[1000];
		for (int i = 0 ; i < n ; i++)
			cin >> steps[i];

		for (int i = 1 ; i < n ; i ++)
			answer_steps[abs(steps[i] - steps[i - 1])] = 1;
		
		for (int i = 1 ; i < n ; i++){
			if (answer_steps[i] != 1){
				answer = 0;
				break;
			}
		}

		if (answer == 1)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;

	}
}
