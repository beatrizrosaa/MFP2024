#include <stdio.h>

int main()
{

    int t, k, N,p1=0,p2=0;
    char time[4];
    char s;

    scanf("%d",&N);

    for (int i = 0; i < N; i++){
        scanf("%s %d %c%d", time, &t, &s, &k);
        if (t == 1){
            p1 += k;
            
        }
        else if (t == 2){
            p2 +=k;
            
        }
    }


    printf("%d x %d\n", p1,p2);
    return 0;
}