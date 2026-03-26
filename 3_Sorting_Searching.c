#include <stdio.h>

int main() {
    int arr[5], temp, x, found=0;

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    // Bubble Sort
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Hasil sorting: ");
    for(int i=0;i<5;i++) printf("%d ", arr[i]);

    scanf("%d",&x);

    for(int i=0;i<5;i++){
        if(arr[i]==x) found=1;
    }

    if(found) printf("\nData ditemukan\n");
    else printf("\nTidak ditemukan\n");

    return 0;
}