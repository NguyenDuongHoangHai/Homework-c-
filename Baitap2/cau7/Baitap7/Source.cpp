#include<iostream>;
using namespace std;
int main()
{
	int a,tram,chuc,donvi;
	cout << "Nhap vao so thu nhat: ";
	cin >> a;
	if (a < 1000 and a >= 0)
	{
		tram = a/100;
		chuc = (a % 100) / 10;
		donvi = a % 10;
		switch (tram)
		{		
			case 1:
			{
				cout << "Mot Tram ";
			}
			break;
			case 2:
			{
				cout << "hai Tram ";
			}
			break;
			case 3:
			{
				cout << "ba Tram ";
			}
			break;
			case 4:
			{
				cout << "bon Tram ";
			}
			break;
			case 5:
			{
				cout << "nam Tram ";
			}
			break;
			case 6:
			{
				cout << "sau Tram ";
			}
			break;
			case 7:
			{
				cout << "bay Tram ";
			}
			break;
			case 8:
			{
				cout << "tam Tram ";
			}
			break;
			case 9:
			{
				cout << "chin Tram ";
			}
			break;
		}
		if (tram != 0 and chuc == 0 and donvi != 0)
		{
			cout << "linh";
		}
		else
		{
			switch (chuc)
			{
				case 1:
				{
					cout << "Muoi";
				}
				break;
				case 2:
				{
					cout << "hai muoi";
				}
				break;
				case 3:
				{
					cout << "ba muoi";
				}
				break;
				case 4:
				{
					cout << "bon muoi";
				}
				break;
				case 5:
				{
					cout << "nam muoi";
				}
				break;
				case 6:
				{
					cout << "sau muoi";
				}
				break;
				case 7:
				{
					cout << "bay muoi";
				}
				break;
				case 8:
				{
					cout << "tam muoi";
				}
				break;
				case 9:
				{
					cout << "chin muoi";
				}
				break;
			}
		}
		switch (donvi)
		{
			case 1:
			{
				cout << " Mot";
			}
			break;
			case 2:
			{
				cout << " hai";
			}
			break;
			case 3:
			{
				cout << " ba";
			}
			break;
			case 4:
			{
				cout << " bon";
			}
			break;
			case 5:
			{
				cout << " nam";
			}
			break;
			case 6:
			{
				cout << " sau";
			}
			break;
			case 7:
			{
				cout << " bay";
			}
			break;
			case 8:
			{
				cout << " tam";
			}
			break;
			case 9:
			{
				cout << " chin";
			}
			break;
			}
	}
	else
	{
		cout << "Khong hop le";
	}

}