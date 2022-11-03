#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char n,w;
	scanf("%c", &n);
	if (n>=97 && n<=123)
	{
		w = n - 32;
		printf("%c", w);	
	}
	if (n >= 65 && n <=91)
	{
		w = n + 32;
		printf("%c", w);
	}


	return 0;
}