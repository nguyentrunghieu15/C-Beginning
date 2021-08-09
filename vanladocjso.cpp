#include<stdio.h>
#include<string.h>
char s[100];
int t=0;
void doiso(char x)
{
	switch(x)
	{
		case '1': printf("mot ");break;
		case '2': printf("hai ");break;
		case '3': printf("ba ");break;
		case '4': printf("bon ");break;
		case '5': printf("nam ");break;
		case '6': printf("sau ");break;
		case '7': printf("bay ");break;
		case '8': printf("tam ");break;
		case '9': printf("chin ");break;
	}
}
int check()
{
	int n;
	n=strlen(s);
	for(int i=0;i<n;i++)
	    {
	    	if(s[i]<'0'||s[i]>'9')
	    	   return(0); // 0 ko la so
	    }
	return(1);//1 la so

}
void doc3so(char x[])
{
	int n=strlen(x);
	if(n==1)
	  doiso(x[0]);
	if(n==2)
	{  
	   	if(x[0]=='1')
	   	   printf("muoi ");
	    else
	       {
		      doiso(x[0]);
		      printf("muoi ");
		   }
     	if(x[1]=='5')
     	  	   printf("lam ");
     	else
     	  	   doiso(x[1]);
      }
     if(n==3)
	    {
	    doiso(x[0]);
	    if(x[0]!='0')
		    printf("tram ");
	    if(x[1]=='0' && x[2]!='0'&& x[0]!='0')
	        printf("linh ");
	    if(x[1]=='1')
	   	   printf("muoi ");
	    else
		      if(x[1]!='0')
			      {
			      	doiso(x[1]);
			      	printf("muoi ");
			      }
     	if(x[2]=='5')
     	  	   printf("lam ");
     	else
     	  	   doiso(x[2]);
	    }
}
void chuanhoa()
{
	int n,j,i;
	n=strlen(s);
	for(i=0;i<n;i++)
	    {
	    	if(s[i]!='0')
	    	   {
	    	   	t=1;
	    	   	char a[n-i];
	    	   	int c=0;
	    	   	for(j=i;j<n;j++)
	    	   	    {
	    	   	    	a[c]=s[j];
	    	   	    	c++;
	    	   	    }
	    	   	a[c]='\0';
	    	   	strcpy(s,a);
	    	   	break;
	    	   }
	    }
}
int main()
{
	printf("Nhap so tien ban can doc:");
	do{
		gets(s);
		if(check()==0)
		    printf("\nNhap lai:");
	}
	while(check()==0);
	chuanhoa();
	if(t==0)
	   printf("Khong VND");
	else
	{
	int n=strlen(s);
	char a[n/3+1][4];
	if(n%3==0)
	  {
	  	int j=0;
		for(int i=0;i<n/3;i++)
	  	   {
	  	       t=0 ;
				for(;j<n;j++)
	  	       {
	  	           if(t==3)
	  	       	      break;
			       a[i][t]=s[j];
	  	       	   t++;

	  	       }
	  	       a[i][t]='\0';
	       }
	    n=n/3;
      }
      else
      {
      	for(int i=0;i<n%3;i++)
      	    a[0][i]=s[i];
		int j=n%3;
		for(int i=1;i<n/3+1;i++)
	  	   {
	  	       t=0 ;
				for(;j<n;j++)
	  	       {
	  	           if(t==3)
	  	       	      break;
			       a[i][t]=s[j];
	  	       	   t++;

	  	       }
	  	       a[i][t]='\0';
	       }
	    n=n/3+1;
      }
      t=n;
      	for(int i=0;i<n;i++)
	      {
	      	doc3so(a[i]);
	      	if(t!=1 && strcmp(a[i],"000")!=0)
	      	   {
	      	   	switch(t%3)
	      	   	   {
	      	   	   	case 1:printf("ty ");break;
	      	   	   	case 0:printf("trieu ");break;
	      	   	   	case 2:printf("nghin ");break;
	      	   	   }
	      	   }
	      	   if(t!=n && t!=1 && t%3==1&& strcmp(a[i],"000")==0)
	      	      printf("ty ");
	      	   t--;
	      }

         printf("VND");
    } 
}

