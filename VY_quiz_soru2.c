#include <stdio.h>

int en_kucuk_eleman(int dizi[], int n) {
    if (n == 0) {
        return -1; // Hata durumu
    }
    int en_kucuk = dizi[0];
    for (int i = 1; i < n; i++) {
        if (dizi[i] < en_kucuk) {
            en_kucuk = dizi[i];
        }
    }
    return en_kucuk;
}

int main() {
    // Örnek bir dizi 
    int dizi[] = {33, 17, 7, 68, 15, 8};
    int uzunluk = sizeof(dizi) / sizeof(dizi[0]);
   
    int en_kucuk = en_kucuk_eleman(dizi, uzunluk);
    printf("Dizinin en kucuk elemani: %d", en_kucuk);
    return 0;
}
