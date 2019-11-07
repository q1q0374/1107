#include<stdio.h>
int fact(int a)
//long fact(int a)
{
	int i,fact=1;
	//long fact=1;
	for(i=1;i<=a;i++)
	     fact=fact*i;
	  
	return fact;
}

int main()
{
	int num;
	printf("알고싶은 팩토리얼값은?");
	scanf("%d",&num);
	
	printf("%d!의 값은 %d입니다\n",num,fact(num));
	//printf("%d!의 값은 %ld입니다\n",num,fact(num));
	
}

