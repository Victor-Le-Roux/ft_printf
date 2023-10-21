# ft_printf

    - *%15s* : Le drapeau 15 spécifie une largeur minimale de champ de 15 caractères. Le texte "Hello" est aligné à droite, ce qui signifie qu'il y a des espaces à gauche pour atteindre la largeur minimale.

    %-10d : Le drapeau - spécifie un alignement à gauche, et 10 spécifie une largeur minimale de champ de 10 caractères pour l'entier 42. L'entier est aligné à gauche, avec des espaces à droite.

    +08i : Le drapeau + indique que le signe doit toujours être affiché, même pour les nombres positifs. Le 0 indique le remplissage avec des zéros, et 8 spécifie une largeur minimale de champ de 8 caractères pour l'entier -123. L'entier est aligné à droite, avec des zéros à gauche pour atteindre la largeur minimale.

    %.5s : Le .5 spécifie une précision de 5 caractères pour la chaîne "Hello, World!". Seuls les 5 premiers caractères sont affichés.

    %.2f : Le .2 spécifie une précision de 2 chiffres après la virgule pour le nombre à virgule flottante 3.14159. Seuls deux chiffres après la virgule sont affichés.

    %p : Le drapeau %p est utilisé pour afficher un pointeur. Il affiche la valeur hexadécimale du pointeur. Dans ce cas, l'adresse pointée est 0x12345678.

    %o : Le drapeau %o est utilisé pour afficher un nombre en octal. 077 en octal équivaut à 63 en décimal.

    +10.4f : Le + spécifie que le signe doit toujours être affiché, 10 spécifie une largeur minimale de champ de 10 caractères, et .4 spécifie une précision de 4 chiffres après la virgule pour le nombre à virgule flottante -123.456789.

    %0-15.10f : Ce cas montre un exemple de combinaison de drapeaux. 0 indique le remplissage avec des zéros, - indique un alignement à gauche, 15 spécifie une largeur minimale de champ de 15 caractères, et .10 spécifie une précision de 10 chiffres après la virgule pour le nombre à virgule flottante 3.14159.

    % #x : Le drapeau # est utilisé pour afficher un préfixe spécifique aux formats hexadécimaux. Dans ce cas, 255 est affiché en tant que 0xff.

    % d : Un espace est ajouté avant le d, ce qui signifie que si le nombre est positif, un espace sera ajouté à sa gauche. Dans ce cas, le nombre 123 est affiché avec un espace à gauche.
