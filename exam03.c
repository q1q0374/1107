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
	printf("�˰���� ���丮����?");
	scanf("%d",&num);
	
	printf("%d!�� ���� %d�Դϴ�\n",num,fact(num));
	//printf("%d!�� ���� %ld�Դϴ�\n",num,fact(num));
	
}

