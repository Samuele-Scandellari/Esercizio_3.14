#include <stdio.h>
int main(){
    int i;
    int n_aumentata=0;
    int n_diminuita=0;
    float temp;
    printf("La temperatura del giorno precendente ai 10 giorni era 5°C\n");
    printf("Qual'e' stata la temperatura negli ultimi 10 giorni?\n");
    for(i=0; i<10; i++){
        printf("Inserisci la temepratura nel giorno seguente: ");
        scanf("%f", &temp);
        if(temp>5){
            n_aumentata++;
        }else if (temp<5)
            n_diminuita++;
    }
    printf("La temperatura e' aumentata di %d volte.\n", n_aumentata);
    printf("La temperatura e' diminuita di %d volte.", n_diminuita);
}