#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N. Nếu n chia i(i là số chạy từ [1,n]) mà phần dư =0 ==> đó là ước số.
//******************  Kết Thúc   ******************

void xuat_gia_tri_uoc(int n);

int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	xuat_gia_tri_uoc(n);
	return 0;
}

// Hàm này trả về nhiều output nên ta sài hàm không giá trị trả về

void xuat_gia_tri_uoc(int n)
{
	cout << "Cac gia tri output: ";
	if (n == 0)
	{
		cout << " Khong co output.";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				cout << i << '\t';
			}
		}
	}
	

}