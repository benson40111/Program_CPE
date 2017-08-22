#include <iostream>

using namespace std;

void f2c()
{
	float f;

		cout<<"块地ん放 = ";
		cin>>f;
		cout<<"尼ん放 = "<<(f-32)*(5.0/9);
			
}

void c2f()
{
	float f;

		cout<<"块尼ん放 = ";
		cin>>f;
		cout<<"地ん放 = "<<(9.0/5)*f+32;
			
}

int main()
{
	short a;
	char s;
	do{
		cout<<"锣地ん(f)锣尼ん(c)";
		cin>>s;
		if(s=='f'){
			c2f();
		} 
		else if(s=='c'){
			f2c();
		}
		else
			cout<<"error";
		cout<<"\nagain='1'";
		cin>>a;
	}while(a==1);

	return 0;
}
