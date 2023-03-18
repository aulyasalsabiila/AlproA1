/* Nama File : 5_JumBarKolMat */
/* Deskripsi : Menjumlahkan semua elemen pada baris dan kolomnya */
/* Pembuat   : Aulya Salsabila Khairunnisa - 24060122140163 */
/* Tanggal Pembuatan : 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
/* Kamus */
    int T[3][3]; /* Counter 1 */
    int Total;
    int i; /* Bilangan */
    int j; /* Bilangan */

/* Algoritma */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Masukkan nilai ke-%d,%d: ", i, j);
            scanf("%d",&T[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        Total = 0;
        for (j = 0; j < 3; j++)
        {
            Total += T[i][j];
        }
        printf("Baris ke-%d: %d \n", i + 1, Total);
    }
    for (i = 0; i < 3; i++)
    {
        Total = 0;
        for (j = 0; j < 3; j++)
        {
            Total += T[j][i];
        }
        printf("Kolom ke-%d: %d \n", i + 1, Total);
    }

/* Output */
    return 0;
}
