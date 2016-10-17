#include<stdio.h>
#include<math.h>
void main()
{
    float xA,yA,xB,yB,xC,yC,xD,yD,xN1,yN1,xN2,yN2,goc;
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
    goc=((yN1*yN2+xN1*xN2)/(sqrt(yN1*yN1+xN1*xN1)*(sqrt(xN2*xN2+yN2*yN2))));
    printf("cos(ab,cd):%0.2f",fabs(goc));


}
