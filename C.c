#include<stdio.h>
int main()
{
    int i,j,m;
    k:
    scanf("%d",&m);
    if(m!=0)
    {
     for(i=1;i<=m;i++)
    {
        if(i==m){
            printf("%d",i);
        }else{
            printf("%d ",i);
        }
    }
    printf("\n");
    }
    else
    {
        goto p;
    }
     goto k;
     p:
    return 0;
}
