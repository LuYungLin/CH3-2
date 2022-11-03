#include <stdio.h>
#include <stdlib.h>
long power(int a, int b);
int main(void)
{
	int i, j, k, l;
	scanf("%d", &i);
	scanf("%d", &j);
	k=power(i, j);
	printf("%d", k);
}
long power(int a, int b)
{
	int i,j=1;
	for (i = 1; i <= b; i++)
		{
			j = j * a;
		}
	return j;

}