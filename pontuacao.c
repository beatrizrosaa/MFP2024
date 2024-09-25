#include <stdio.h>

int main() {

    

    int x,c=0;;
    scanf("%d", &x);

    if (x >= 8){
        x -= 8;
        c++;
        if (x >= 4){
            x -= 4;
            c++;
            if (x >= 2){
                x -=2;
                c++;
                if (x >= 1){
                    x-= 1;
                    c++;
                }
            }
            else if (x >= 1){
                    x-= 1;
                    c++;
                }

        }
        else if (x >= 2){
                x -=2;
                c++;
                if (x >= 1){
                    x-= 1;
                    c++;
                }
            }
            else if (x >= 1){
                    x-= 1;
                    c++;
                }
    }
    else if (x >= 4){
        x -= 4;
        c++;
            if (x >= 2){
                x -=2;
                c++;
                if (x >= 1){
                    x-= 1;
                    c++;
                }
            }
            else if (x >= 1){
                    x-= 1;
                    c++;
                }

    }
    else if (x >= 2){
        x -=2;
                c++;
                if (x >= 1){
                    x-= 1;
                    c++;
                }
    }
    else if (x <= 1){
        x-= 1;
        c++;
    }

        
        printf("%d\n",c);
        return 0;
    

}