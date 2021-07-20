#include<iostream>;
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap thang:";
	cin >> a;
	cout << "Nhap nam:";
	cin >> b;
	if (a == 1 or a == 3 or a == 5 or a == 7 or a == 8 or a == 10 or a == 12)
	{
		a = 31;
	}
	else
	{
		if (a != 2)
		{
			a = 30;
		}
		else
		{
			if (b % 4 == 0 and b % 100 != 0)
			{
				a = 29;
			}
			else
			{
				a = 28;
			}
		}
	}
	cout << "so ngay cua thang do la: " << a;
}
