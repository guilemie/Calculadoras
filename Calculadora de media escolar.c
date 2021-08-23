#include <stdio.h>
#include <stdlib.h>

int main ()
{
// Calcular média de notas dos 4 bimestre escolares.

 float nota1, nota2, nota3, nota4, media;
 nota1 = nota2 = nota3 = nota4 = media = 0;

    printf ("========Media Escolar========\n\n");

    printf ("Digite a primeira nota bimestra:\n"); //PRIMEIRA NOTA
    scanf ("%f", &nota1);

    printf ("Digite a segunda nota bimestra:\n"); //SEGUNDA NOTA
    scanf ("%f", &nota2);

    printf ("Digite a terceira nota bimestra:\n"); //TERCEIRA NOTA
    scanf ("%f", &nota3);

    printf ("Digite a quarta nota bimestra:\n"); //QUARTA NOTA
    scanf ("%f", &nota4);

    media = (nota1+nota2+nota3+nota4) / 4;

    printf ("A sua media escolar foi de: %f", media);

    if ( media >= 6){
        printf ("\n\n\nParabens, voce passou");
    }else{
        printf ("\n\n\nEsta reporvado");
    }

  return 0; }
