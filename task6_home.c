#include <stdio.h>
int main()
{
	const int s = 10;
	int a[s], target = 0, ka = 0;
	printf("Enter target: ");
	scanf("%d", &target);
	printf("Enter an array: \n");
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] == target)
		{
			ka = 1;
		}
	}
	if(ka ==1)
	{
		printf("There is target!\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
