#include <stdio.h>
#include <stdlib.h>
unsigned long long int fibonacci(unsigned int n);
int main(void)
{
	unsigned int a;
	unsigned long long int b;
	scanf("%u", &a);
	b = fibonacci(a);
	printf("%u", b);
}
unsigned long long int fibonacci(unsigned int n)
{
	int a[10000];
	int i;
	a[0] = 0;
	a[1] = 1;
	for (i=2;i<n;i++)
		{
		a[i] = a[i - 1] + a[i - 2];	
		}
	return a[n-1];

}
