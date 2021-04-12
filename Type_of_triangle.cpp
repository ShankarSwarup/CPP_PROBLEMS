#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	int ab=sqrt(((x2-x1)*(x2-x1))+(y2-y1)*(y2-y1));
	int bc=sqrt(((x3-x2)*(x3-x2))+(y3-y2)*(y3-y2));
	int ac=sqrt(((x3-x1)*(x3-x1))+(y3-y1)*(y3-y1));
	if(ab==bc&&bc==ac&&ab==ac)
	{
		printf("equilateral");
	}
else if((ab*ab)+(bc*bc)==(ac*ac)||(ac*ac)+(bc*bc)==(ab*ab)||(ab*ab)+(ac*ac)==(bc*bc))
	{
      printf("right angled");
	}
	else if(ab!=bc&&bc!=ac&&ab!=ac)
	{
		printf("scalene");
	}
	else
	{
		printf("straight line");
	}
}
