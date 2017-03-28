#include<iostream>

using namespace std;

double plan_A(int len){		/*plan A*/
	double rate;
	rate = len * 0.4;
	return rate;
}

double plan_B(int len){		/*plan B*/
	double rate;
	rate = len * 0.25;
	return rate;
}

double plan_C(int len){		/*plan C*/
	double rate;
	rate = len * 0.15;
	return rate;
}

int main(){
	char n1, n2;
	int hour, minute, len;
	char st;
	
	do{
		cout << "Enter the day: \n";
		cin >> n1 >> n2;
		
		cout << "Enter start time(hour): \n";
		cin >> hour;
		
		cout << "Enter start time(minutes): \n";
		cin >> minute;
		
		cout << "Enter how long?(minutes): \n";
		cin >> len;
		
		if ((n1 == 'M') || (n1 == 'W') || (n1 == 'F') || (n1 == 'm') || (n1 == 'w') || (n1 == 'f') || (n1 == 'T') || (n1 == 't')){
			if((hour >= 8) && (hour <= 18))
				cout << "You should spand: " << plan_A(len) << " dollars." << endl;
			else 
				cout << "You should spand: " << plan_B(len) << " dollars." << endl;
		}
		
		else if ((n1 == 'S') || (n1 == 's'))
			cout << "You should spand: " << plan_C(len) << " dollars." << endl;
		
		cout << "Again? : " << endl;
		cin >> st;
	}
	
	while((st == 'Y') || (st == 'y'));
}//
