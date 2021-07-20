#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[], int n)
{
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu cho vi tri index " << index << " : ";
		cin >> a[i];
		index++;
	}
}
void xuatmang(int a[], int n)
{
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Gia tri index cua phan tu " << index << " : ";
		cout << a[i] << endl;
		index++;
	}
}
bool timso_SNT(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		while (n != 0)
		{
			for (int i = 2; i < n; i++)
			{
				if (n % i == 0)
				{
					return false;
				}
			}
			n /= 10;
		}		
	}
	
	return true;
}
void in_ssnt(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (timso_SNT(a[i]) == true)
		{
			cout << "Day la SSNT : " << a[i] << endl;
		}
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
	in_ssnt(a, n);
}