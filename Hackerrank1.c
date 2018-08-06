#include<stdio.h>
int main()
{
    int n=0, i=0,k=0,j=0,a[200][200];
    scanf("%d",&n);
    k=(2*n)-1;
    for(i=0;i<=k/2;i++)
    {
        for(j=i;j<k-i;j++)
        {
            a[i][j]=n-i;
            a[j][i]=n-i;
            a[k-i-1][j]=n-i;
            a[j][k-i-1]=n-i;
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
