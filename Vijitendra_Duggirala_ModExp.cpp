#include<stdio.h>

int me ( int x , int y , int p)
{
	int res =1;
	x=x%p;
	
	while(y>0)
	{
		if(y%2!=0)
			res = (res*x)%p ;
		y=y/2;
		x=(x*x)%p;
	}
	return res;
}


void main()
{
	int x , y, p;
	scanf("%d%d%d", &x,&y, &p);
	printf("%d" , me(x, y, p));
}
