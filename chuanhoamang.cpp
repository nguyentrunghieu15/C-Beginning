#include<stdio.h>
#include<string.h>
#define x 1000
void chuyenthanhchuhoa(char a[], int l)
{
    for(int i=0;i<l;i++)
       {
           switch(a[i])
               {
                   case 'a':a[i]='A';break;
                   case 'b':a[i]='B';break;
                   case 'c':a[i]='C';break;
                   case 'd':a[i]='D';break;
                   case 'e':a[i]='E';break;
                   case 'f':a[i]='F';break;
                   case 'g':a[i]='G';break;
                   case 'h':a[i]='H';break;
                   case 'i':a[i]='I';break;
                   case 'k':a[i]='K';break;
                   case 'j':a[i]='J';break;
                   case 'm':a[i]='M';break;
                   case 'n':a[i]='N';break;
                   case 'l':a[i]='L';break;
                   case 'u':a[i]='U';break;
                   case 'y':a[i]='Y';break;
                   case 'o':a[i]='O';break;
                   case 'p':a[i]='P';break;
                   case 'q':a[i]='Q';break;
                   case 'v':a[i]='V';break;
                   case 'w':a[i]='W';break;
                   case 'r':a[i]='R';break;
                   case 't':a[i]='T';break;
                   case 'z':a[i]='Z';break;
                   case 'x':a[i]='X';break;
                   case 's':a[i]='S';break;
               }
       }
}
int main()
{
	int i,n,y=0,l;
	char a[x];
    gets(a);
    n=strlen(a);
	char b[n+1];
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
	b[y]='\0';
	if(b[y-1]==' ')
	   		b[y-1]='\0';
// 	strupr(b);
    l=strlen(b);
    chuyenthanhchuhoa(b,l);
	puts(b);
	printf("%d",l);
	return 0;	
}
