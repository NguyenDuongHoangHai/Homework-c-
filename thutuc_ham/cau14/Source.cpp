#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N.
//			F(0) = F(1) = 1
//			F(n) = F(n - 1) + F(n - 2)
// ta sẽ cho mặc định f (0) và f (1) = 1 và chạy từ 2 đến n
//******************  Kết Thúc   ******************

 int fibonacci( int &n);

int main()
{
	unsigned int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	n = fibonacci(n);
	cout << endl << n;
}

int fibonacci(unsigned int &b)
{
	bool c = true;
	int f0 = 1, f1 = 1;
	if (b == 0 or b == 1)
	{
		return f0;
	}
	else
	{
		for (int i = 2; i < b; i++)
		{
			if (c == true)
			{
				f0 = f0 + f1;
				c = false;
			}
			else
			{
				f1 = f0 + f1;
				c = true;
			}
		}
		return f0 + f1;
	}
}
