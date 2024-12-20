
#include <iostream>
using namespace std;
int main() {
  // variable permettent de compter le nombre de place
  int nbrePlace = 10;
  // variable permettent de récupérer le choix de l'utilisateur
  int choix;
  cout << "**********Evaluation 2*************" << endl << endl;
  // partie à compléter à partir du 3.1

  do {

    std::cout << "******* Evaluation 2 ********\n";
    cout << endl;
    std::cout << "1 - Entrée dans le parking \n";
    cout << endl;
    std::cout << "2 - Nombre de places disponibles \n";
    cout << endl;
    std::cout << "3 - Sortie du parking \n";
    cout << endl;
    std::cout << "4 - Quitter\n";
      // traitement

      int choix;
      cin >> choix;

      if (choix == 1) {
        std::cout << "nbrePlaces--;\n";
      }
      if (choix == 2) {
        std::cout << " places disponibles 5 \n";
      }
      if (choix == 3) {
        std::cout << "parking \n";
      }
      if (choix == 4)
        std::cout << "4 \n";
    }
    while (choix < 4)
      ;

    return 0;
  }
