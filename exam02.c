#include<stdio.h>
int max(int x,int y)
{
	if(x>y)
	  return x;
	else
	  return y;
}
int main()
{
	int x,y;
	
	printf("�����Է�");
	scanf("%d%d",&x,&y);
	
	printf("��ū���� %d�Դϴ�.",max(x,y));
	return 0;
}
