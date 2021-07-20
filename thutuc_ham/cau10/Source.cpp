#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N.
// kiểm tra n có bao nhiêu chữ số chỉ được nhập chữ số bé hơn n
// sau đó xuất vị trí số đó đếm từ hàng đơn vị
//******************  Kết Thúc   ******************

int kiem_tra_k(int k);
int output(int n, int k);

int main()
{
	unsigned int n, k;
	cout << "Nhap n: ";
	cin >> n;
	int tam = kiem_tra_k(n);
	do
	{
		cout << "Nhap k: ";
		cin >> k;
	} while (!(k <= tam));
	cout << "output: ";
	int kq = output(n, k);
	cout << kq;
	return 0;
}
int kiem_tra_k(int n)
{
	int tam = 0;
	while (n > 0)
	{
		tam++;
		n /= 10;
	}
	return tam;
}
int output(int n, int k)
{
	int kq;
	for (int i = 1; i <= k; i++)
	{
		kq = n % 10;
		n = n / 10;
	}
	return kq;
}