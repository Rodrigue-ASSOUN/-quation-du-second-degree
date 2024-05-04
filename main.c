#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*
 Auteur: ASSOUN A.K. Rodrigue,MESSAN Elom Ra�ssa
 Titre:Programme de calcul des solutions d'une �quation du s�cond d�gr�e
 Ann�e acad�mique:2023-2024
 Ecole: EPL
 Fili�re: LP GL S2
*/
int main()
{
    //d�claration des variables
    setlocale(LC_CTYPE,"");
    int A,B,C,D;
    float x1,x2,x0,s;
    //Utilit� du programme
    printf("Programme de calcule des solutions d'une �quation du s�cond d�gr�e de type Ax�+Bx+C=0\n");
    //D�but des instructions
    printf("\nEntrez la valeur de A : ");
    scanf("%d",&A);
    printf("\nEntrez la valeur de B : ");
    scanf("%d",&B);
    printf("\nEntrez la valeur de C : ");
    scanf("%d",&C);
    s=-(float)C/B;
    //Cas o� l'utilisateur entre des valeurs nulles
    if (A==0 && B==0 && C==0)
    {
        printf("\nVotre �quation n'est pas correcte car A=0,B=0 et C=0\n");
        //Cas o� L'utilisateur entre A et B nul
    }
    else if (A==0 && B==0)
    {
        printf("\nVous n'avez entrer que le C, il n'ya pas de solution car votre �quation est : %d=0 \n",C);
        //Cas o� A est nuls
    }
    else if (A==0)
    {
        printf("\nL'�quation est du premier d�gr� %dx+%d=0 et la solution est : S= %.2f\n",B,C,s);
    }
    else
    {
        //�quation correcte
        D=(pow(B,2))-(4*A*C);
        x0=-B/(2*A);
        x1=(-B-sqrt(D))/(2*A);
        x2=(-B+sqrt(D))/(2*A);
    }
    //Discriminant inf�rieur � z�ro
    if (D<0)
    {
        printf("\nL'�quation %dx�+%dx+%d=0  n'admet pas de solution dans IR car Discriminant=%d qui est inf�rieux � Z�ro\n",A,B,C,D);
        //Discriminant �gal � z�ro
    }
    else if (D==0)
    {
        printf("\nL'�quation %dx�+%dx+%d=0 admet une solution unique : x0=%.2f et s={%.2f} \n",A,B,C,x0,x0);
        // Discriminant sup�rieur � 0
    }
    else
    {
        printf("\nLa solution de l'�quation %dx�+%dx+%d=0 admet une solution double x1=%.2f et x2=%.2f et S={%.2f;%.2f} \n",A,B,C,x1,x2,x1,x2);
    }
    return 0;
}
