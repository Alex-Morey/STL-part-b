//Alexander Morey
//CIS 1202
//4/30/2024

#include <iostream>

using namespace std;

float half(float num);

int main()
{
	float num;
	cout << "input number: ";
	cin >> num;
	cout << half(num);

}

float half(float num)
{
	num = num / 2;
	return num;
}