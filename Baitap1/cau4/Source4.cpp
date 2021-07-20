#include<iostream>;
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap thang:";
	cin >> a;
	cout << "Nhap nam:";
	cin >> b;
	a==1 or a==3 or a==5 or a==7 or a==8 or a==10  or a==12 ? a=31 : a==2 ? a=28 : a=30;
	b%4==0 and b%100!=0 ? a=29 : a=a;
	cout << "so ngay cua thang do la: " << a;
}
