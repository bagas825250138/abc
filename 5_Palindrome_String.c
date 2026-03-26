#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Masukkan kata: ");
    scanf("%s", str);

    strcpy(rev, str);
    strrev(rev);

    if(strcmp(str, rev)==0)
        printf("Palindrome\n");
    else
        printf("Bukan palindrome\n");

    return 0;
}