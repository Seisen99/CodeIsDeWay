#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main () {

  int UserAge = 0 ;
  long long int AgeInSeconds = 0 ;
  int wannaplay = 0 ;
  int PlayAgain = 0;
  long long int AgeInMinutes = 0 ;
  int DogAge = 0 ;
  long int KeplerAge = 0 ;
  int RelativeAge = 0 ;

  printf("Hello !\n\n");
  printf("Voulez-vous connaître l'équivalent de votre âge...\n\n\n");
  printf("EN SECONDES???\n\n\n");
  printf("Tapez 1 pour OUI ou 2 pour NON\n");
  scanf("%d", &wannaplay);


  do {

    if (wannaplay == 1) {

      printf("\nChanmé ! Rentrez votre âge :\n");
      scanf("%d", &UserAge);

      AgeInSeconds = UserAge * (60*60*24*365) ;
      AgeInMinutes = UserAge * (60*24*365) ;
      DogAge = UserAge / 7 ;
      KeplerAge = (UserAge * AgeInMinutes)/4206942 ;

      printf("T'as vécu %lld secondes déjà... Mais j'espère qu'il t'en reste encore un paquet !! :D\n", AgeInSeconds);
      printf("Tu veux ton âge en minutes ? Tape 1 !\n");
      printf("En année de chien? Tape 2 !\n");
      printf("Ton âge sur Kepler-1552b ? Tape 3...\n");
      scanf("%d", &RelativeAge);

      switch (RelativeAge) {

        case 2 :
        printf("Ça fait %d années de chien... WOUF!\n", DogAge);
        break ;
        case 1 :
        printf("Déjà %lld minutes écoulées dans l'horloge de ta vie, Tic, Tac...\n", AgeInMinutes);
        break ;
        case 3 :
        printf("Zgorblug l'ami, tu as %ld boulfir! Quel vieux zbourglab tu es, HAHA !\n", KeplerAge);
        break ;

      }


      printf("Souhaites-tu rejouer? Tapes 1 pour oui, et 2 pour non l'ami !\n");
      scanf("%d", &PlayAgain);

    }

    else if (wannaplay == 2) {
      printf("Dommage ! Adieu\n");
    }

    else {
      printf("1 ou 2 Mamen, le reste n'est que fioriture... Adieu !\n");
    }

  } while (PlayAgain == 1) ;

  if (PlayAgain == 2)
  printf("À une prochaine alors ;)\n");



  return 0 ;

}
