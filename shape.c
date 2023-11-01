#include<stdio.h>
int main(){

    printf("Menu \n 1.Circle \n 2.Rectangle \n 3.Triangle \n 4.Square \n");
    int opt;
    scanf("%d",&opt);
    switch(opt){
        case 1:{
            float rad;
            printf("Enter radius");
            scanf("%f",&rad);
            printf("Area of circle is :%.3f",rad*rad*3.14);
            break;
        }
        case 2:{
            float len,bre;
            printf("Enter Length and breadth");
            scanf("%f %f",&len,&bre);
            printf("Area of Rectangle is :%.3f",len*bre);
            break;
        }
        case 3:{
            float height,base;
            printf("Enter height & base");
            scanf("%f %f",&height,&base);
            printf("Area of Triangle is :%.3f",height*base/2);
            break;
        }
        case 4:{
            float side;
            printf("Enter side");
            scanf("%f",&side);
            printf("Area of Square is :%.3f",side*side);
            break;
        }
        default:{
            printf("Invalid Input");
        }
    }
    return 0;
    }
