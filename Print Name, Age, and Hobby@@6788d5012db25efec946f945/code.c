#include <stdio.h>
int main(){
    char s[20];
    int a;
    char b[30];
    scanf("%s %d %s",&s,&a,&b);
    printf("Name: %s\nAge: %d\nHobby: %s\n",s,a,b);
    return 0;
}