#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

		int a = 0;
		double n;
		while(a != 1)
		{
			cout << "Enter a guess number \n";
			cin >> n;
	
			double guess = n / 2, r;
			
			for (int i = 0 ; i <= 100 ; i++)
			{
				r = n / guess;
				guess = (guess + r) / 2;
			}
		
			cout << "Guess is " << guess << endl;
		}

	return 0;
}
