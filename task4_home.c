#include <stdio.h>
int main()
{
	const int s = 5;
	int a[s], tmp = 0, skzb = 0;
	printf("Enter some numbers to sort: \n");
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < s; i++)
        {
                if(a[i] % 2 == 0)
		{
			tmp = a[i];
			a[i] = a[skzb];
			a[skzb] = tmp;
			++skzb;
		}
        }
	printf("Sorted: \n");
	for(int i = 0; i < s; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;

}
