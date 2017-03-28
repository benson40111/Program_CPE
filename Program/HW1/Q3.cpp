#include<iostream>

using namespace std;

int main()
{
	double mph, seconds;
	int minutes;
	
	for ( ; ;)
	{
		cout << "input mph \n";
		cin >> mph;
		
		minutes = (int)(60 / mph);
		seconds = 3600 / mph - minutes * 60;
		
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(1);
			
		cout << "minutes = " << minutes << endl;
		cout << "seconds = " << seconds << endl;		
	}
		
		return 0;
}
