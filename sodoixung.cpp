#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define y 100

int check(char x[])
{
	int n,i;
	n=strlen(x);
	for(i=0;i<(n/2);i++)
	   if(x[i]!=x[n-1-i])
	    return 0;
	return 1;
}
int main()
{
	int n,i,k=0;
	scanf("%d", &n);
	if(n<=0 || n>=100)
	   printf("ERROR");
	else
	 {
	 	int x[n];
	 	char c[y];
	 	for(i=0;i<n;i++)
	 		scanf("%d", &x[i]);
	 	for(i=0;i<n;i++)
	 	   {
	 	   	if(x[i]/10==0 && x[i]>=0)
	 	      {
	 	      	printf("%d\n", x[i]);
	 	      	k=1;
	 	      }
	 	    if(x[i]>=10)
	 	       {
	 	       	  fflush(stdin);
				  itoa(x[i],c,10);
	 	       	  if(check(c)==1)
	 	       	  {
	 	       	  	printf("%d\n", x[i]);
	 	      	    k=1;
	 	       	  }
	 	       }
	 	   }
	 	if(k==0)
	 	  printf("ERROR");
	 	
	 }
	getch();
	return 0;
}
