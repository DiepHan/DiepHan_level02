#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Nhap 1 tinh chu vi dien tich tam giac\nNhap 2 tinh chu vi dien tich hinh vuong\nNhap 3 tinh chu vi dien tich hinh chu nhat\nNhap 4 tinh chu vi dien tich hinh tron\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
        float a,b,c;
        printf("Nhap cac canh a,b,c:");
        scanf("%f%f%f",&a,&b,&c);
        if((a+b<=c)||(b+c<=a)||(a+c<=b))
        printf("NHAP SAI");
        else{
        printf("Chu vi tam giac la:%0.2f\n",a+b+c);
        printf("Dien tich tam giac la:%0.2f",((sqrt)((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4));}
        }
    case 2:
        {
        float a;
        printf("Nhap canh hinh vuong:");
        scanf("%f",&a);
        printf("Chu vi hinh vuong la:%0.2f\n",4*a);
        printf("Dien tich hinh vuong la:%0.2f",a*a);
        }
    case 3:
        {
        float a,b;
        printf("Nhap canh a,b:");
        scanf("%f%f",&a,&b);
        printf("Chu vi hinh chu nhat la:%0.2f\n",(a+b)*2);
        printf("Dien tich hinh chu nhat la:%0.2f",a*b);
        }
    case 4:
        {
        float r;
        printf("Nhap ban kinh hinh tron:");
        scanf("%f",&r);
        printf("Chu vi hinh tron:%0.2f\n",2*3.14*r);
        printf("Dien tich hinh tron:%0.2f",3.14*3.14*r);
}
}

}

