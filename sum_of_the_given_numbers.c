#include<stdio.h>
int main()
{
    int i,n,arr1,arr2,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr1,&arr2);
        s=arr1+arr2;
        printf("%d
",s);
    }
    return 0;
}