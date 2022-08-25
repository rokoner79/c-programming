#include<stdio.h>
int main()
{
    char l;
    printf("Enter a letter:");
    scanf("%c",&l);
    char lowercase_vowel=(l=='a'||l=='e'||l=='i'||l=='o'||l=='u');
    char uppercase_vowel=(l=='A'||l=='E'||l=='I'||l=='O'||l=='U');
    if(lowercase_vowel||uppercase_vowel)
    {
        printf("The letter is vowel");
    }
      else
    {
        printf("The letter is consonent");
    }
}
