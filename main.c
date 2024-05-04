#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*
 Auteur: ASSOUN A.K. Rodrigue,MESSAN Elom Raïssa
 Titre:Programme de calcul des solutions d'une équation du sécond dégrée
 Année académique:2023-2024
 Ecole: EPL
 Filière: LP GL S2
*/
int main()
{
    //déclaration des variables
    setlocale(LC_CTYPE,"");
    int A,B,C,D;
    float x1,x2,x0,s;
    //Utilité du programme
    printf("Programme de calcule des solutions d'une équation du sécond dégrée de type Ax²+Bx+C=0\n");
    //Début des instructions
    printf("\nEntrez la valeur de A : ");
    scanf("%d",&A);
    printf("\nEntrez la valeur de B : ");
    scanf("%d",&B);
    printf("\nEntrez la valeur de C : ");
    scanf("%d",&C);
    s=-(float)C/B;
    //Cas où l'utilisateur entre des valeurs nulles
    if (A==0 && B==0 && C==0)
    {
        printf("\nVotre équation n'est pas correcte car A=0,B=0 et C=0\n");
        //Cas où L'utilisateur entre A et B nul
    }
    else if (A==0 && B==0)
    {
        printf("\nVous n'avez entrer que le C, il n'ya pas de solution car votre équation est : %d=0 \n",C);
        //Cas où A est nuls
    }
    else if (A==0)
    {
        printf("\nL'équation est du premier dégré %dx+%d=0 et la solution est : S= %.2f\n",B,C,s);
    }
    else
    {
        //équation correcte
        D=(pow(B,2))-(4*A*C);
        x0=-B/(2*A);
        x1=(-B-sqrt(D))/(2*A);
        x2=(-B+sqrt(D))/(2*A);
    }
    //Discriminant inférieur à zéro
    if (D<0)
    {
        printf("\nL'équation %dx²+%dx+%d=0  n'admet pas de solution dans IR car Discriminant=%d qui est inférieux à Zéro\n",A,B,C,D);
        //Discriminant égal à zéro
    }
    else if (D==0)
    {
        printf("\nL'équation %dx²+%dx+%d=0 admet une solution unique : x0=%.2f et s={%.2f} \n",A,B,C,x0,x0);
        // Discriminant supérieur à 0
    }
    else
    {
        printf("\nLa solution de l'équation %dx²+%dx+%d=0 admet une solution double x1=%.2f et x2=%.2f et S={%.2f;%.2f} \n",A,B,C,x1,x2,x1,x2);
    }
    return 0;
}
