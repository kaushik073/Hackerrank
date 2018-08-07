#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int a,i,j,sum=0,b[15];
    scanf("%s",s);
    a=strlen(s);
    for(i=0;i<10;i++)
    {
        for(j=0;j<a;j++)
        {
            if((s[j]-'0')==i)
            {
                sum=sum+1;
            }
        }
        b[i]=sum;
        sum=0;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
}
