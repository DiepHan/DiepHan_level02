#include<stdio.h>
void main()
{
    float a;
    int k;
    printf("Nhap 1 so bat ki:");
    scanf("%f",&a);
    k=(int)a;
    if(a-k!=0.5) printf("KHONG PHAI SO BAN NGUYEN");
    else printf("SO BAN NGUYEN");

}
