#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SINHVIEN
{
  char hoten[51];
  int shsv;
  char dienthoai[15];
  char noiohientai;	//0 la o tinh khac, 1 la o HN
}
SV;

void nhapThongtin (SV * ds, int *size)	//ds[]
{
  int n;			// bien cuc bo cua ham nhapThongtin
  printf ("Nhap vao so luong sinh vien: ");
  scanf ("%d", &n);
  while (n <= 0 || n > 300)
    {
      printf ("Xin hay nhap gia tri hop le: ");
      scanf ("%d", &n);
    }

  printf ("NHap vao thong tin tung sinh vien:\n");
  for (int i = 0; i < n; i++)
    {
      printf ("Nhap thong tin sinh vien thu %d:\n", i + 1);
      printf ("Ho ten: ");
      fflush (stdin);
      gets (ds[i].hoten);
      printf ("SHSV: ");
      scanf ("%d", &ds[i].shsv);
      printf ("SDT: ");
      fflush (stdin);
      gets (ds[i].dienthoai);
      printf ("Noi o hien tai (0: Tinh Khac, 1: o HN): ");
      scanf ("%d", &ds[i].noiohientai);
    }
  *size = n;
}

// in ra danh sach sinh vien hien tai
void inDanhSachHienTai (const SV * ds, int size)
{
  printf ("Danh sach hien tai co %d thanh vien\n", size);
  printf ("Thong tin cu the la:\n");
  for (int i = 0; i < size; i++)
    {
      printf ("%20s\t%10d\t%15s\t", ds[i].hoten, ds[i].shsv, ds[i].dienthoai);
      if (ds[i].noiohientai =='0')
	printf ("Tinh Khac\n");
	else
	printf ("HN\n");
    }
  printf ("\n");
}
void sapxep(SV ds[], int n)
{
	SV b;
	int i,j;
	for(i=1;i<n;i++)
	   {
	   	 j=i;
	   	 while(j>0 && ds[j-1].shsv>ds[j].shsv)
	   	      {
	   	      	b=ds[j];
	   	      	ds[j]=ds[j-1];
	   	      	ds[j-1]=b;
	   	      	j--;
	   	      }
	   }
}
void thongke(const SV ds[], int n)
{
	int a=0;
	for(int i=0; i<n;i++)
	   if(ds[i].noiohientai== 0)
	     a++;
	printf("Phan tram sinh vien o tinh khac la %.2f %%\n", 100*float(a)/n);
	 
	printf("Phan tram sinh vien o Ha Noi la %.2f %%", 100-100*float(a)/n);
}
int main ()
{
  SV ds[300];
  int n;			// so luong sinh vien thuc su trong danh sach

  nhapThongtin (ds, &n);
  sapxep(ds, n);
  inDanhSachHienTai (ds, n);
  thongke(ds,n);
  return 0;
}

