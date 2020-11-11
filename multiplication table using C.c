#include<stdio.h>
int main(int argc, char *argv[])
{
	int num;
	printf("Enter the number you want multiplication table of\n");
	scanf("%d",&num);
	for(int i = 1; i <= 10; i++)
	{
		printf("%d × %d = %d\n",num, i, (num * i));
	}
}