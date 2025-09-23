#include <stdio.h>

int main() {
    int i,j,n,k=0;
    printf("put n=");
    
    scanf("%d",&n);
    for(i=n;i<=n && i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        if(i==n)
        {
            for(j=(n-1);j>=1;j--)
            {
                printf("%d",j);
            }
        }
        else
        {
            for(j=1;j<=2*k-1;j++)
            {
                printf(" ");
            }
            for(j=i;j>=1;j--)
            {
                printf("%d",j);
            }
        }
        printf("\n");
        k++;
    }

    return 0;
}