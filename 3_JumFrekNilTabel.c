/* Nama File  : 3_JumFrekNilTabel */
/* Deskripsi  : Menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat    : Aulya Salsabila Khairunnisa - 24060122140163 */
/* Tanggal Pembuatan : 17 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int *tabel; /* Counter 1 */
    int n; /* Counter 2 */
    int i; /* Bilangan */
    int j; /* Bilangan */
    int total = 0; /* Bilangan */
    int sum;

/* Algoritma */
    printf("Masukkan bilangan: ");
    scanf("%d",&n);
    tabel = (int*)malloc(n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d",&tabel[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            if (tabel[i] == tabel[j])
            {
                sum++;
            }
        }
        if (sum > 1)
        {
            total += tabel[i];
        }
    }

/* Output */
    printf(" %d ",total);
    return 0;
}
