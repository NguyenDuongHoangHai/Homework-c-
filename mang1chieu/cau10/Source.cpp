#include<iostream>
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
void hoanvi(int& x, int& y)
{
	int tam = x;
	x = y;
	y = tam;

}
void sapxep_londan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				hoanvi(a[i], a[j]);
			}
		}
	}
}
void giaithuat(int a[], int n, int k)
{
	if (k >= n)
	{
		cout << "Khong co gia tri";
	}
	else
	{
		cout << "gia tri thu k: " << a[k - 1];
	}
}

int main()
{
	int n, k;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	cout << "Nhap gia tri K: ";
	cin >> k;
	sapxep_londan(a, n);
	xuatmang(a, n);
	giaithuat(a, n, k);
	return 0;
}