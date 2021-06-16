#include<stdio.h>
#include<conio.h>
#include<string.h>
#define x 100

void chuanhoaxau(char a[])
{
	int n,y=0,i;
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
	if(b[y-1]==' ')
	   b[y-1]='\0';
	strcpy(a,b);
}
int kiemtrasdt(const char c[])
{
	int n,i;
	n=strlen(c);
	if(n!=10)
	   return 0;
	if(c[0]=='0'&& c[1]=='0')
	   return 0;
	for(i=0;i<n;i++)
	   if(c[i]<'0' || c[i]>'9')
	     return 0;
	return(1);
    
}
void tachten(const char hoten[], char ten1[])
{
	int n,i,y=0;
	n=strlen(hoten);
	i=n-1;
	while(hoten[i]!=' ')
	    {
	       ten1[y]=hoten[i];
	       y++;
		   i--;
	    }
	ten1[y]='\0';
	strrev(ten1);
	strupr(ten1);
}
int main()
{
	char ht[x];
	char ten[x];
	char sdt[x];
	printf("Nhap ho va ten: ");
	gets(ht);
	chuanhoaxau(ht);
	tachten(ht,ten);
	do
	{
		printf("nhap sdt: ");
		gets(sdt);
		if(kiemtrasdt(sdt)==0)
		  printf("\nsdt khong hop le\n");
	}
	while(kiemtrasdt(sdt)==0);
	printf("Xin cam on ban %s ,SDT: %s cua ban da duoc them vao he thong", ten,sdt);
	return 0;
}
