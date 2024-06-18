#include <iostream>
#include <string>

using namespace std;

int reverse(int x);

int main(int argc, char *argv[])
{
	int number = 1534236469;
	printf("Reverse int:%d\n",reverse(number));
}

long reverseStr (char *ch, long length) {
	long result = 0;

	int i = 0;
	long t = 10;
	while (i < length)
	{
		if (i > 0) {
			result = result + ((long)(*(ch + i)) - 48) * t;
			t = t * 10;
		}
		else result = result + (long)(*(ch + i)) - 48;
		i ++;
	}
	return result;
}

int reverse(int x) {

    if (x == INT_MIN || x == INT_MAX) return 0;

	bool posNum = x >= 0 ? true : false;
	int number = posNum ? x : x * (-1);
	string numToStr = to_string(number);

	long length = numToStr.length();

	char letters[length + 1];
    strcpy(letters, numToStr.c_str());
	long retNum = reverseStr(letters, length);
	if (!posNum) retNum = retNum * -1;

	if (retNum > INT_MAX || retNum < INT_MIN) return 0;

	return (int)retNum;
}