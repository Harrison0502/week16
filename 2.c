#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    const char str1[100][100];
    const char str2[100][100];
    char input[1000];
    for(int i=0;i<a;i++){
        scanf("%s",str1[i]);
        scanf(" %s",str2[i]);
    }
    for(int j=0;j<b;j++){
        scanf("%s",input);
        int tmp=0;
        for(int k=0;k<a;k++){
            if(strcmp(input,str1[k])==0){
                printf("%s\n",str2[k]);
                tmp=1;
                break;
            }
        }
        if(tmp==0){
        if(input[strlen(input)-1]=='y'){
            if(input[strlen(input)-2]=='a'||input[strlen(input)-2]=='e'||input[strlen(input)-2]=='i'||input[strlen(input)-2]=='o'||input[strlen(input)-2]=='u'){
                strcat(input,"s");
            }
            else{
                input[strlen(input)-1]='\0';
                strcat(input,"ies");
            }
        }
        else if(input[strlen(input)-1]=='o'||input[strlen(input)-1]=='s'||input[strlen(input)-1]=='x'){
            strcat(input,"es");
        }
        else if(input[strlen(input)-1]=='h'&&input[strlen(input)-2]=='c'){
            strcat(input,"es");
        }
        else if(input[strlen(input)-1]=='h'&&input[strlen(input)-2]=='s'){
            strcat(input,"es");
        }
        else    
            strcat(input,"s");
        printf("%s\n",input);
        }
    }
}