#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sv
{
	char hoten[20];
	char birth[20];
	char que[20];
}sv;
void nhapthongtin(sv bk[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap ten sinh vien thu %d :",i+1);
		fflush(stdin);
		gets(bk[i].hoten);
		printf("Nhap ngay sinh(dd/mm/yyyy) :");
		fflush(stdin);
		gets(bk[i].birth);
		printf("Nhap que quan :");
		fflush(stdin);
		gets(bk[i].que);
	}
}

int main()
{
	int n,i;
	printf("Nhap so luong sinh vien:");
	scanf("%d", &n);
	sv bk[n];
	nhapthongtin(bk,n);
	FILE * sinhvien;
	sinhvien= fopen("C:\\Users\\Admin\\Documents\\t.txt","wt");
	if(sinhvien==NULL)
	   printf("ERROR");
	else
	  for(i=0;i<n;i++)
	     fprintf(sinhvien,"%-20s %20s %20s\n",bk[i].hoten,bk[i].birth,bk[i].que);
	
	fclose(sinhvien);
	return 0;
}
