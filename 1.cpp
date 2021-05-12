#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	char k;
	float a,b,c,d;
	printf("chon dang phuong trinh\n");
	printf("1. Phuong trinh bac Nhat bx+c=0\n");
	printf("2. Phuong trinh bac hai ax^2+bx+c=0\n");
	printf(" Bam so 1 hoac 2 tuong ung:\n");
     while (1>0)
	   {
		  printf("\n");
		  scanf("%s", &k);
		  if(k=='1')
		     break;
		  if(k=='2')
		     break;
		   else(printf("Chi duoc chon 1 hoac 2. Xin hay nhap lai \n")) ;// vong lap de k chi nhan hai gia tri 1 hoac 2//
	  }
    // do
	// {
	// 	printf("Chi duoc nhap 1 hoac 2");
	// 	scanf("%d", &k);
		
	// }
	// while((k=!1)&&(k=!2))
	// ;
	switch(k)
	   {
	   	case '1': {
	   		printf("Ham bx+c=0\nNhap b c\n");
	   		scanf("%f%f",&b,&c);
	   		while(b==0)
	   		{
	   			printf("b phai khac 0. Nhap lai\n");
	   			scanf("%f%f",&b,&c);
	   		}
			   // chi nhan dieu kien ham bac nhat voi he so cua x khac 0//
	   		printf("Phuong trinh co nghiem la x= %.2f",-c/b);
	   		break;
	        	}
				//case 1 Giai phuong trinh bac nhat//
	    case '2': {
	    	printf("Ham ax^2+bx+c=\nNhap a b c\n");
			scanf("%f%f%f",&a,&b,&c);
			while(a==0)
	   		   {
	   			printf("a phai khac 0. Nhap lai\n");
	   			scanf("%f%f%f",&a,&b,&c);
	            }
				//chi nhan dieu kien ham bac hai voi he so x^2 khac 0//
	          d= pow(b,2)-4*a*c;
			  if(d>0)
			     printf("Phuong trinh co hai nghiem phan biet la %f va %f",(float)((-b-sqrtf(d))/(2*a)),(-b+sqrtf(d))/(2*a));
			  if(d==0)
			     printf("Phuong trinh co nghiem kep laf %f",-b/(2*a));
			  if(d<0)
			     printf("Phuong trinh vo nghiem");
	           }
			   //case 2 Giai phuong trinh bac hai//
	}
	 return(0);
	
}
	 
	 
