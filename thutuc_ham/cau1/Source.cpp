#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N. Công thức S(n)= 1 + 2 + 3 ... + n.
// Do tính tổng từ 1 đến n nên ta sẽ tính tổng đoạn [1,n]
//******************  Kết Thúc   ******************

int tinh_tong(int n);

int main()
{
	// unsigned là không âm 
	// Biến int n là biến nhập vào
	unsigned int n;
	cout << "Nhap vao bien n: ";
	cin >> n;
	// tham số n truyền vào hàm là tham số thực
	int kq =tinh_tong(n);
	cout << "Ket qua phep tinh la: " << kq << endl;
}

// int n trong hàm tinh_tong gọi là tham số hình thức
int tinh_tong(int n)
{
	int kq = 0;
	for (int i = 1; i <= n; i++)
	{
		kq = kq + i;
	}
	return kq;
}