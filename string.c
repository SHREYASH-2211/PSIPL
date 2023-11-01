#include<stdio.h>

int main(){


    char str[]="Shreyash";
    int length=0,consonant=0,digit=0,space=0,i;
    
    
    for(i=0;str[i]!='\0';i++){
   	 if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
   		 length++;
   	 }
   	 else if(str[i]>='a'&&str[i]<='z'){
   		 consonant++;
   	 }
   	 else if(str[i]>='1'&&str[i]<='9'){
   		 digit++;
   	 }
   	 else if(str[i]<=' '){
   		 space++;
   	 }
}
   printf("Vowel is %d \n",length);
    printf("Consonant is %d\n",consonant);
    printf("Digit is %d\n",digit);
    printf("Space is %d\n",space);
return 0;
}

