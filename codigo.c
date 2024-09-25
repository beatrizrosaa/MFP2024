#include <stdio.h>

int main() {

    

        int vetor[7];
        int a,b,c=0;

        for (int i =0; i<8 ; i++){
            if (i != 7){
              scanf("%d", &vetor[i]);  
            }
            else{
              scanf("%d",&a);
            }
        }

        for (int i =0; i<8 ; i++){
            if (vetor[i] == 1){
                c++;
            }
        }

        if (c % 2 == 0){
            b = 0;
        }
        else{
            b = 1;
        }


        if (a == b){
            printf("S\n");
        }
        else{
            printf("N?\n");
        }
           

}