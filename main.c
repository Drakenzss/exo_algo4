#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //voyage
   int hab=0; //nombre d'habitant
   int ville=0; //nombre de ville
   int lieux=0; //nombre de lieux visité
   int i=0; // pas de 1

   printf("Ecrire le nombre de lieux\n"); //on entre le nombre de lieux visiter
        scanf("%d",&lieux);

    for(i=0;i<=lieux;i++)//la boucle ce lance quand l'utilisateur entre le nombre de lieux
    {
        printf("Ecrire le nombre d'habitant pour chaque ville visiter, 0 pour quittez\n");//on entre le nombre d'habitant par ville
        scanf("%d",&hab);
        if(hab>=1000){ // si les habitant sont inférieur à 1000 hab alors ce n'est pas une ville
            ville++; // pas pour montrer le nombre de ville visité
            }
    }
     printf("Vous avez visiter %d ville\n",ville);
    printf("vous avez visiter aucune ville\n");
    */

    //auberge

    /*
    int age=0;
    int poid=0;
    int prix=0;

    printf("Quel age avez vous ?\n"); //on donne l'age de la personne
        scanf("%d",&age);//l age est lu

   if(age=60)// si age=60 on paye rien
   {
       prix=0;
   }else if(age<=10)// si age -10 alors on paye 5
   {
       prix=5;
   }else{ //tous les autres ages paye 30 plus 10 quand les baggages font 20 kilo
            printf("quel est le poid de vos baggages ?\n");
                scanf("%d",&poid);
            if(poid>20){
                poid=poid+10;
                prix=prix+30;
                prix=prix+poid;
            }
        }
   printf("vous devez payer %d ecus/n",prix); //le resultat des prix est affiche
   */

    /*
    //Start to play

    int arr=0;//arrivee
    int tot=0;//nombre de personne
    int i=0;//pas de 1

    do{
        printf("conbien de personne etes vous ?\n");
            scanf("%d",&arr);
        if(tot=0)
        {
            printf("la salle est vide\n");
        }
        if(tot<=0)
        {
            tot=tot-arr;
            printf("il y a actuellement %d personne\n",tot);
        }
        else
        {
            tot=tot+arr;
            printf("il y a actuellement %d personne\n",tot);
        }
    }while(tot<=250);
    printf("la salle est remplie\n");
    */

    /*
    //triangle


    int n_value=0;
    int n_rep=0;
    int i=0;

    printf("X\n");
    printf("X");
    printf("X\n");
    printf("X");
    printf("O");
    printf("X\n");
    printf("X");
    printf("O");
    printf("O");
    printf("X\n");
    printf("X");
    printf("O");
    printf("O");
    printf("O");
    printf("X\n");
    printf("X");
    printf("O");
    printf("O");
    printf("O");
    printf("O");
    printf("X");
    printf("\n\n\n");


    printf("0000000000\n");
    printf("111111111\n");
    printf("22222222\n");
    printf("333333\n");
    printf("44444\n");
    printf("5555\n");
    printf("666\n");
    printf("77\n");
    printf("8\n");
    */

    //carre

    int l=0;
    int L=0;
    int rep=0;
    int i=0;

    printf("quel est la longueur du carre ?\n");
        scanf("%d",&l);
     printf("quel est la largeur du carre ?\n");
        scanf("%d",&L);


    for(i=0;i<l;i++)
    {
        for(rep=0;rep==L;rep++)
        {
            i=l*L;
            printf("*");
        }
        printf("*\n");
    }




    return 0;
}
