#include <stdio.h>
#include <string.h>
int main(void) {
    int pr[10], cn[10];
    char nz[10][20];
    for (int h=0; h<10; h++){
        int vstup;
        printf("Zadaj pocet  %d. produkov\n",h+1);
        scanf("%d", &vstup);
            pr[h]=vstup;
        printf("Zadaj cenu  %d. produku\n",h+1);
        scanf("%d", &vstup);
            cn[h]=vstup;
        printf("Zadaj nazov %d. produktu\n", h+1);
        scanf("%19s", nz[h]);
        printf("Zadal si polozku: %d x %s ....... %d $\n",pr[h],nz[h],cn[h]);
     }
     printf("Tu su vsetky tvoje polozky:\n");
    float upl=0;
    int spl=0;
    for (int h=0; h<10; h++){
        spl=cn[h]*pr[h];
        upl=upl+spl;
        printf("%d x %s .... %d\n",
                pr[h],
                nz[h],
                cn[h]);
        printf("Spolu %d\n", spl);
    }
    printf("-------------------------------\n");
    if(upl>50){
        upl=upl*0.9;
        printf("Z dovodu ze vas nakup presahuje hodnotu 50$ sme vam uplatnili zlavu 10 percent\n");
    }
    printf("Dokopy: %f\n", upl); 
  return 0;
}