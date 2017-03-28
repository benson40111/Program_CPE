#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int cases,r,s[30000000];

	cin >> cases;
	while(cases--)
	{
		int sum = 0;
		cin >> r;
		for(int i = 0 ; i < r ; i++)
			cin>>s[i];
		stable_sort(s,s+r);
		for(int i = 0 ; i < r ; i++){
			if(r%2==1)
				sum += abs( s[i] - s[r/2]);
			else
				sum += abs( s[i] - ( (s[r/2-1] + s[r/2])/2 ) );
		}
		cout<<sum<<endl;
	}
}

