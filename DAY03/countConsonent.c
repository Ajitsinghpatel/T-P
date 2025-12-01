#include<stdio.h>
#include<string.h>
int main(){
    char ch=' ';
    int count=0;
    printf("Enter the string :");
    char str[100];
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        ch=str[i];
        if(ch>='A' && ch<='Z'){
            ch=ch+32;
        }
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') && (ch<=122 && ch>=97)){
            count++;
        }

    }
    printf("number of consonent is %d\n",count);
    return 0;
}