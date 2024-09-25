#include <stdio.h>

int main() {

    

        int m,n,a,b,c;
        scanf("%d%d", &m,&n);
        a = m*m - n*n;
        b = 2*m*n;
        c = m*m + n*n;
        
        printf("%d %d %d\n",a,b,c);
        return 0;
    

}