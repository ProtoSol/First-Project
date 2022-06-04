#include<stdio.h>
#include<windows.h>
void main(){
    int h,m,s;
    printf("Enter the Time : \n");
    scanf("%d %d %d",&h,&m,&s);
    if(h>24||m>60||s>60){
        printf("Error while doing the loop");
    }
    while(1){
        s++;
        if(s> 60){
            m++;
            s = 0;
        }
        if(m> 60){
            h++;
            m = 0;
        }
        if(h>24){
            printf("The day is complete.");
            h = 0;
            m= 0;
            s = 0;
        }
        printf("Clock: \n");
        printf("%02d:%02d:%02d",h,m,s);
        Sleep(1000);
        system("cls");
    }
}