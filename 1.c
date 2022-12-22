#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tmp=1;
    char input[100]={};
    char c;
    while((c=getchar())!=EOF){
        if(c=='\"'&&tmp==1){
            printf("``");
            tmp=2;
        }
        else if(c=='\"'&&tmp==2){
            printf("\'\'");
            tmp=1;
        }
        else {
            printf("%c",c);
        }

    }
    
}