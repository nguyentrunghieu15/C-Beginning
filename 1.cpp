#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
	int k;
	float a,b,c,d;
	printf("chon dang phuong trinh\n");
	printf("1. Phuong trinh bac Nhat bx+c=0\n");
	printf("2. Phuong trinh bac hai ax^2+bx+c=0\n");
	printf(" Bam so 1 hoac 2 tuong ung:");
	scanf("%d", &k);
	while(k=!1)
	    {
	    	printf("/nChi duoc chon 1 hoac 2");
	    	scanf("%d", &k);
	    }
	switch(k)
	   {
	   	case 1: {
	   		printf("Ham bx+c=0\nNhap b c");
	   		scanf("%f%f",&b,&c);
	   		while(b==0)
	   		{
	   			printf("b phai khac 0. Nhap lai/n");
	   			scanf("%f%f",&b,&c);
	   		}
	   		printf("Phuong trinh co nghiem la x= %.2f",-c/b);
	   		break;
	        	}
	    case 2: {
	    	printf("Ham ax^2+bx+c=\nNhap a b c/n");
			scanf("%f%f%f",&a,&b,&c);
			while(a==0)
	   		   {
	   			printf("a phai khac 0. Nhap lai/n");
	   			scanf("%f%f%f",&a,&b,&c);
	            }
	          d= pow(b,2)-4*a*c;
			  if(d>0)
			     printf("Phuong trinh co hai nghiem phan biet la %f va %f",(-b-sqrt(d))/(2*a),(-b+sqrt(d))/(2*a));
			  if(d==0)
			     printf("Phuong trinh co nghiem kep laf %f",-b/(2*a));
			  if(d<0)
			     printf("Phuong trinh vo nghiem");
	           }
	}
	getch();
	 return(0);
	
}
	 
	 
