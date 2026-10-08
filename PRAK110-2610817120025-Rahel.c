#include <stdio.h>
#include <math.h>

int main() {
    float alas = 5;
    float tinggi = 12;

    float sisi_a = alas;
    float sisi_b = tinggi;
    float sisi_c = sqrt((sisi_a * sisi_a) + (sisi_b * sisi_b));

    float keliling = sisi_a + sisi_b + sisi_c;
    float luas = (alas * tinggi) / 2;

    printf("Diketahui :\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", sisi_a);
    printf("Sisi B = %.0f cm\n", sisi_b);
    printf("Sisi C = %.0f cm\n", sisi_c);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm2\n", luas);

    return 0;
}