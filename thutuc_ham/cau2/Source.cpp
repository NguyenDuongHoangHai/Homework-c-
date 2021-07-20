#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N. Công thức S(n)= 1 * 2 * 3 ... * n.
// Do tính tích từ 1 đến n nên ta sẽ tính tích đoạn [1,n]
//******************  Kết Thúc   ******************

int tinh_tich(int n);

int main()
{
	// unsigned là không âm 
	// Biến int n là biến nhập vào
	int n;
	cout << "Nhap bien n: ";
	cin >> n;
	// tham số n truyền vào hàm là tham số thực
	int kq = tinh_tich(n);
	cout << "Ket qua cua phep tinh la: " << kq;
}

// int n trong hàm tinh_tong gọi là tham số hình thức
int tinh_tich(int n)
{
	int kq = 1;
	for (int i = 1; i <= n; i++)
	{
		kq = kq * i;
	}
	return kq;
}