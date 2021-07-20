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
bool kt_snt(int a)
{
	if (a < 2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
void timmanga(int a[], int &n)
{
	for (int i = 0; i < 500; i++)
	{
		if (kt_snt(i) == true)
		{
			a[n] = i;
			n++;
		}
	}
}
void timmangb(int a[], int n, int b[], int& m)
{
	m = n / 2;
	int c = 0;
	
	for (int i = 0; i < m; i++)
	{
		int tam = a[c+1];
		int count = 1;
		while (tam / 10 != 0)
		{
			count++;
			tam /= 10;
		}

		b[i] = a[c] * pow(10,count) + a[c + 1] ;
		c = c + 2;
	}
}

int main()
{
	int n=0,m=0;
	int a[max],b[max];
	//cout << "Nhap so luong phan tu mang: ";
	//cin >> n;
	//nhapmang(a, n);
	timmanga(a, n);
	timmangb(a, n, b, m);
	xuatmang(a, n);
	xuatmang(b, m);
	int k;
	cout << "Nhap k: ";
	do
	{
		cin >> k;
	} while (k >= m);
	
	cout << "xuat gia tri: " << b[k - 1];
	return 0;
}