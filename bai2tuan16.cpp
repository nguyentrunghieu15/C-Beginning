#include<stdio.h>
#include<string.h>
void chuanhoaxau(char a[50])
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
	strupr(b);
	strcpy(a,b);
}
void nhapdiadiem(char a[100][50], int &x)
{
	int i=-1;
//	do
//	{
		i++;
		fflush(stdin);
		gets(a[i]);
		chuanhoaxau(a[i]);
//	}
//	while(strcmp(a[i],"END")!=0);
	x =i;
}
int kiemtrayte(const char a[100][50], int x, const char b[100][50], int y)
{
	int i,j;
	for(i=0;i<x;i++)
	   for(j=0;j<y;j++)
	       if(strcmp(a[i],b[j])==0)
	          {
	          	   printf("Ban da di qua %s\n", a[i]);
				   return(1);
	          }
	return(0);
}
int main()
{
	char dsdiadiem[100][50], dsdiadiemyte[100][50];
	int n1,n2,i;
	printf("Nhap danh sach can khai bao y te(go END de dung nhap):\n");nhapdiadiem(dsdiadiemyte, n2);puts(dsdiadiem[0]);
//    printf("Nhap noi ban da di(go END de dung nhap):\n");nhapdiadiem(dsdiadiem, n1);
//	i=kiemtrayte(dsdiadiem,n1,dsdiadiemyte,n2);
//    if(i==1)
//       printf("Ban can khai bao y te");
//    else
//       printf("Ban khong can khai bao y te");
    return 0;
}
