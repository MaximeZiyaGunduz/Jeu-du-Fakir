#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//##################################################################################################

//Programme réalisé par GUNDUZ Maxime

//Code disponible sur mon Github: https://github.com/MaximeZiyaGunduz/Jeu-du-Fakir

//##################################################################################################

int main(){
    
    int nb_genered, nb_entrer;
    static int i;
    
    /* Debut de generation d'un nombre aléatoire entre 1 et 100*/
    const int Max = 100, Min = 1;
    
    srand(time(NULL));
    nb_genered = (rand() % (Max - Min + 1)) + Min;
    
    /*Fin de generation d'un nombre aléatoire entre 1 et 100 */
     
    /* Debut Choix de l'utilisateur */ 
    
    printf("Le nombre a étais généré, \n\nVous pouvez commencer à devine le nombre \n\nQuelle nombre à étais généré entre 1 et 100 ?\n\n");
    
    scanf("%d",&nb_entrer);
    
    while(0>nb_entrer || nb_entrer>100){
         printf("Le nombre entrer ne correspond pas, veuillez entrer un nombre entre 1 et 100\n\n");
         scanf("%d",&nb_entrer);
    }
    
    /* Fin du Choix de l'utilisateur */
    
    
    /* DEBUT MAIN CONDITION*/
    do{
        
       i+=1;
       
        if (nb_genered > nb_entrer)
        {
            printf("Tour numero %d\n",i);
            printf("C'est plus !\n\nVeuillez entrer un nombre\n\n");
            scanf("%d",&nb_entrer);
    
            while(0>nb_entrer || nb_entrer>100){
                printf("Le nombre entrer ne correspond pas, veuillez entrer un nombre entre 1 et 100\n\n");
                scanf("%d",&nb_entrer);
                
            }
        }
        else if (nb_genered < nb_entrer){
            printf("Tour numero %d\n",i);
            printf("C'est moins !\n\nVeuillez entrer un nombre\n\n");
             scanf("%d",&nb_entrer);
    
            while(0>nb_entrer || nb_entrer>100){
                printf("Le nombre entrer ne correspond pas, veuillez entrer un nombre entre 1 et 100\n\n");
                scanf("%d",&nb_entrer);
                
            }
        }
        
        else{
            printf ("Bravo, vous avez trouve le nombre !!!\n\n");
        }
    }while(nb_entrer != nb_genered);
    
    /* FIN MAIN CONDITION*/
    
    return 0;
}