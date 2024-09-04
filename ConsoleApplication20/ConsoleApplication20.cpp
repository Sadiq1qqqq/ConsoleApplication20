
#include <iostream>
using namespace std;
int five(int num[10]) {
	int top = 0;
	for (int j = 0; j < 10; j++)
	{

		if (num[j] % 3 == 0 && num[j] % 5 != 0) {
			top++;
		}
	}
	return top;
}

int negative(int num[10]) {
	int t = 0;
	int cem = 0;
	for (int j = 0;j < 10; j++)
	{

		if (num[j] < 0) {
			t = j + 1;
			break;
		}
	}
	for (int j = t; j < 10; j++)
	{
		cem += num[j];

	}
	return cem;
}

int positive(int num[10]) {
	int t = 0;
	int cem = 0;
	for (int j = 0; j < 10; j++)
	{

		if (num[j] > 0) {
			t = j + 1;

			break;
		}
	}
	for (int j = t;j < 10;j++)
	{
		cem += num[j];

	}
	return cem;
}
void maxmin(int num[20]) {
	int min = num[0];
	int max = num[0];
	for (int j = 1; j < 20; j++)
	{

		if (num[j] > max) {
			max = num[j];
		}
	}
	for (int j = 1; j < 20; j++)
	{

		if (num[j] < min) {
			min = num[j];
		}
	}
	cout << "Ededlerde minimum:" << min << endl;
	cout << "Ededlerde maksimum:" << max << endl;

}
