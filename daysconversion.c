#include<stdio.h>
int main(){
    int days;
    int years,months;
    scanf("%d",&days);
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    printf("Years:%d\n Months:%d\n Days:%d\n",years,months,days);
    return 0;
}