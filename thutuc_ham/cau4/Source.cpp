#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N. Nếu n chia 2 mà phần dư không ==> đó là số chẳn.
// Do bé hơn 2 sẽ không có giá chỉ chẳn nên ta xét đoạn [2,n] 
//******************  Kết Thúc   ******************

void xuat_gia_tri_chan(int n);
int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac gia tri output: ";
	xuat_gia_tri_chan(n);
	return 0;
}

// Hàm này trả về nhiều output nên ta sài hàm không giá trị trả về
void xuat_gia_tri_chan(int n)
{
	if (n < 2)
	{
		cout << "Khong co gia tri output";
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				cout << i << "\t";
			}
		}
	}


}