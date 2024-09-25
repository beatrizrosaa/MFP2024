#include <stdio.h>

int main() {

    int x1,x2,x3,x4,y1,y2,y3,y4,X,Y;

    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    scanf("%d%d",&x3,&y3);
    scanf("%d%d",&x4,&y4);

    if (x1 > x3){
        X = x3 - x1;
    }
    else if( x3 > x1){
        X = x3 - x1;
    }

    if (y1 > y3){
        Y = y3 - y1;
    }
    else if( y3 > y1){
        Y = y3 - y1;
    }

    printf("%d", X*Y);
}