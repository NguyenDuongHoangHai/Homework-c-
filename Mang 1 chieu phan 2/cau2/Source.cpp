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
void xoamang(int a[], int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void xoaphantutrung(int a[], int& n)
{
	
	for (int i = 0; i < n; i++)
	{
		bool kt = false;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				xoamang(a, n, j);
				j--;
				kt = true;
			}
		}
		if (kt == true)
		{
			xoamang(a, n, i);
			i--;
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
	xoaphantutrung(a, n);
	xuatmang(a, n);
	return 0;
}