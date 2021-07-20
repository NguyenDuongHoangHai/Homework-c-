#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N.
// kiểm tra n có phải số nguyên tố hay không . SNT là số sẽ không chia hết cho số nào từ đoạn (2,n)
//******************  Kết Thúc   ******************

void output(int n);

int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "output: ";
	output(n);
	return 0;
}

void output(int n)
{
	bool c = true;
	if (n < 2)
	{
		cout << "Day khong phai so nguyen to";
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
		if (c == false)
		{
			cout << "Day khong phai so nguyen to";
		}
		else
		{
			cout << "Day la so nguyen to";
		}
	}
}