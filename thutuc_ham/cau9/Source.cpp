#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N.
// Thuật toán đảo ngược số: c = c * 10 + n % 10;
//							n = n / 10;
// so sánh số ban đầu và số đảo ngược nếu bằng nhau thì đó là số đối xứng
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
	while (n > 0)
	{
		int  sobandau = n, c = 0;
		while (n > 0)
		{
			c = c * 10 + n % 10;
			n = n / 10;
		}
		if (c == sobandau)
		{
			cout << "Day la so doi xung";
		}
		else
			cout << "Day khong phai so doi xung";
	}
}