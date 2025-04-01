#include <stdio.h>
int main()
{
	const int s = 9;
	int a[s], b[10] = {0};
	printf("Enter numbers: \n");
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int j = 1; j < 11; j++)
	{
		for(int i = 0; i < s; i++)
		{
			if(a[i] == j)
				b[j - 1] = 1;
		}
	}
	int i = 0;
	while (b[i])
	{
		++i;
	}
	printf("I found it: %d\n", i + 1);
	return 0;
}
