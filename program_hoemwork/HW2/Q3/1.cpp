#include <iostream>

using namespace std;

void f2c()
{
	float f;

		cout<<"��J�ؤ�ū� = ";
		cin>>f;
		cout<<"���ū� = "<<(f-32)*(5.0/9);
			
}

void c2f()
{
	float f;

		cout<<"��J���ū� = ";
		cin>>f;
		cout<<"�ؤ�ū� = "<<(9.0/5)*f+32;
			
}

int main()
{
	short a;
	char s;
	do{
		cout<<"��ؤ�(f)�����(c)";
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
