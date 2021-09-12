#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
char tai_khoan[21], mat_khau[13] ,t[30];
int k=0;
void timkiemtentk(char s[])// tim kiem ten account co trong file hay khong co thi k=1 khong thi =0
{
	FILE *fp;
	fp = fopen("C:\\Users\\Admin\\Documents\\thongtinnguoichoi.txt","rt");
	if(fp!= NULL)
	do
	{
		fscanf(fp,"%s",tai_khoan);
		if(strcmp(tai_khoan,s)==0)
		   {
		   	fscanf(fp,"%s",mat_khau);
		   	k=1;
		   	break;
		   	
		   }
		else
		    fgets(t,30,fp);
	}
	while(feof(fp)==0);
	
}
void Dang_ki() //dang ki tai khoan game
{
	int i=1;
	FILE *fp;
	char name_account[21], pass[13];
	do
	{
		k=0;
		printf("\rNhap ten tai khoan:");
		fflush(stdin);
		gets(name_account);
		timkiemtentk(name_account);
		if(strlen(name_account)>20)
		   {
		       printf("Khong duoc qua 20 ki tu ");
	           getch();
		}
		if(k==1)
		   	{
			   printf("Tai khoan da ton tai");
		        getch();
		    }
		if(strlen(name_account)==0)
		    {
			  printf("Khong duoc de trong");
			  getch();
		}
		
	}
	while(strlen(name_account)>20||k==1||strlen(name_account)==0);
	if(i==1)
	{
	do
	{
		printf("\rNhap pass:");
		fflush(stdin);
		gets(pass);
		if(strlen(pass)>12)
		   printf("Khong duoc qua 12 ki tu");
	}
	while(strlen(pass)>12);
	fp=fopen("C:\\Users\\Admin\\Documents\\thongtinnguoichoi.txt","at"); 
	 // ghi lai tai khoan do vao file thongtinnguoichoi.txt
	 if(strcmp(pass,"")!=0)
	    fprintf(fp,"%-20s       %-12s\n",name_account,pass);
	fclose(fp);
	system("cls");
	}
	
}
void Dang_nhap()
{
	char s[21];
	do{
		printf("\rNhap ten tai khoan:");
		fflush(stdin);
		gets(s);
		timkiemtentk(s);
		if(k==0)
		  {
		   printf("Tai khoan khong ton tai\n");
		   getch();
	      }
	}
	while(k==0);
	do
	{
		strcpy(s,"");
		printf("Nhap mat khau:");
		fflush(stdin);
		gets(s);
		if(strcmp(s,mat_khau)!=0)
		   printf("Mat khau khong chinh xac\n");
		getch();
		system("cls");
	}
	while(strcmp(s,mat_khau)!=0);

}
void login()
{
	printf("%-20s %20s\n","1.Dang ki","2.Dang Nhap");
    int n;
    scanf("%d",&n);
    switch(n)
    {
    	case 1: {
                     Dang_ki();
                     system("cls");
                     return(login());
		        }
    	case 2: {
    		Dang_nhap();
    		printf("chao mung ban den voi the gioi game cua Hieu, hien tai minh van chua code game nao");
			break;
		}
			
	}
}
int main()
{
    login();
	return 0;
}
