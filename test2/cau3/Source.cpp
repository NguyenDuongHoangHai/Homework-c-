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
void timphantuphanbiet(int a[], int n,int b[],int &m)
{
	
	for (int i = 0; i < n; i++)
	{
		bool kt = true;
		for (int j = 0; j < m; j++)
		{
			if (a[i] == b[j])
			{
				kt = false;
				break;
			}
		}
		if (kt == true)
		{
			b[m] = a[i];
			m++;
		}
	}
}
void demsolanxuathien(int a[], int n, int b[], int m)
{
	for (int i = 0; i < m; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j] == b[i])
			{
				count++;
			}
		}
		cout << "so lan lap lai cua: " << b[i] << "\t" << count << endl;
	}
}
int main()
{
	int n,m=0;
	int a[max],b[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	timphantuphanbiet(a, n, b, m);
	demsolanxuathien(a, n, b, m);
	//xuatmang(b, m);
	return 0;
}