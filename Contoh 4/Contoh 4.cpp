#include <iostream>
using namespace std;

int main() {
	int bilangan1, bilangan2;
	string status;
	srand(time(0));

	bilangan1 = rand() % 10;
	bilangan2 = rand() % 10;

	if (bilangan1 == bilangan2)
	{
		status = "Bilangan satu samadengan bilangann dua";
	}
	else if (bilangan1 > bilangan2)
	{
		status = "Bilangan satu lebih";
	}
	else
	{
		status = "Bilangan satu lebih kecil dari bilangan dua";
	}
	cout << "Bilangan pertama : " << bilangan1 << endl;
	cout << "Bilangan kedua : " << bilangan2 << endl;
	cout << "Status bilangan : " << status;
}