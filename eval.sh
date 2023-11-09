#!/bin/bash

# Chemin du répertoire où chercher les fichiers
SEARCH_DIR="./"

# Fichier de sortie
OUTPUT_FILE="eval.txt"

# Vider le fichier de sortie s'il existe déjà
> "$OUTPUT_FILE"

# Trouver tous les fichiers .c et .h en ignorant le répertoire libft
find "$SEARCH_DIR" -type f \( -name "*.c" -o -name "*.h" \) ! -path "*/libft/*" -print | while read file; do
    # Écrire le nom du fichier dans eval.txt
    echo "Nom du fichier: $file" >> "$OUTPUT_FILE"
    # Ignorer les 10 premières lignes du fichier et concaténer le reste dans eval.txt
    tail -n +11 "$file" >> "$OUTPUT_FILE"
    # Ajouter un saut de ligne après le contenu du fichier
    echo -e "\n" >> "$OUTPUT_FILE"
done

echo "Tous les fichiers .c et .h hors du dossier libft ont été copiés dans $OUTPUT_FILE avec leurs noms, en ignorant les 10 premières lignes."
