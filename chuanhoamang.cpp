#include<stdio.h>
#include<string.h>
#define x 1000

int main()
{
	int i,n,y=0;
	char a[x];
	gets(a);
	n=strlen(a);
	char b[n];
	for(i=0;i<n;i++)
	    {
	    	if(a[i]!=' '&&a[i+1]!=' ')
	    	   {
	    	   	b[y]=a[i];
	    	   	y++;
	    	   }
	    	if(a[i]!=' '&&a[i+1]==' ')
	    	   {
	    	   	b[y]=a[i];
	    	   	b[y+1]=a[i+1];
	    	   	y=y+2;
	    	   }
	    }
	if(b[y-1]==' ')
	   	b[y-1]=NULL;
	strupr(b);
	puts(b);
	printf("%d", strlen(b));
	return 0;	
}

