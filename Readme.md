# Statistiques sur des fréquences de mots dans un texte

Ce test s'inspire d'une histoire très connue dans le monde de l'informatique: 

Donald Knuth (chercheur très connu en informatique, et inventeur de la "programmation littéraire") avait répondu à un challenge :

> Read a file of text, determine the n most frequently used words, and print out a sorted list of those words along with their frequencies

Sa réponse a été un programme de plusieurs milliers de lignes, probablement très beau, très intelligent et bien documenté. 

## Votre mission 

Travailler sur un programme qui permette de faire ce qui est demandé, et qui soit - on l'espère ! - plus court que celui de Donal Knuth.

Vous disposer d'un fichier [data/Othello.txt](data/Othello.txt).
Sur ce fichier, un tel programme devra renvoyer quelque chose comme:

````
 899 i
 793 and
 759 the
 625 to
 494 you
 472 of
 449 a
 427 my
 396 that
 359 iago
 339 in
 332 othello
````

Essayez-le:

````
cat data/Othello.txt | ./count_words
````

## Questions

### Questions générales
* Que pensez-vous du nom que j'ai donné ("count_words") 
* Critiquer le code des différents fichiers. Corriger si nécessaire. Quid de l'ordre des includes ?

* Expliquer et critiquer l'archi du projet. 
* Comment structureriez-vous un projet de grande envergure avec x lib de différents niveaux, des tests unitaires par lib, et des exe
  (structures des répertoires et des projets, nommages des projet et fichier, gestion des dépendances, etc.)
* Quels outils mettriez vous en place ?

> Vous aurez à disposition une librairie "fonctionnelle" permettant d'écrire en mode fonctionnel en C++: `FunctionalPlus`.
> Sa documentation est disponible ici: http://www.editgym.com/fplus-api-search/
> Note: C'est un des buts du tests de voir votre réaction face à un environnement nouveau.

* Rechercher par exemple les items ci-dessous et expliquer les résultats trouvés
  *  `(a,[a])->Bool` 
  * `([a],[b])->[(a,b)]`
  * show 

- Le test unitaire ne fonctionne pas. Le réparer.
  Pour ceci, on peut s'appuyer sur la doc de FunctionalPlus disponible ici: http://www.editgym.com/fplus-api-search/

- On aura besoin d'une fonction qui sache lire un fichier texte et retourne son contenu. 
  Proposer différentes signatures pour cette fonction (au moins 5), et expliquer leurs avantages / inconvénients.


### Codage
- Expliquer ligne à ligne le fonctionnement du programme shell
- Essayer de reproduire tout ou partie en C++. On s'appuiera sur [FunctionalPlus](https://github.com/Dobiasd/FunctionalPlus/) 
pour gagner du temps.
- Faire un programme "à la unix", c'est à dire qui sache lire ses données sur stdin et écrire son résultat sur stdout.
- l'utilisation de boucles `for()` est *découragée* dans ce test, et ce sera un avantage. Pourquoi ?

Vous pourrez écrire des test unitaires (voir le fichier count_words_test.cpp).
    
