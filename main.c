#include <stdio.h>

void Troca(int *x, int *y){
    int aux=*x;
     *x=*y;
     *y=aux;

}


int main() {
    int x=123, y=321;
    Troca(&x,&y);
    printf("x: %d y: %d", x,y);
    return 0;
}
