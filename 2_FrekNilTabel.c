/* Nama File  : 2_FrekNilTabel */
/* Deskripsi  : Menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat    : Aulya Salsabila Khairunnisa - 24060122140163 */
/* Tanggal Pembuatan : 17 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int *tabelPertama; /* Counter 1 */
    int *tabelKedua; /* Counter 1 */
    int n; /* Counter 2 */
    int lastIndeks; /* Counter 2 */
    int i; /* Bilangan */
    int j; /* Bilangan */
    int sum;

/* Algoritma */
    printf("Masukkan bilangan: ");
    scanf("%d",&n);
    tabelPertama = (int*)malloc(n*sizeof(int));
    tabelKedua = (int*)malloc(n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d",&tabelPertama[i]);
        tabelKedua[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        if (tabelKedua[i] != 1)
        {
            for (j = 0; j < n; j++)
            {
                if (tabelPertama[i] == tabelPertama[j])
                {
                    sum++;
                    tabelKedua[j] = 1;
                }
            }
            if (sum > 1)
            {
                printf(" %d ",tabelPertama[i]);
            }
        }
    }

/* Output */
    return 0;
}
