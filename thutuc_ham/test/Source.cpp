#include <iostream>
using namespace std;
#include <string>

bool kiemtra_matkhau(string& A, string& B, int& tam);

int main()
{
	string A, B;
	int tam = 0;
	bool cohieu = kiemtra_matkhau(A, B, tam);
}

bool kiemtra_matkhau(string& A, string& B, int& tam)
{
	int c = false;
	cout << "Tai khoan: ";
	cin >> A;
	cout << "Mat khau: ";
	cin >> B;
	tam++;
	if (A == "Hoanghai" and B == "123456")
	{
		c = true;
		return c;
	}
	else if (tam >= 3)
	{

		return c;
	}
	else
	{
		kiemtra_matkhau(A, B, tam);
	}
	return c;
}