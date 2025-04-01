#include <stdio.h>
int main()
{
	const int s = 5;
	int a[s];
	printf("Enter your array (one different): \n");
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 1; i < s; i++)
	{
		if(a[i] != a[i - 1])
		{
			if(i == 1)
			{
				if(a[0] == a[2])
				{
					printf("I found it : %d\n", a[1]);
					return 0;
				}
				else
				{
					printf("I found it : %d\n", a[0]);
					return 0;
				}
			}
			else
			{
				printf("I found it : %d\n", a[i]);
				return 0;
			}
		}
	}
	return 0;
}
