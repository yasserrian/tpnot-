#include <stdio.h>

typedef struct {
    int accomodates;
    int bedrooms;
    int bathrooms;
    int beds;
    int price;
    int minimumnights;
    int maximumnight;
    int numberofreviews;
} Logement;

double distance(Logement x, Logement y) {
    return sqrt(pow(x.accomodates-y.accomodates,2)+ pow(x.bedrooms-y.bedrooms,2)+ pow(x.bathrooms-y.bathrooms,2)+pow(x.beds-y.beds,2)+pow(x.price-y.price,2)+pow(x.minimumnights-y.minimumnights,2)+pow(x.maximumnight-y.maximumnight,2)+pow(x.numberofreviews-y.numberofreviews,2))
}

#include <stdlib.h>
#include <time.h>

#include <stdlib.h>
#include <time.h>

// Taille du tableau de logements
#define N 8

int main(void)
{
    // Tableau de logements
    int logement[N];

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau de logements avec des valeurs initiales
    for (int i = 0; i < N; i++)
    {
        logement[i] = i;
    }

    // Randomisation du tableau de logements
    for (int i = 0; i < N; i++)
    {
        // Génération d'un entier aléatoire entre 0 et N-1
        int r = rand() % N;

        // Echange des éléments du tableau à l'indice i et r
        int temp = logement[i];
        logement[i] = logement[r];
        logement[r] = temp;
    }

    // Affichage du tableau de logements randomisé
    for (int i = 0; i < N; i++)
    {
        printf("%d ", logement[i]);
    }

    return 0;
}

// Fonction de comparaison pour qsort
int compareLogements(const void* x, const void* y) {
  Logement* l1 = (Logement*)x;
  Logement* l2 = (Logement*)y;
  return (l1->accomodates - l2->accomodates);
}

  // Trie du tableau en utilisant qsort
  qsort(Logement, 8, sizeof(Logement), compareLogements);

}

int selected[k];
for (int i = 0; i<k; i++) {;
    selected[i]= Logement[i]
}

int sum = 0;
for (int i = 0; i<k;i++) {
    sum+= selected[i;]
}
double average = (double)sum / k;