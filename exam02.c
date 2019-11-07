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
	
	printf("정수입력");
	scanf("%d%d",&x,&y);
	
	printf("더큰값은 %d입니다.",max(x,y));
	return 0;
}
