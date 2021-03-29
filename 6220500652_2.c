#include<stdio.h>
int main()
{
	int n,i,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
	}
	for(i=0;i<n;i++)
	{
		printf("*\n");
			if(a[i]!=a[i+1])
			{
				continue;
			}
			else if(a[i]==a[i+1])
			{
				printf("%d",a[i]);
			}	
		
	}
	
}

