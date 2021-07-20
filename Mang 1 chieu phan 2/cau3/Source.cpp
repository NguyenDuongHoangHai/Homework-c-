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
bool kiemtra_snt(int n)
{
	if (n < 2)
	{
		return false;
	}
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	
	return true;
	
}
void themmang(int a[], int &n, int vt)
{
	for (int i = n-1 ; i >= vt;i--)
	{
		a[i + 1] = a[i];
	}
	a[vt] = 0;
	n++;
}
void thuattoan(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemtra_snt(a[i]) == true)
		{
			themmang(a, n, i);
			i++;
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
	thuattoan(a, n);
	xuatmang(a, n);
	return 0;
}