#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
void in_anh();
int main()
{
	in_anh();
	return 0;
}
void in_anh()
{
	FILE *fp;
	char c[151];
	char a;
    int i=0;
    system("cls");
    system("color F0");
    fp=fopen("C:\\bimat\\source\\chu.txt","r");// duong dan file text anh
	while((a=fgetc(fp))!=EOF)
	   {
                c[i]=a;
                i++;
                if(i==149)
                {
		           c[i]='\0';
				   printf("%s",c);
			       i=0;
			       Sleep(150);
			   }
	   };
	fclose(fp);

}
