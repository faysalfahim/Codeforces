#include<stdio.h>
#include<string.h>
int main ()
{
	char ar[1000000],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&ar[i]);
	}
	if((n<=10))
	{
	
	for(i=0;i<n;i++)
	{
		printf("%s",ar[i]);
	}
    }
    else 
    {
		
    	printf("%s%d%s",ar[0],n-2,ar[n]);
	}

}
