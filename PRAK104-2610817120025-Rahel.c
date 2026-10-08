#include <stdio.h>

int main() {
    int harga_a = 400000;
    int harga_b = 350000;

    int diskon_a = 13;
    int diskon_b = 21;

    int harga_setelah_diskon_a = harga_a - (harga_a * diskon_a / 100);
    int harga_setelah_diskon_b = harga_a - (harga_a * diskon_b / 100);

    printf("Harga sepatu A adalah %d\n", harga_a);
    printf("Harga sepatu B adalah %d\n", harga_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",
           harga_setelah_diskon_a);
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %d\n",
           harga_setelah_diskon_b);

    return 0;
}