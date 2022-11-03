#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b);
int main(void)
{
	int i, j, k;
	scanf("%d", &i);
	scanf("%d", &j);
	k = lcm(i, j);
	printf("%d", k);
	
	return 0;
}
int lcm(int a, int b)
{
	int i, j, k=a, l=b,temp=0,LCM=1;
	if (a >= b)
	{
		for (i = 2; i < b; i++)
			{	
				
				if (k%i == 0 && l%i == 0)
					{
						temp = i;
						LCM = LCM * i;
						k = k / i;
						l = l / i;
						temp = 0;
						i = i - 1;
					}
				
			}

	}
	else 
	{
		for (i = 2; i < a; i++)
		{
			
			if (k%i == 0 && l%i == 0)
			{
				temp = i;
				LCM = LCM * i;
				k = k / i;
				l = l / i;
				temp = 0;
				i = i - 1;
			}
			
		}
	}
	return LCM * k* l;
}