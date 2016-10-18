#include<stdio.h>
#include<math.h>
void main()
{
    float xA,yA,xB,yB,xO,yO,OA,xI,yI,AI,OI;
    printf("Nhap toa do diem tren:");
    scanf("%f%f",&xA,&yA);
    printf("Nhap toa do diem giua:");
    scanf("%f%f",&xO,&yO);
    printf("Nhap toa do diem duoi:");
    scanf("%f%f",&xB,&yB);
    OA=sqrt((xA-xO)*(xA-xO)+(yA-yO)*(yA-yO));
    xI=(xA+xB)/2;
    yI=(yA+yB)/2;
    OI=sqrt((xI-xO)*(xI-xO)+(yI-yO)*(yI-yO));
    AI=sqrt((xI-xA)*(xI-xA)+(yI-yA)*(yI-yA));
    if((xA-xO)*(xA-xO)+(yA-yO)*(yA-yO)!=(AI*AI+OI*OI))
        printf("NHAP SAI");
    else printf("Chu vi HCN:%0.2f",4*OI+4*AI);





}
