#include<stdio.h>
#include<math.h>
void main()
{
    float xA,yA,xB,yB,xC,yC,xD,yD,xN1,yN1,xN2,yN2,a1,a2,b1,b2,c1,c2,d,dx,dy;
    printf("Nhap toa do diem A B C D lan luot:\n");
    printf("A(x,y):");
    scanf("%f%f",&xA,&yA);
    printf("B(x,y):");
    scanf("%f%f",&xB,&yB);
    printf("C(x,y):");
    scanf("%f%f",&xC,&yC);
    printf("D(x,y):");
    scanf("%f%f",&xD,&yD);
    xN1=xB-xA;
    yN1=yB-yA;
    xN2=xD-xC;
    yN2=yD-yC;
    a1=-yN1;
    b1=xN1;
    c1=yN1*xA-xN1*yA;
    a2=-yN2;
    b2=xN2;
    c2=yN2*xC-xN2*yC;
    d=a1*b2-a2*b1;
    dx=c1*b2-b1*c2;
    dy=a1*c2-c1*a2;
    if(d!=0) printf("toa do giao diem I(%0.2f,%0.2f)",dx/d,dy/d);
    else if((dx!=0)||(dy!=0)) printf("hai duong thang song song");
            else printf("hai duong thang trung nhau");


}
