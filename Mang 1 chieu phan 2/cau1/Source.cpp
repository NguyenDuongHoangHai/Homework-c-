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
int giatrilonnhat(int a[],int n)
{
	int _max = a[0];
	for(int i = 0 ;i < n ; i++)
	{
		if (a[i] > _max)
		{
			_max = a[i];
		}
	}
	return _max;
}
void xoamang(int a[], int &n,int vt)
{
	for (int i = vt ; i < n - 1 ; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void xoagiatrilonnhat(int a[], int &n, int _max)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == _max)
		{
			xoamang(a, n, i);
		}
	}
}

int main()
{
	int n;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	int _max = giatrilonnhat(a, n);
	xoagiatrilonnhat(a, n,_max);
	xuatmang(a, n);
	return 0;
}