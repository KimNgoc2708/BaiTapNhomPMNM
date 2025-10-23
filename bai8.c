#include<stdio.h>

void HienThi(){
    int x;
    printf("Nhập x: ");
    scanf("%d",&x);
    int i,j;
    for(i=1; i<=x; i++){
    	printf("o ");
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}