#include<bits/stdc++.h>
void tim_kiem_toan_bo(int a[],int n);
void tim_kiem_toan_bo_cai_tien(int a[],int n);
int de_quy(int a[],int dau,int cuoi);
int maxmidleft(int a[],int dau,int mid);
int maxmidright(int a[],int mid,int cuoi);
void quy_hoach_dong(int a[],int n);
void khoi_tao_gt_mang_n_phantu(int a[],int n);

int main()
{   
	for(int i=1;i<=4;i++)
	{
		int * array = new int[(int)pow(10,i*2)];
		khoi_tao_gt_mang_n_phantu(array,(int)pow(10,i*2));
		if(i==1)
		{
			 printf("Voi %d phan tu:\n",(int)pow(10,i*2));
			 clock_t start, end;   
             double time_use;
             start = clock();
             tim_kiem_toan_bo(array,(int)pow(10,i*2)); //1
             end = clock();
             time_use = (double)(end - start)/CLOCKS_PER_SEC;
             printf("Thoi gian tim kiem toan bo la: %lf\n",time_use);
             start = clock();
             tim_kiem_toan_bo_cai_tien(array,(int)pow(10,i*2)); //2
             end = clock();;
             time_use = (double)(end - start)/CLOCKS_PER_SEC;
             printf("Thoi gian tim kiem toan bo cai tien la: %lf\n",time_use);
             start = clock();
             de_quy(array,0,(int)pow(10,i*2)-1);// 3
             end = clock();
             time_use = (double)(end - start)/CLOCKS_PER_SEC;
             printf("Thoi gian de quy la: %lf\n",time_use);
             start = clock();
             quy_hoach_dong(array,(int)pow(10,i*2));//4
             end = clock();
             time_use = (double)(end - start)/CLOCKS_PER_SEC;
             printf("Thoi gian quy hoach dong la: %lf\n",time_use);
             
		}
		else
		{
			printf("Voi %d phan tu:\n",(int)pow(10,i*2));
			 clock_t start, end;   
             double time_use;
             start = clock();
             de_quy(array,0,(int)pow(10,i*2)-1);// 3
             end = clock();
             time_use = (double)(end - start)/CLOCKS_PER_SEC;
             printf("Thoi gian de quy la: %lf\n",time_use);
             start = clock();
             quy_hoach_dong(array,(int)pow(10,i*2));//4
             end = clock();
             time_use = (double)(end - start)/CLOCKS_PER_SEC;
             printf("Thoi gian quy hoach dong la: %lf\n",time_use);
		}
		delete (array);
	}	
	return 0;
}

void tim_kiem_toan_bo(int a[],int n)
{
	int maxsum=0,sum;
	for(int i=0;i<n;i++)
	   for(int j=i;j<n;j++)
	   {
	   	sum=0;
	   	for(int k=i;k<=j;k++)
	   	    sum+=a[k];
	   	maxsum=sum>maxsum?sum:maxsum;
	   }
//	printf("Khoi luong day con lon nhat la:%d\n",maxsum);
}
void tim_kiem_toan_bo_cai_tien(int a[],int n)
{
	int maxsum=0,sum;
	for(int i=0;i<n;i++)
	{
		sum=0;
	   for(int j=i;j<n;j++)
	   {
	   	   sum+=a[j];
	   	   maxsum=sum>maxsum?sum:maxsum;
	   }
   }
//	printf("Khoi luong day con lon nhat la:%d\n",maxsum);
}
int de_quy(int a[] ,int dau,int cuoi)
{
	if(dau==cuoi)
	   return a[dau];
	else
	  {
	  	  int mid=(cuoi+dau)/2; 
		  int ml= de_quy(a,dau,mid);
		  int mr= de_quy(a,mid+1,cuoi);
		  int mm = maxmidleft(a,dau,mid)+maxmidright(a,mid+1,cuoi);
		  return (mm>(ml>mr?ml:mr)?mm:(ml>mr?ml:mr));
	  }
}
int maxmidleft(int a[],int dau,int mid)
{
	int sum=0;
	int max=INT_MIN;
	for(int i=mid;i>=dau;i--)
	{
	    sum+=a[i];
		max=sum>max?sum:max;	
	}
	return max;
}
int maxmidright(int a[],int mid,int cuoi)
{
	int sum=0;
	int max=INT_MIN;
	for(int i=mid;i<=cuoi;i++)
	{
	    sum+=a[i];
		max=sum>max?sum:max;	
	}
	return max;
}
void quy_hoach_dong(int a[],int n)
{
	int ei=a[0];
	int si=a[0];
	for(int i=1;i<n;i++)
	{
		ei = a[i]>a[i]+ei?a[i]:a[i]+ei;
		si=  si>ei?si:ei;
	}
//	printf("Khoi luong day con lon nhat la:%d\n",si);
}
void khoi_tao_gt_mang_n_phantu(int a[],int n)
{
	srand((int)time(0));
    for(int i=0 ; i<n ;i++)
        a[i] = rand()*(rand()%2==0?1:-1);
}
