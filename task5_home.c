#include <stdio.h>
int main()
{
	const int s = 5;
	int a[s], b[s];
	printf("Enter first array: \n");
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Second array: \n");
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &b[i]);
		if(a[i] != b[i])
		{
			printf("Not equal! \n");
			return 0;
		}
	}
	printf("Equal :)\n");
	return 0;
}
