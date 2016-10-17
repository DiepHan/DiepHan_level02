#include<stdio.h>
#include<math.h>
void main()
{
    float a;
    int k;
    printf("Nhap so bat ki:");
    scanf("%f",&a);
    k=(int)sqrt(a);
    if(sqrt(a)!=k) printf("KHONG PHAI SO CHINH PHUONG");
    else printf("SO CHINH PHUONG");


}
