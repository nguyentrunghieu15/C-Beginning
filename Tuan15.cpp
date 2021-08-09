#include<stdio.h>
int songuoibiloai(float x[], int n, int a[])
{
	int i=0,j=0,sobiloai=0;
	
	float t;
	for(i=0;i<n-1;i++)
	    {
	    	t=t+x[i];
	    	if(t<2)
	    	  {
	    	  	a[sobiloai]=i+2;
	    	  	sobiloai++;
	    	  }
	    	else
	    	   t=0;
	    }

//     while(i<n-1)                             // (day la cach lam dai chua toi uu)
//        {
//        	t=0;j=0;
//        	while(t<2 && i<n-1)
//        	     {
//        	     	t=t+x[i];
//        	     	j++;
//        	     	i++;
//        	     }
//        	if(t<2)
//        	   sobiloai=+j;
//        	if(t>=2 && j!=1)
//        	   sobiloai=+(j-1);
//        }
   j=sobiloai-1;
   if(n-sobiloai>20)
   {
      t=n-20;
	  if(sobiloai==0)
          for(i=n;i>=1;i--)
              {
              	if(sobiloai==t)
              	    break;
				a[sobiloai]=i;
              	sobiloai++;
              }
       if(sobiloai>0)
          for(i=n;i>=1;i--)
        {
          if(sobiloai==t)
             break; 
		  if(a[j]==i)
             j--;
          else
             {
             	a[sobiloai]=i;
             	 sobiloai++;
             }
       }
         
   }
   return(sobiloai);
}
int main()
{
	int n,i,loai;
	printf("Nhap so nguoi: ");
	scanf("%d", &n);
	float x[n-1];
	int a[n-1];
	printf("Nhap lan luot khoang canh giua 2 nguoi lien tiep: ");
	for(i=0;i<n-1;i++)
	   scanf("%f", &x[i]);
	loai=songuoibiloai(x,n,a);
	printf("can loai %d nguoi\n", loai);
	printf("can loai nguoi :");
	for(i=0;i<loai;i++)
	    printf("thu %d ", a[i]);
	return 0;	
}

