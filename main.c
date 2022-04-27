/* Nama : Zenobia wirandi Zenaide
NIM : 24060121140164
deskripsi : soal alpro no 2
*/


#include <stdio.h>

int main(){
    int i,max,min,size;

    printf("Maukkan Jumlah jalur lintasan : \n");
    scanf("%d",&size);

    int ara[size];

     printf("Masukkan panjang setiap lintasannya:\n");
     for(i = 0; i < size;  i++){
        scanf("%d", &ara[i]);
     }

    max=ara[0];
    min=ara[0];
    for(i = 0; i < size; i++){
        if(ara[i] > max){
            max = ara[i];
        }
        if(ara[i] < min){
            min = ara[i];
        }
    }

    printf("Selisih Jarak terpanjang dan terpendek adalah %d\n",max-min);


    return 0;
}
