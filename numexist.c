#include<stdio.h>
void fab_position(int num)
{
	int a=0,b=1,c,d,e;
	if(num==0 || num==1)
	{
		printf("true");
		return;
	}
	while(c<=num)
	{
		c=a+b;
		a=b;
		e=b;
		b=c;
		if(c==num)
		{
			printf("true");
			return;
		}
		else
		{
			d=c;
		}
    }
    if((num-e)>(d-num))
    {
    	printf("%d",d);
	}
	else if((num-e)<(d-num))
	{
		printf("%d",e);
	}
    else
    {
    	printf("%d %d ",e,d);
	}
	
}
int main()
{
	int num;
	scanf("%d",&num);
	fab_position(num);
	return 0;
}
