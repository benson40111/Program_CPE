#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int> a(10);
vector<int>b;

struct ShoeType
{
	char style;
	double price;
};

struct EmployeeRecord
{
	double wage_rate;
	int vacation;
	char status;
};

int main(){
	cout << endl;
	/*int i;
	for(i = 0 ; a.size() ; i++ )
		a[i] = i * i;
	b = a;
	a[1] = -1;
	for (i = 0 ; i < a.size() ; i++)
		cout << b[i] << " ";
	*/
	

	double *p1, *p2;
	p1 = new double;
	p2 = new double;

	*p1 = 1.5;
	*p2 = 3.6;
	cout << *p1 << " " << *p2 << endl;
	p2 = p1;
	cout << *p1 << " " << *p2 << endl;
	*p2 = 5.6;
	cout << *p1 << " " << *p2 << endl;
	*p1 = -0.1;*p2 = 6.2;
	cout << *p1 << " " << *p2 << endl;
	double *p3;
	p3 = new double;
	p3 = p1;*p3 = 7.3;
	cout << *p1 << " " << *p2 << " " << *p3 << endl;
	

	/*string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << "x" << s2 << "->END";
	*/

	/*string s;
	getline(cin, s);
	cout << s << "->END";
	*/

	/*ShoeType shoe1, shoe2;
	shoe1.style = 'C';
	shoe1.price = 8.88;
	shoe2 = shoe1;
	shoe2.price /= 4;
	cout << shoe1.style << "$" << shoe1.price << endl;
	cout << shoe2.style << "$" << shoe2.price << endl;
	*/

	/*int ArraySize = 20;
	int *p;
	p = new int[ArraySize];
	int *a = p;
	int i;
	for (i = 0 ; i < ArraySize ; i++)
		p[i] = -1 * i;
	a[19] = 19;
	for (i = 1 ; i < ArraySize ; i += 2)
		cout << p[i] << " ";
	cout << endl;
	*/
	
	
	/*This topic has a fucking bug*/
	/*
	int i;
	char a[5] = {'x', 'y', 'z', 'p', 'q'};
	for (i = 2 ; i < 5 ; i++)
		cout << a[i] << " ";
	a[1] = a[4];
	for (i = 0 ; i < 4 ; i++)
		cout << a[i] << " ";
	*/



}
