#include <stdio.h>
#include <stdlib.h>

int maxium(int x, int y, int z);

int main(void)
{
	int number1;
	int number2;
	int number3;
	printf("Enter three intergers: ");
	scanf("%d %d %d", &number1, &number2, &number3);
	printf("Maxium is: %d\n", maxium(number1, number2, number3));
	system("pause");
	return 0;
}

int maxium(int x, int y, int z)
{
	int max = x;
	if (y>max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}