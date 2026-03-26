#include <stdio.h>

int main() {
    char kalimat[100];
    int jumlah = 1;

    printf("Masukkan kalimat: ");
    gets(kalimat);

    for(int i=0; kalimat[i] != '\0'; i++){
        if(kalimat[i] == ' ') jumlah++;
    }

    printf("Jumlah kata: %d\n", jumlah);

    return 0;
}