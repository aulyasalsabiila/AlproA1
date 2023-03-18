/* Nama File  : 4_SimetriTabel */
/* Deskripsi  : Menentukan bahwa T1 dan T2 simetri atau tidak */
/* Pembuat    : Aulya Salsabila Khairunnisa - 24060122140163 */
/* Tanggal Pembuatan : 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
/* Kamus */
    int *T1; /* Counter 1 */
    int *T2; /* Counter 1 */
    int N1; /* Counter 2 */
    int N2; /* Counter 2 */
    int i; /* Bilangan */
    bool check = true;

/* Algoritma */
    printf("Masukkan jumlah array 1: ");
    scanf("%d",&N1);
    T1 = (int*)malloc(N1*sizeof(int));
    for (i = 0; i < N1; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d",&T1[i]);
    }
    printf("Masukkan jumlah array 2: ");
    scanf("%d",&N2);
    T2 = (int*)malloc(N2*sizeof(int));
    for (i = 0; i < N2; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d",&T2[i]);
    }
    if (N1 == N2)
    {
        for (i = 0; i < N1; i++)
        {
            if (T1[i] != T2[i])
            {
                check = false;
            }
        }
        if (check)
        {
            printf("Simetri");
        }else{
            printf("Tidak simetri");
        }
    }else{
        printf("Tidak simetri");
    }

/* Output */
    return 0;
}
