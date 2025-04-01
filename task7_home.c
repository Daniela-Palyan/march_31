#include <stdio.h>
int main()
{
	const int s = 5;
	int a[s];
	printf("Enter an array: \n");
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 1; i < s; i++)
	{
		if(a[i - 1] >= a[i])
		{
			printf("No\n");
			return 0;
		}

	}
	printf("Yes\n");
	return 0;
}
