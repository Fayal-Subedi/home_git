// program to find if a character is vowel or consonant
#include<stdio.h>
#include<ctype.h>
int main(){
    char x,y;
    printf("enter a character");
    scanf(" %c",&y);
    x= tolower(y);
    if ( x== 'a' || x=='e' || x== 'i' || x=='o' || x=='u')
    printf("%c is vowel", x);
    else {
        printf("%c is conconant",x);
    }
    return 0;
}