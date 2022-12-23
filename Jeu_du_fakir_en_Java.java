import java.util.Scanner;
import java.util.Random;

public class Main {
  public static void main(String[] args) {
    int nbGenered, nbEntrer;
    int i = 0;

    Random random = new Random();
    nbGenered = random.nextInt(100) + 1;
    Scanner scanner = new Scanner(System.in);

    System.out.println("Le nombre a étais généré, \n\nVous pouvez commencer à devine le nombre \n\nQuelle nombre à étais généré entre 1 et 100 ?");
    nbEntrer = scanner.nextInt();

    while (nbEntrer < 1 || nbEntrer > 100) {
      System.out.println("Le nombre entrer ne correspond pas, veuillez entrer un nombre entre 1 et 100\n\n");
      nbEntrer = scanner.nextInt();
    }

    do {
      i++;

      if (nbGenered > nbEntrer) {
        System.out.println("Tour numero " + i);
        System.out.println("C'est plus !\n\nVeuillez entrer un nombre\n\n");
        nbEntrer = scanner.nextInt();

        while (nbEntrer < 1 || nbEntrer > 100) {
          System.out.println("Le nombre entrer ne correspond pas, veuillez entrer un nombre entre 1 et 100\n\n");
          nbEntrer = scanner.nextInt();
        }
      } else if (nbGenered < nbEntrer) {
        System.out.println("Tour numero " + i);
        System.out.println("C'est moins !\n\nVeuillez entrer un nombre\n\n");
        nbEntrer = scanner.nextInt();

        while (nbEntrer < 1 || nbEntrer > 100) {
          System.out.println("Le nombre entrer ne correspond pas, veuillez entrer un nombre entre 1 et 100\n\n");
          nbEntrer = scanner.nextInt();
        }
      } else {
        System.out.println("Bravo, vous avez trouve le nombre !!!");
      }
    } while (nbEntrer != nbGenered);
  }
}
