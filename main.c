#include <stdio.h>

int main() {
    int n;              //Değişkenleri atıyoruz.
    double p;
    printf("Bir Vektorun P-Normlarini Yazdiran Programa Hos Geldiniz\nLutfen Bir n ve P Degeri Giriniz.\n--------------------------------\n");

    takeN:
    if (scanf("%d", &n) != 1){
        fflush(stdin);
        printf("Sadece Sayi Giriniz\nLutfen n Degerini Tekrar Giriniz\n");
        goto takeN;
    }                                       //Kullanıcıdan değerleri alıyoruz ve sayı yazdığından emin oluyoruz.
    takeP:
    if (scanf("%lf", &p) != 1){
        fflush(stdin);
        printf("Sadece Sayi Giriniz\nLutfen p Degerini Tekrar Giriniz\n");
        goto takeP;
    }
    if(n<=0||p==0){               //Hatalı tuşlama var mı diye kontrol ediyoruz.
        if(n<=0)
            printf("Hatali Tuslama Yaptiniz n Degeri 0 ve 0' dan Kucuk Olamaz.\n");
        else
            printf("P Degeri 0' a Esit Olamaz\n");
        printf("Lutfen Degerleri Tekrar Giriniz");
        goto takeN;
    }
    for (int i = 1; i <=n ; ++i) {
        if(i==1)

            printf("(x%d^%0.1lf",i,p);      //i=1 değeri için parantezi açıyoruz.
        else
            printf("+x%d^%0.1lf",i,p);      //Diğer değerleri aynen yazdırıyoruz.
    }
    printf(")^1/%0.1lf",p);                 //Parantezi kapatıp 1/p yi yazdırıyoruz.
    return 0;
}
