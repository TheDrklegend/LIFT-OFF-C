#include<stdio.h>
int main()
{
	//ASSIGNMENT QUESTIONS #2
	int a,b;
	printf("ENTER 2 NUMBERS: ");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d IS GREATER",a);
	}
	else if(b>a)
	{
		printf("%d IS GREATER",b);
	}
	else
	{
		printf("BOTH NUMBERS ARE EQUAL");
	}
	return 0;
}