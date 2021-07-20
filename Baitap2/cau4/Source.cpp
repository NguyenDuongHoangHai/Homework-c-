#include<iostream>
using namespace std;
int main()
{
	// nhap du lieu dau vao
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	//PT bậc 1
	if (a != 0)
	{
		a = -b / a;
		cout << "Ket qua la: " << a;
	}
	else
	{
		if (b != 0)
		{
			cout << "Vo nghiem";
		}
		else
		{
			cout << "vo so nghiem";
		}
	}
}