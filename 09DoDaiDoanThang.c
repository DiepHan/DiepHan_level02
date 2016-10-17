#include<stdio.h>
#include<math.h>
void main()
{
        float xA,xB,yA,yB,a;
        printf("Nhap cac canh toa do A B:");
        scanf("%f%f%f%f",&xA,&yA,&xB,&yB);
        a=(sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA)));
        printf("Do dai AB:%0.2f",a);
}
