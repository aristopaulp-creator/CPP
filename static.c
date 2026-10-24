#include<stdio.h>
void fun()
{
static int a=100;
a=a+10;
printf("%d \n",a);
}
main()
{
	int i;
	for(i=0;i<10;i++)
	{
	fun();	
	}
}
