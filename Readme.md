# Statistiques sur des fréquences de mots dans un texte

Ce test s'inspire d'une histoire très connue dans le monde de l'informatique: 

Donald Knuth (chercheur très connu en informatique, et inventeur de la "programmation littéraire") avait répondu à un challenge :

> Read a file of text, determine the n most frequently used words, and print out a sorted list of those words along with their frequencies

Sa réponse a été un programme de plusieurs milliers de lignes, probablement très beau, très intelligent et bien documenté. 

## Votre mission 

Travailler sur un programme qui permette de faire ce qui est demandé, et qui soit - on l'espère ! - plus court que celui de Donal Knuth.

## Indice

Douglas McIlroy a de son côté répondu au challenge par un programme de 6 lignes en bash, 
ultra-compréhensible et intuitif (pour peu qu'on connaisse un peu bash et unix) :

````bash
tr -cs A-Za-z '\n' |
tr A-Z a-z |
sort   |
uniq -c |
sort -rn |
head -50
````

Essayez-le:

````
cat data/Othello.txt | ./count_words.sh
````


Pour en savoir plus sur ce sujet : https://franklinchen.com/blog/2011/12/08/revisiting-knuth-and-mcilroys-word-count-programs/

## Questions

- Expliquer le fonctionnement du programme shell ci-dessus.
- Essayer de reproduire tout ou partie en C++. On s'appuiera sur [FunctionalPlus](https://github.com/Dobiasd/FunctionalPlus/) 
pour gagner du temps.
- Faire un programme "à la unix", c'est à dire qui sache lire ses données sur stdin
et écrire son résultat sur stdout.

#### Difficultés supplémentaire et contexte:
* l'utilisation de boucles `for()` est *découragée* dans ce test
* vous pourrez écrire des test unitaires (voir le fichier _count_words_test.cpp)
* vous avez à disposition une librairie "fonctionnelle" permettant d'écrire en mode fonctionnel en C++: `FunctionalPlus`.
    
> Note: C'est un des buts du tests de voir votre réaction face à un environnement nouveau.
