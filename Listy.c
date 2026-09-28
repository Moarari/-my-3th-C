#include <stdio.h>
int main(void) {

    int pr[10], cn[10];
    char nz[100];
    for (int h=0; h<10; h++){
        int vstup;
        char vstup2[10];
        printf("Zadaj pocet  %d. produkov\n",h);
        scanf("%d", &vstup);
        if(h==0){ 
            pr[h]=vstup;
            printf("Zadal si cislo %d\n",pr[h]);
        }
        printf("Zadaj cenu  %d. produku\n",h);
        scanf("%d", &vstup);
        if(h==0){ 
            cn[h]=vstup;
            printf("Zadal si cislo %d\n",cn[h]);
        }
        printf("Zadaj nazov  %c. produku\n",h);
        scanf("%c", &vstup2);
        if(h==0){ 
            nz[h*10]=vstup2;
            printf("Zadal si cislo %s\n",nz[h]);
        }
     }
     printf("Tu su vsetky tvoje polozky:\n");

    int upl=0;
    int spl=0;
    for (int h=0; h<10; h++){
        spl=cn[h]*pr[h];
        upl=upl+spl;
        printf("%d x ", pr[h]);
        printf("%s", nz[h]);
        printf("....%d\n", cn[h]);
        printf("Spolu %d\n", spl);
    }
    printf("-------------------------------\n");
    if(upl>50){
        upl=upl*0.9;
        printf("Z dovodu ze vas nakup presahuje hodnotu 50$ sme vam uplatnili ylavu 10 percent\n");
    }
    printf("Dokopy: %d\n", upl); 
  return 0;
}