#include <stdio.h>
int main()
{
	const int s = 5;
	char a[s];
	printf("Enter some lowercase letters:\n");
	for (int i = 0; i < s; i++)
	{
		scanf(" %c", &a[i]);
		a[i] -= 32;
	}
	printf("Letters in uppercase:\n");
	for (int i = 0; i < s; i++)
	{
		printf("%c\n", a[i]);
	}
	return 0;
}
