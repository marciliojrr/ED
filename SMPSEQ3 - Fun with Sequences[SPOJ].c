#include <stdio.h>

void zerar(int *array){ //Funçao que serve somente pra pegar o array e encher
    int i = 0;          //ele com zero, se nao fica cheio de lixo de memoria.
    for(i = 0; i < (sizeof(array)/sizeof(array[0])); i++){
        array[i] = 0;
    }
}

int main(){

    int tamanho_S = 0, tamanho_Q = 0, i = 0, j = 0;
    int repetiu = 0;
    int sequence_S[100], sequence_Q[100]; // Ja declaramos com valor máximo.
    zerar(sequence_S); zerar(sequence_Q); // Zeramos eles


    scanf("%d", &tamanho_S); // Lê o tamanho de S
    for(i=0; i < tamanho_S; i++)
        scanf("%d", &sequence_S[i]); // Preenche com os valores


    scanf("%d", &tamanho_Q); // Msm coisa
    for(i=0; i < tamanho_Q; i++)
        scanf("%d", &sequence_Q[i]);


    for(i = 0; i < (tamanho_S); i++){
        for(j = 0; j < (tamanho_Q); j++){
                if(sequence_S[i] == sequence_Q[j])
                    repetiu++; // Significa que o sequence_S[i] apareceu no sequence_Q em qualquer posiçao
        }
        if(repetiu == 0) //Só irá entrar aqui caso nao tenha aparecido no sequence_Q
            printf("%d ", sequence_S[i]); // Ja printa direto o valor

        repetiu = 0;
    }
}
