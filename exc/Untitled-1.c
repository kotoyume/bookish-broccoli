#include <stdio.h> 
int main()
{                 
    int i,j=0,k=0,m,n;
    scanf("%d %d",&m,&n);
    int a[m+1];
    for(i=1;i<=m;i++)
       a[i]=i;
    i=1;
    do
    {
       if(a[i]!=0)
       j=j+1;
       if (j == n)
       {
            a[i]=0;
            j=0;
            k=k+1;
       }
       
       if(i==m)i=0;
       i=i+1;
    }while(k<m-1);
    for(i=1;i<=m;i++)
    if(a[i]!=0)
    printf("%d",a[i]);
    return 0;
}