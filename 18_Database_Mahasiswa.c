#include <stdio.h>

int main() {
    FILE *f = fopen("db.txt", "a");

    char nama[50];
    int nilai;

    printf("Input data:\n");
    scanf("%s %d", nama, &nilai);

    fprintf(f, "%s %d\n", nama, nilai);

    fclose(f);

    printf("Data berhasil disimpan\n");

    return 0;
}