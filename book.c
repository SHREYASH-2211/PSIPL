#include<stdio.h>

struct book{
    int sr;
    char name[100];
    char author[10];
};

int main(){

    FILE *fp, *paperfp, *hardfp;
    struct book b;
    fp=fopen("booksDetails.txt","r");
    paperfp=fopen("paperbacks.txt","w");
    hardfp=fopen("hardbacks.txt","w");
   
    while(fscanf(fp,"%d %s %s",&b.sr,b.name,b.author)!=EOF){
        if(b.name[0] == 'p')
            fprintf(paperfp, "\n%d %s %s",b.sr,b.name,b.author);
        else if(b.name[0] == 'h')
            fprintf(hardfp, "\n%d %s %s",b.sr,b.name,b.author);
        else if(b.name[0] == 'b')
            {fprintf(paperfp, "\n%d %s %s",b.sr,b.name,b.author);
            fprintf(hardfp, "\n%d %s %s",b.sr,b.name,b.author);}
    }
    fclose(fp);
    fclose(paperfp);
    fclose(hardfp);
    return 0;
}
