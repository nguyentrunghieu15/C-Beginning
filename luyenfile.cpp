#include <stdio.h>
#include <string.h>


typedef struct sv
{
	char hoten[50];
	char birth[20];
	char que[20];
}sv;

void nhapthongtin(sv bk[],int n);
int main()
{
	int n,a;
	printf("Nhap so luong sinh vien:");
	scanf("%d%*c", &n);
	sv bk[100];
	nhapthongtin(bk,n);
	for(a=0;a<n;a++)
	    {printf("%20s",bk[a].hoten);
        printf("%20s",bk[a].birth);
        printf("%20s\n",bk[a].que);
        }
	return 0;
}
void nhapthongtin(sv bk[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap ten sinh vien thu %d :",i+1);
		fgets(bk[i].hoten,50,stdin);
		printf("Nhap ngay sinh(dd/mm/yyyy) :");
		fgets(bk[i].birth,20,stdin);
		printf("Nhap que quan :");
		fgets(bk[i].que,20,stdin);
	}
}
