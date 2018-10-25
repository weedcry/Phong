#include <iostream>
#include <conio.h>
using namespace std;
class Cphone
{
	private:
		int areacode;
		int exchange;
		int number;
		string mynumber;
	public:
		void nhap();
		void xuat();
};
void Cphone::nhap()
{
	mynumber="(212)767-8900";
	cout<<"enter your area code,exchange,and number: ";
	cin>>areacode>>exchange>>number;
}
void Cphone::xuat()
{
	cout<<"my number is "<<mynumber<<endl;
	cout<<"your number is "<<"("<<areacode<<")"<<exchange<<"-"<<number;	
}
int main()
{
	Cphone h;
	h.nhap();
	h.xuat();
	getch();
}

