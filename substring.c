#include<stdio.h>
int issubstring(char str[],char sub[]){
    int i,j;
    for(i=0;str[i]!='\0';i++){
        for(j=0;sub[j]!='\0';j++){
            if(str[i+j]!=sub[j]){
                break;
            }
        }
        if(sub[j]=='\0'){
            return 1;
        }
    }
    return 0;
}
int main(){
    char str[100],sub[50];
    printf("enter your string:");
    scanf("%s",str);
    printf("enter substring:");
    scanf("%s",sub);
    if(issubstring(str,sub))
    printf("substring found");
else
    printf("substring not found");

return 0;
}
