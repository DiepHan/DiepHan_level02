#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,delta;
    printf("Nhap cac he so A B C:");
    scanf("%f%f%f",&a,&b,&c);
    if(a!=0)
    {
        delta=b*b-4*a*c;
        if(delta==0) printf("x=%0.2f",-b/2*a);
        else if(delta>0) printf("x1=%0.2f\nx2=%0.2f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
                else printf("PHUONG TRINH VO NGHIEM");
    }
    else if(b!=0) printf("x=%0.2f",-c/b);
            else if(c==0) printf("VO SO NGHIEM");
                    else printf("VO NGHIEM");
}
