#include<stdio.h>
int main()
{
	int a,b,z;
	scanf("%d %d",&a,&b);
	do
	{
		a++;
		z=a%10;
	}while(z!=b);
	printf("%d",a);
}
