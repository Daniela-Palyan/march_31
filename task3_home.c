#include <stdio.h>
int main()
{
	const int s = 5;
	char a[s], tem;
	printf("Enter some characters: \n");
	for(int i = 0; i < s; i++)
	{
		scanf(" %c", & a[i]);
	}
	printf("Reverse\n");
	for(int i = 0; i < s; i++)
	{
		if(i <= s/2)
		{
			tem = a[i];
			a[i] = a[s - 1 - i];
			a[s - 1 - i] = tem;
		}
		printf("%c\n", a[i]);
	}
	return 0;
}
