#include<stdio.h>

void fact(int n, int n1, int n2){
    int ans=0;
    for(int i=1;i<=n;i++){
        printf("%d",n1);
        ans=n1+n2;
        n1=n2;
        n2=ans;
        printf(" ");
    }
}

int main(){

    int n, n1=1,n2=1;
    scanf("%d",&n);

    fact(n,n1,n2);


}

