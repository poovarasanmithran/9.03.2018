#include <stdio.h>
int main()
{
	int a,i,j,flag=0;
	printf("\nEnter the number :");
	scanf("%d",&a);
	for(i=2;i<=n-1;i++)
	{
		if(a%i==0)
		{
			flag=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					flag=1;
				}
			}
			if(flag == 0)
			{
				printf("%d\t",i);
			}
		}
	}
	return 0;
}
