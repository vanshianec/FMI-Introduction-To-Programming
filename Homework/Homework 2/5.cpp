
#include <iostream>

using namespace std;

const int X = 9;
const int Y = 6;
const int Z = 3;

int T(int n)
{
	if (n == 0)
	{
		return Z;
	}

	return X * T(n / 2) + Y * T(n - 1);
}

int main()
{
	//T(10) = 1652639355

	cout << T(10) << endl;
	
	return 0;
}


