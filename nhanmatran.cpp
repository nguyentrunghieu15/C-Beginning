#include<stdio.h>

int  main()
{
	printf("Phep nhan ma tran A.B\n");
	
	int m, n, i, j, p, q, t ;
    printf("Nhap so hang cua ma tran A:"); scanf("%d", &m);
    printf("Nhap so cot cua ma tran A:"); scanf("%d", &n);
	printf("Nhap so hang cua ma tran B:"); scanf("%d", &p);
    printf("Nhap so cot cua ma tran B:"); scanf("%d", &q);
    if(n!=p)
       printf("Loi.Khong the nhan 2 ma tran.\n");
    else
	{
		printf("NhapA =");
		float a[m][n];
	    for(i=0;i<m;i++)
	        {
	        	printf("\n      ");
	        	for(j=0;j<n;j++)
	                scanf("%f", &a[i][j]);
	        }
	    printf("\nNhap B=");
		float b[p][q];
	    for(i=0;i<p;i++)
             {
	        	printf("\n      ");
	        	for(j=0;j<q;j++)
	                scanf("%f", &b[i][j]);
	        }
        float AB[m][q];
        for(i=0;i<m;i++)
	        for(j=0;j<q;j++)
                {
                    AB[m][q]=0;
					for(t=0;t<n;t++)
                        AB[i][j]=AB[i][j]+a[i][t]*b[t][j];	
                }
        printf("\nAB=");
		for(i=0;i<m;i++)
	        {
	        	printf("\n");
				for(j=0;j<q;j++)
				    printf("%3.2f  ", AB[i][j]); 
	        }
			      
	}
    return 0;	
}

