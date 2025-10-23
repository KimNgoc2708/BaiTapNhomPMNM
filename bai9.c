#include<stdio.h>

void NhapTuanTu(){
    int n;
    printf("Nhập n: ");
    scanf("%d",&n);

    int i, x;
    for(i=1; i<=n; i++){
        printf("Nhập số thứ %d: ",i);
        scanf("%d",&x);

        if(x==1){
            i++;
        }
        else{
            printf("Bạn đã nhập sai hãy nhập lại từ đầu");
            i=1;
        }
    }
    printf("Bạn đã nhập từ 1 đến %d",n);
}