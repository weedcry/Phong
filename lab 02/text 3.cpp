#include <iostream>
using namespace std;
float tt(float a,char b,float c)
{
	if(b=='+')
		return a+c;
	if(b=='-')
		return a-c;
	if(b=='*')
		return a*c;
	if(b=='/')
		return a/c;	
}
int main()
{
	float a,c;
	char b,d;
	do
	{
	cout<<"enter first number,operator,second number ";cin>>a;
	cin>>b;
	cin>>c;
	cout<<"answer = "<<tt(a,b,c)<<endl;
	cout<<"do another (y/n) ? ";
	cin>>d;
	}while(d== 'y');
return 0;
}
