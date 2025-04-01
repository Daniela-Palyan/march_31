#include <stdio.h>

int main()
{
        const int s = 5;
        int a[s], i = 0;
        printf("Enter your array (one different): \n");
        for(i = 0; i < s; i++)
        {
                scanf("%d", &a[i]);
        }
	i = 1;
	while(a[i] == a[i-1])
	{
		i++;
	}
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

        return 0;
}

