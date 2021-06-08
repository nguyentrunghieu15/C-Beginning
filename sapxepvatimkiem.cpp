#include<stdio.h>

void doicho(int*x,int *y)
{
	int t;
	t=*y;
	*y=*x;
	*x=t;
}
int main()
{
	int n ,i , j, k;
	printf("Nhap so luong chuoi so:");
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++)               //Nhap mang
	   scanf("%d", &a[i]);
	for(i=1;i<n;i++)            //thuat toan sap xep
	   {
	   	j=i;
	   	while(j>0&&a[j-1]>a[j])
	   	{
	   		doicho(&a[j-1],&a[j]);
	   		j--;
	   	}
	   }
	   for(i=0;i<n;i++)               
	   printf("%d ", a[i]);
     // thuat toan tim kiem nhi phan
   
     printf("\nNhap so can tim:");
     scanf("%d", &k);
     if(k==a[0]||k==a[n-1])
        printf("Tim duoc");
     else
    {
    	i=n-1;
    	j=0;
     while(1>0)
          {
             if((i-j)==1)
			   {
			   	printf("Khong tim duoc");break;
			   }
			 if(k==a[(i+j)/2])
			    {
			    	printf("Tim duoc");break;
			    }
		      if(k<a[(i+j)/2])
		         	i=(i+j)/2;
		      if(k>a[(i+j)/2])
		             j=(i+j)/2;
          }
 }
     
     
}
