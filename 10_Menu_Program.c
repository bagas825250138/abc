#include <stdio.h>

int tambah(int a, int b){
    return a+b;
}

int kurang(int a, int b){
    return a-b;
}

int main() {
    int pilih, a, b;

    printf("1. Tambah\n2. Kurang\n");
    scanf("%d", &pilih);

    printf("Masukkan 2 angka: ");
    scanf("%d %d", &a, &b);

    if(pilih==1)
        printf("Hasil: %d\n", tambah(a,b));
    else
        printf("Hasil: %d\n", kurang(a,b));

    return 0;
}