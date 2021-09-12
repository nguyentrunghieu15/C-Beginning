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
<<<<<<< HEAD
	int i;
	for(i=0;i<n;i++)
=======
	for(int i=0;i<n;i++)
>>>>>>> 0512d900789e90ea99f81e6a9de3e0b46d532023
	{
		printf("Nhap ten sinh vien thu %d :",i+1);
		fgets(bk[i].hoten,50,stdin);
		printf("Nhap ngay sinh(dd/mm/yyyy) :");
		fgets(bk[i].birth,20,stdin);
		printf("Nhap que quan :");
		fgets(bk[i].que,20,stdin);
	}
}
<<<<<<< HEAD

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
=======
>>>>>>> 0512d900789e90ea99f81e6a9de3e0b46d532023
