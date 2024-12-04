#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *ChargerChaine(int N);
int Longueur(char *ch);
void InverserTab(char Tab], char T[], int m);
void ChargerTab(char *p, char Tab[]);
void AfficherTab(char Tab[], int m);
int main(){
char *ch; int n; printf(" veuillez saisir la taille maximale de la chaine:\n");
scanf("%d",&n); ch=ChargerChaine(n);
int m=Longueur(ch);
charTab[m], T[m];
ChargerTab(ch, Tab);
AfficherTab(Tab,m);
InverserTab (Tab, T,m);
AfficherTab(T,m);
free(ch);
return 0;
}
