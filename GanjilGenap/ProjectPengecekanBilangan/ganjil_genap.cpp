#include <iostream>
#include <string>

using namespace std;

int main()
{
	int bilangan;
	string lanjut;

	while (true)
	{

		cout << "Pengecekan Bilangan Ganjil / Genap" << endl;
		cout << "Memasukan Bilangan:";
		cin >> bilangan;

		cout << "Bilangan tersebut adalah ";

		if (bilangan % 2 == 0)
		{
			cout << "Genap" << endl;
		}
		else
		{
			cout << "Ganjil" << endl;
		}

		cout << "Apakah anda ingin lanjut? ketik yes/no" << endl;
		cin >> lanjut;

		if (lanjut != "yes")
		{
			break;
			cout << endl;
		}
	}
	return 0;
}