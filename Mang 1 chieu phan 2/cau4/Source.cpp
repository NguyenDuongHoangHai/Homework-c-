#include <iostream>
using namespace std;
#define max 100

void nhapmang(int a[], int n)
{
	int index = 0;
	cout << "Bat dau nhap mang" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap mang " << index << ": ";
		cin >> a[i];
		index++;
	}
}
void xuatmang(int a[], int n)
{
	int index = 0;
	cout << "Bat dau xuat mang" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "xuat phan tu " << index << " : " << a[i] << endl;
		index++;
	}
}
int timucln(int x ,int y)
{
	if (x <= y)
	{
		for (int i = x; i >= 1; i--)
		{
			if (x % i == 0 and y % i == 0)
			{
				return i;
			}
		}
	}
	else
	{
		for (int i = y; i >= 1; i--)
		{
			if (x % i == 0 and y % i == 0)
			{
				return i;
			}
		}
	}
}
void timucln(int a[], int n)
{
	int x = a[0];
	for (int i = 1; i < n; i++)
	{
		x = timucln(x, a[i]);
	}
	cout << "Day la uoc chung lon nhat: " << x << endl ;
}

int main()
{
	int n,m=0;
	int a[max], b[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	timucln(a, n);
	//xuatmang(a, n);
	return 0;
}