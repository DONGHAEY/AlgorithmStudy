#include <stdio.h>
int main()
{
 int a[5][5]={0};
 int i,j,cnt=0;
 for(i=0; i<5; i++) 
 {
  for(j=0; j<=i; j++)
  {
   cnt++;
   a[j][i-j]=cnt;
  }
 }
 for(i=1; i<5; i++)
 {
  for(j=i; j<5; j++)
  {
   cnt++;
   a[j][i-j+5-1]=cnt;
  }
 }
 for(i=0; i<5; i++)
 {
  for(j=0; j<5; j++)
  {
   if(a[i] [j]==0)
   {
    printf("   ");
   }
   else
   {
    printf("%3d",a[i] [j]);
   }
  }
  printf("\n");
 }
}
