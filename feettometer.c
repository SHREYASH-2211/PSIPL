#include<stdio.h>
#define F_M 0.3048
int main(){
    float feet;
    scanf("%f",&feet);
    printf("Distance in meter %.3f",F_M*feet);
    return 0;
}