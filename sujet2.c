// Structure pour modéliser un processus
typedef struct process {
  char name; // Nom du processus
  int duration;           // Durée d'exécution
  int priority;           // Priorité
} Process;

// Structure pour modéliser un ordonnanceur
typedef struct scheduler {
  Process processes; // Liste des processus en attente
  int num_processes;               // Nombre de processus en attente
} Scheduler;

void ajout_activite(Ordonnanceur *ordonnanceur, Processus processus) {
  if (ordonnanceur->nb_processus >= ordonnanceur->capacite_file) {
    printf("Erreur : la file de processus est pleine\n");
  } else {
    ordonnanceur->file_processus[ordonnanceur->nb_processus] = processus;
    ordonnanceur->nb_processus++;
  }
}

void step(struct ordonnanceur* ordonnanceur) {
    if (ordonnanceur->nb_processus == 0) {
        printf("la file est vide\n");
        return;
    }
    struct processus processus = ordonnanceur->processus[0];
}

