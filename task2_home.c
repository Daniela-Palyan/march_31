#include <stdio.h>
int main()
{
	const int s = 5;
	int a[s], kent = 0;
	printf("Enter some numbers: ");
	for(int i = 0; i < s; i++)
	{
		scanf(" %d", &a[i]);
		if(a[i] % 2 == 1)
		{
			++kent;
		}
	}
	printf("There are %d odd numbers\n", kent);
	return 0;
}
