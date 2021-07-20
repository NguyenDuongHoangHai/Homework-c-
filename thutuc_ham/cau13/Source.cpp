#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N.
// Cho chạy for N đoạn [1,n)
// kiểm tra i có phải số nguyên tố hay không . SNT là số sẽ không chia hết cho số nào từ đoạn (2,n)
//******************  Kết Thúc   ******************

void output(int n);
int kiem_tra_snt(int i);

int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "output: \n";
	output(n);
	return 0;
}

void output(int n)
{
	int i;

	for (int i = 0; i < n; i++)
	{
		if (kiem_tra_snt(i) == true)
		{
			cout << i << endl ;
		}
	}
}

int kiem_tra_snt(int i)
{
	bool c = true;
	if (i < 2)
	{
		return c = false;
	}
	else
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				return c = false;
			}
		}
	}
	return c;
}