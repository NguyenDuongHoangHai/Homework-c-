#include<iostream>
using namespace std;
int main()
{
	unsigned int n ;
	bool c = true;
	cout << "Nhap N: ";
	cin >> n;
	if (n < 2)
	{
		cout << "\n khong phai so nguyen to";
	}
	else if (n==2)
	{
		cout << "Day la so nguyen to";
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				c = false;
				break;
			}
		}
		if (c == true)
		{
			cout << "Day la so nguyen to";
		}
		else
		{
			cout << "\n khong phai so nguyen to";
		}
	}

	


}