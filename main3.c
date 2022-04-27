/* nama : Zenobia Wirandi Zenaide
NIM : 24060121140164
deskripsi : tugas uas alpro no 3
*/

#include <stdio.h>

int main (){
	//Kamus
	int i,j,N,UpdateArray;

    //Algoritma

    printf("Masukan nilai N : ");
    scanf("%d", &N);
    int T[N];
    UpdateArray = 0;

    for (i = 0; i < N; i++) scanf("%d", &T[i]);

    for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            UpdateArray += T[j];
        }
    }
    printf("%d", UpdateArray);

    return 0;
}

