/* Nama File    : 1_NilMax2Tabel.c */
/* Deskripsi    : Menampilkan nilai maksimum ke-2 */
/* Pembuat      : Aulya Salsabila Khairunnisa - 24060122140163 */
/* Tanggal Pembuatan : 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int bilangan[10] = {7,4,5,7,6,5,3,5,1,4};
    int i; /* Counter */
    int max; /* Bilangan */
    int max2; /* Bilangan */

/* Algoritma */
    max = bilangan[0];
    max2 = 0;
    for (i = 1; i < 10; i++){
        if (max < bilangan[i]){
            max2 = max;
            max = bilangan[i];
        }
        else if (bilangan[i] > max2 && bilangan[i] != max){
            max2 = bilangan[i];
        }
    }

/* Output */
    printf ("%d",max2);
    return 0;
}
