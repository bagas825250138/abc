#include <stdio.h>

int main() {
    int harga, jumlah;
    float total, diskon = 0;

    printf("Masukkan harga: ");
    scanf("%d", &harga);

    printf("Masukkan jumlah: ");
    scanf("%d", &jumlah);

    total = harga * jumlah;

    if (total > 100000) {
        diskon = total * 0.1;
    }

    printf("Total: %.2f\n", total);
    printf("Diskon: %.2f\n", diskon);
    printf("Bayar: %.2f\n", total - diskon);

    return 0;
}