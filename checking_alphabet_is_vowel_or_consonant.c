#include<stdio.h>
int main(){
    char ch;
    printf("ENTER THE ALPHABET");
    scanf("%c",&ch);
    switch(ch){
        case 'A':printf("ALPHABET IS VOWEL");
        break;
        case 'E': printf("ALPHABET IS VOWEL");
        break;
        case 'I':printf("ALPHABET IS VOWEL");
        break;
        case 'O':printf("ALPHABET IS VOWEL");
        break;
        case 'U':printf("ALPHABET IS VOWEL");
        break;
        case 'a':printf("ALPHABET IS VOWEL");
        break;
        case'e':printf("ALPHABET IS VOWEL");
        break;
        case 'i':printf("ALPHABET IS VOWEL");
        break;
        case 'o':printf("ALPHABET IS VOWEL");
        break;
        case 'u':printf("ALPHABET IS VOWEL");
        break;
        default:printf("ALPHABET IS CONSONANT");
        break;
    }
    return 0;
}