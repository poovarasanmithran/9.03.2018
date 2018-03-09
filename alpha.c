#include <stdio.h>
#include<string.h>
int main(void)
{
	char str1[60];
	int i,n;
	scanf("%s",str1);
	n=strlen(str1);
	for(i=0;i<n;i++)
	{
		str1[i]=str1[i]+3;
		if(str1[i]=='X')
		str1[i]='v';
		if(str1[i]=='Y')
		str1[i]='u';
		if(str1[i]=='Z')
		str1[i]='w';
	}
	printf("%s",str1);


	return 0;
}
