#include<stdio.h>
typedef struct{
    int roll;
    char name[50];
    float marks;
}student_t;

int main(){
    FILE* fp;
    student_t s; 
    fp=fopen("student.txt","r");
    while(fscanf(fp,"%d %s %f",&s.roll,s.name,&s.marks)!=EOF){
        printf("\n %d %s %f",s.roll,s.name,s.marks);
    }
    return 0;
}