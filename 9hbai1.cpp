#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if(n>=2 && n<=10)
	   {
	   	int x[n];
	   	int i,t;
	   	for(i=0;i<n;i++)
	   	   scanf("%d", &x[i]);
	   	t=x[0]*x[1];
	   	for(i=1;i<n-1;i++)
	   	    if(t<x[i]*x[i+1])
	   	        t=x[i]*x[i+1];
	   	printf("%d",t);
	   }
	else
	   printf("0");
	return 0;
}
