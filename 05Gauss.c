#include<stdio.h>
void main()
{
   float a[20][20];int n,i,j,k,doiCho;
    printf("Nhap so an cua he:");
    scanf("%d",&n);
    printf("Nhap cac phan tu:");
    for(i=1;i<=n;i++)
        for(j=1;j<=n+1;j++)
        scanf("%f",&a[i][j]);
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=n+1;j++)
            printf("%0.2f\t",a[i][j]);
            printf("\n");
        }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
            if (a[1][1]==0)
        {
            doiCho=a[1][1];
            a[1][1]=a[i][1];
            a[i][1]=doiCho;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            for(k=1;k<=n;k++)
            {
                a[k][j]=a[k][j]-a[i][j]*a[k][j]/a[i][i];
            }
        }
    }


}
