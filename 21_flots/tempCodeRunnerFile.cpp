cin.clear() ; // Débloque cin si bloqué à la précédente boucle
    cin.ignore(INT_MAX, '\n') ; // force cin à ignorer les INT_MAX caractère après la position actuelle OU jusqu'à rencontrer '\n'