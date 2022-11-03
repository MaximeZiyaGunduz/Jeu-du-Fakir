"""
Programme réalisé par GUNDUZ Maxime

Vous pouvez tester directement le code en cliquant sur le lien ci-dessous:

https://colab.research.google.com/drive/1bsLsRq1s8tYQjUkKvigs0XUBGoT1ISig?usp=sharing

Code disponible sur mon Github: 

https://github.com/MaximeZiyaGunduz/Jeu-du-Fakir

"""

from random import randint

#ENTER DANS LA BOUCLE
jouer=True

#GENERATION DU NOMBRE ALEATOIRE ENTRE 1 ET 100
nb_genered=randint(1, 100)
i=1

#1ER DEMANDE DE NOMBRE AU USER
choix= int(input(print("Veuillez choisir un nombre entre 1 et 100 ")))

while jouer==True:  
    
    # C'est PLUS
    if nb_genered>choix:
        choix= int(input(print("Nombre de tour ",i,"\n C'EST PLUS, Veuillez choisir un nombre entre 1 et 100 ")))
        i+=1

    # C'est MOINS
    elif nb_genered<choix:
        choix= int(input(print("Nombre de tour ",i,"\n C'EST MOINS, Veuillez choisir un nombre entre 1 et 100 ")))
        i+=1 
          
    # C'est GAGNER, Choix Rejouer
    else:
        print("Vous avez gagner")
        jouer=False  #SORTIR DE LA BOUCLE
        rejouer = input(print("Voulez vous rejouer o/n ?"))
        if rejouer=="o":    
          nb_genered=randint(1, 100)  #RE-GENENER UN NB
          i=1
          jouer=True  #RE-RENTRER DANS LA BOUCLE
          choix= int(input(print("Veuillez choisir un nombre entre 1 et 100 ")))