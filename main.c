#include <stdio.h>

char *strstr(char *find, char *str){
    int i;
    /*Percorrer a String*/
    while (*str !=0) {
        /*Tenta fazer o match a começar em str*/

        for (i=0; str[i]!=0 && find[i]!=0 && find[i]==str[i]; i++);
        /*Se chegou ao fim da string de procura, não há match*/
        if (find[i] == 0)
            return str;
        str++;
    }

      return NULL;
    }



int main() {
    char str[]="percorrer toda a string str";
    char find[10];
    char *resultado;
    printf("Introduza a string que procura: ");
    gets(find);
    resultado= strstr(find, str);
    printf("Resutado: %s\n", resultado);
}
