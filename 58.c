#include<stdio.h>
void main()
{
    int n,k,a[50],i,count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            count++;
        }
}
 if(count!=0)
 {
     printf("yes");
 }
  else
  {
      printf("no");
  }
}
