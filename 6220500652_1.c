#include<stdio.h>
int main()
{
	int n,c,z,k;
	scanf("%d %d",&n,&c);
	k=n;
	do
	{
		k++;
		z=k%10;
	}while(z!=c);
	printf("%d",k);
	
	return 0;
}
