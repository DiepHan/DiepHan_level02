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
        float xA,xB,xC,yA,yB,yC,a,b,c;
        printf("Nhap cac canh A,B,C:");
        scanf("%f%f%f%f%f%f",&xA,&yA,&xB,&yB,&xC,&yC);
        a=(sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA)));
        b=(sqrt((xC-xA)*(xC-xA)+(yC-yA)*(yC-yA)));
        c=(sqrt((xB-xC)*(xB-xC)+(yB-yC)*(yB-yC)));
        if((a+b<=c)||(b+c<=a)||(a+c<=b))
        printf("NHAP SAI");
        else{
        printf("Chu vi tam giac la:%0.2f\n",a+b+c);
        printf("Dien tich tam giac la:%0.2f",((sqrt)((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4));}
        break;
        }
    case 2:
        {
        float xA,yA,xB,yB,a;
        printf("Nhap canh toa do AB:");
        scanf("%f%f%f%f",&xA,&yA,&xB,&yB);
        a=(sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA)));
        printf("Chu vi hinh vuong la:%0.2f\n",4*a);
        printf("Dien tich hinh vuong la:%0.2f",a*a);
        break;
        }
    case 3:
        {
        float xA,xB,xC,yA,yB,yC,a,b,c;
        printf("Nhap toa do A B C:");
        scanf("%f%f%f%f%f%f",&xA,&yA,&xB,&yB,&xC,&yC);
        a=sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA));
        b=sqrt((xC-xA)*(xC-xA)+(yC-yA)*(yC-yA));
        c=sqrt((xB-xC)*(xB-xC)+(yB-yC)*(yB-yC));
        printf("Chu vi hinh chu nhat la:%0.2f\n",(a+b)*2);
        printf("Dien tich hinh chu nhat la:%0.2f",a*b);
        break;
        }
    case 4:
        {
        float xR,xM,yR,yM,banKinh;
        printf("Nhap toa do tam va M:");
        scanf("%f%f%f%f",&xR,&yR,&xM,&yM);
        banKinh=sqrt((xM-xR)*(xM-xR)+(yM-yR)*(yM-yR));
        printf("Chu vi hinh tron:%0.2f\n",2*3.14*banKinh);
        printf("Dien tich hinh tron:%0.2f",3.14*3.14*banKinh);
        break;
}
}

}


