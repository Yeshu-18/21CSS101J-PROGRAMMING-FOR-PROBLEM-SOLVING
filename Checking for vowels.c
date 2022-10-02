#include <stdio.h>
int main() {
    char alphabet;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    // evaluates to 1 if variable alphabet is a lowercase vowel
    lowercase_vowel = (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u');

    // evaluates to 1 if variable alphabet is a uppercase vowel
    uppercase_vowel = (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U');

    // evaluates to 1 (true) if alphabet is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", alphabet);
    else
        printf("%c is a consonant.", alphabet);
    return 0;
}
