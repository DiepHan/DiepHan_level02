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
        if(delta==0)
            {if((-b/2*a)>0) printf("x1=%0.2f\nx2=%0.2f",(sqrt(-b/2*a)),(-1)*(sqrt(-b/2*a)));
                else printf("PHUONG TRINH VO NGHIEM");}
        else if(delta>0)
        {       if((-b-sqrt(delta))/(2*a)>0)
                    printf("x=%0.2f\nx=%0.2f",(sqrt)((-b-sqrt(delta))/(2*a)),(-1)*(sqrt)((-b-sqrt(delta))/(2*a)));
                if((-b+sqrt(delta))/(2*a)>0)
                    printf("x=%0.2f\nx=%0.2f",(sqrt)((-b+sqrt(delta))/(2*a)),(-1)*(sqrt)((-b+sqrt(delta))/(2*a)));
                if(((-b-sqrt(delta))/(2*a)<0)&&(-b+sqrt(delta))/(2*a)<0)
                    printf("PHUONG TRINH VO NGHIEM");
        }
                else printf("PHUONG TRINH VO NGHIEM");
    }
    else if(b!=0)
    {
        if((-c/b)>0)
            printf("x=%0.2f\nx=%0.2f",((sqrt)(-c/b)),((-1)*(sqrt)(-c/b)));
        else printf("PHUONG TRINH VO NGHIEM");
    }
            else if(c==0) printf("VO SO NGHIEM");
                    else printf("VO NGHIEM");
}
