
#include <stdio.h>

int main() {

    

        int N,k,c=1,d,p;
        
        scanf("%d",&N);
        
        for (int i = 1; i <= N; i++){ //2 elevado a n
            d = 2*c;
            c = d ;
        }

        k = c -1; // k= 2^n - 1

        int vetor[k];

        for (int i = 0; i <= k; i++){
            scanf("%d", &vetor[i]);
        }

        for (int i = 0; i <= k; i++){
            if (i + 1 >= k){
                p = vetor[0] + vetor[1] + vetor[i];
            }
        }

        printf("%d\n",p);

        return 0;
    

}