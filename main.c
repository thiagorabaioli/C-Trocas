#include <stdio.h>

int Troca(int *x, int *y){
    static int trocas =0;
    int aux=*x;
     *x=*y;
     *y=aux;
     return ++trocas;
}


int main() {
    int x=123, y=321;
    printf("Troca %d: ", Troca(&x,&y)); printf("x: %d y: %d\n", x,y);
    printf("Troca %d: ", Troca(&x,&y)); printf("x: %d y: %d\n", x,y);
    printf("Troca %d: ", Troca(&x,&y)); printf("x: %d y: %d\n", x,y);
    printf("Troca %d: ", Troca(&x,&y)); printf("x: %d y: %d\n", x,y);
    return 0;
}
