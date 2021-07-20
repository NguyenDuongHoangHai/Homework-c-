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
void in_sochanlonnhat(int a[], int n)
{
	
	int tam = 0;
	int sochanlonnhat=0;
	int min_le = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			min_le = a[i];
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (min_le > a[i] and a[i] %2 != 0)
		{
			min_le = a[i];
			tam = i;
		}
	}
	for (int j = 0; j < n; j++)
	{
		if (a[j] % 2 == 0 and sochanlonnhat < a[j] and a[j] < a[tam])
		{
			sochanlonnhat = a[j];
		}
	}
	if (sochanlonnhat == 0 or min_le == 0)
	{
		cout << "Khong co dieu kien thoa man";
	}
	else
	{
		cout << "Day la so chan lon nhat : " << sochanlonnhat << endl;
	}

}
int main()
{
	int a[max];
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	in_sochanlonnhat(a, n);
}