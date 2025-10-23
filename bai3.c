#include <stdio.h>
#include <math.h>

void giaiPTBacHai() {
    double a, b, c;
    printf("Nhập a,b,c: ");
    scanf("&a, &b, &c");
    
    if(a==0){
        if(b==0)
            printf("Phương trình có vô số nghiệm.");
        else{
            printf("Phương trình vô nghiệm.");
        } else{
            double x=-c/b;
            printf("Phương trình có 1 nghiệm: x= ", x);
        }
        return;
    }

    double d=b*b - 4*a*c;
    if(d>0){
        double x1 = (-b + sqrt(d))/ (2*a);
        double x2 = (-b - sqrt(d))/ (2*a);
        printf("Phương trình có 2 nghiệm phân biệt");
        printf("x1= ",x1);
        printf("x2= ",x2);
    } else if (d==0){
        double x= -b/2*a;
        printf("Phương trình có nghiệm kép x= ",x);
    } else{
        printf("Phương trình vô nghiệm")
    }
}