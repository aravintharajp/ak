#include<stdio.h>
void main()
{
    int n,a[n],i,min=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   min=a[0];
   for(i=1;i<n;i++)
   {
    if(min>a[i])
    {
        min=a[i];
    }
   }
    printf("%d",min);
}
