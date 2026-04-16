#ifndef STRUTILS_H_
#define STRUTILS_H_

int str_taille(char *chaine);

int str_copie(char *destination, char *source, int taille_max);

int str_comparer(char *str1, char *str2);

int str_concatener(char *str1, char *str2, int taille_max);

void generer_pass(char *dest, int nb_caracteres);

void cryptage_cesar(char *message_clair, int cle, char *message_crypte);

void decryptage_cesar(char *message_crypte, int cle, char *message_clair);


#endif