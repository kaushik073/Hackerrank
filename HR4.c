#include<stdio.h>
int main()
{
    int n,d,i,c[1000],a[1000],b[1000];
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<d;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n-d;i++)
    {
        c[i]=a[i+d];
    }
    for(i=0;i<d;i++)
    {
        c[n-d+i]=b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}
