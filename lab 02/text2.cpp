#include <iostream>
#include<math.h>
using namespace std;
float amount,year,rate;
float money(float amount,float year,float rate)
{
	int i;
	for(int i=1;i<=year;i++)
	{
		amount=amount+amount*(rate/100);
	}
	return amount;
}
int main()
{
	float amount,year,rate;
	cout<<"enter initial amount: ";cin>>amount;
	cout<<"enter number of years: ";cin>>year;
	cout<<"enter interest rate: ";cin>>rate;
	cout<<"at the end of "<<year<<" years"<<"you will have "<<money(amount,year,rate)<<" dolar";
	return 0;
}
