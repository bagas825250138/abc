#include <stdio.h>

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int x, kiri=0, kanan=4, tengah, ketemu=0;

    printf("Cari angka: ");
    scanf("%d", &x);

    while(kiri <= kanan){
        tengah = (kiri + kanan) / 2;

        if(arr[tengah] == x){
            ketemu = 1;
            break;
        }
        else if(arr[tengah] < x){
            kiri = tengah + 1;
        }
        else{
            kanan = tengah - 1;
        }
    }

    if(ketemu) printf("Data ditemukan\n");
    else printf("Data tidak ditemukan\n");

    return 0;
}