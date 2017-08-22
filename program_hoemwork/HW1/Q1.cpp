#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{	
    double distance, mile = 0, fuel = 0;

    for ( ; ; )
    {
	    cout << "input \n";
	    cin >> distance;

	    mile = distance * 0.621;
	    fuel = mile * 2;

	    cout << "miles are " << mile << endl;
	    cout << "consumed fuel is " << fuel << endl;
	}
	
	system("pause");
    return 0;
}//
