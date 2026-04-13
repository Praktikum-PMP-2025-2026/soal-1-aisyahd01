//Nama: Aisyah Dahayu Shabirah
//NIM: 13224059

#include <stdio.h>

int main (){
    int izin, jam;
    int suhu, radiasi;
    scanf("%d", &izin);
    scanf("%d", &suhu);
    scanf("%d", &radiasi);
    scanf("%d", &jam);

    
    if (izin==1){
        if (jam<6 || jam>20 && radiasi>=6){
            printf("TOLAK");
        }
        else {
        printf("MASUK");}
        }
        
    else if (izin==2){ 
        if (radiasi <=2 && jam>=8 && jam <=18){
            printf("MASUK");}
        else if (radiasi>=6){
            printf("TOLAK");
        }
        else {
            printf("PEMERIKSAAN");}
        }
    else if (izin==3){
        if( radiasi==0 && suhu<380){
            printf("MASUK");}
        else if (radiasi>=6){
            printf("TOLAK");
        }
    else {
        printf("TOLAK");
    }}
    return 0;
}
