#include <iostream>
using namespace std;

int main()
{
	int altura, largura, comprimento;

	cin >> altura >> largura >> comprimento;

	if ((altura >= 3) && (altura * largura * comprimento >= 50))
	{
		cout << "1\n";
	}

	else
	{
		cout << "0\n";
	}

	return 0;
}