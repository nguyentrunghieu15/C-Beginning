#include  <stdio.h>
//#include<time.h>
#define max 20
int k,check=0,x[100],n,s[100];
void Xuatnghiem()  {
    int t=0;
    for (int i = 1; i <= k; i++)
         t+=s[x[i]];
	if(t==1000)
	   {
	   	for (int i = 1; i <= k; i++)
        printf ("%d ",s[x[i]]);
        printf ("\n");
        check=1;
	   }
}
void ToHop (int i)  {
    for (int j = x[i-1] + 1; j <= n-k+i; j++)  {
        x[i] = j;
        if (i == k)
            Xuatnghiem();
        else
            ToHop(i+1);
    }
}
void sapxep(int a[],int &n)
{
      int i,j,t;
	  for(i=1;i<n;i++)
	     {
	     	j=i;
	     	while(j>0 && a[j-1]>a[j])
	     	      {
	     	      	t=a[j];
	     	      	a[j]=a[j-1];
	     	      	a[j-1]=t;
	     	      	j--;
	     	      }
	     }	
	  for(i=1;i<n;i++)
	      if(a[i]>999)
	          n=i;
}
int main()  {
//	clock_t start, end; 
//    double time_use;
//	start = clock();
	int i,t=0;
	printf("Nhap so phan tu cua mang:");
	scanf("%d", &n);
	s[0]=0;
	for(i=1;i<=n;i++)
	     scanf("%d", &s[i]);
	sapxep(s,n);
	for(i=1;i<=n;i++)
	   {
	       if(t<1000)
	          t=t+s[i];
	       if(t==1000)
	         { 
			 	t=i;
				 for (int i = 1; i <= t; i++)
                     printf ("%d ",s[i]);
                printf("\n");
                t--;
                check=1;
                break;
            }
            if(t>1000)
              {
              	t=i-1;
              	break;
              }

}
 	for(i=2;i<=t;i++)
	    {
	    	k=i;
	    	ToHop(1);
	    }
	if(check==0)
	   printf("Khong tim duoc to hop nao\n");
//	end = clock();
//	time_use = (double)(end - start) / CLOCKS_PER_SEC;
//	printf("Thoi gian chay code:", time_use);
    return 0;  
}
