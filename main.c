#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
Pour l'exercice vous aurez besoin de generer des entiers aléatoire : rand() renvoit un entier aléatoire.
il s'utilise : rand() % NOMBREMAX + 1 
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2
voir dans la methode main.
*/




// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls

int generer(int m , int n)
    {
    int i = 0;

    for(i= 0; i < 10; i++)
    {
        printf("%d\n", 1 + rand()%9);
    }

}

// Ce lien vous sera utile : https://www.geeksforgeeks.org/pass-2d-array-parameter-c/
void print(int *arr, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        printf("%d ", *((arr+i*n) + j));
}
 
int grille()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
 
    // We can also use "print(&arr[0][0], m, n);"
    print((int *)arr, m, n);
    return 0;
}

/*Écrire une fonction saisir() qui demande à l’utilisateur de saisir au clavier les indices i et j et la valeur v à placer à l’emplacement (i,j).
La fonction doit vérifier la validité des indices et de la valeur.
Si la case n’est pas occupée, la valeur doit être placée dans la grille. remplissage est alors incrémentée*/
int saisir()
{ 
    int i, j, v; 


printf("Entrez trois nombres : "); 
scanf("%d%d%d", &i, &j, &v); 
}





    
/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/

bool verifierLigneColonne(int grille[9][9], int ligne, int colonne, int nombre)
{
    
    for (int i = 0; i < 9; i++) {
        if (grille[ligne][i] == nombre) {
            return false;
        }
    }
   
    for (int i = 0; i < 9; i++) {
        if (grille[i][colonne] == nombre) {
            return false;
        }
    }
}


/*
Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
et qui renvoie 1 si la région est correctement remplie, 0 sinon.
*/
 int verifierRegion(int grille[9][9], int ligne, int colonne, int nombre)
{
    int regionLigne = (ligne / 3) * 3;
    int regionColonne = (colonne / 3) * 3;
    for (int i = regionLigne; i < regionLigne + 3; i++) {
        for (int j = regionColonne; j < regionColonne + 3; j++) {
            if (grille[i][j] == nombre) {
                printf("0");
            }
            else printf("1");
        
        }
    }
}



//Écrire la fonction verifierGrille() qui renvoie 1 si la grille est correctement remplie et 0 sinon

int verifierGrille();



//Écrire le programme principal, en supposant que la seule condition d’arrêt est la réussite du sudoku (ce test ne devra être fait que si nécessaire)


int main(){
    // Ne pas toucher le code entre les commentaires
    srand( time( NULL ) );


    int i, j, k;
    int solution[9][9];
    printf("SOLUTION");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    for(j=0;j<9; ++j) 
    {
    for(i=0; i<9; ++i)
        solution[j][i] = (i + j*3 +j /3) %9 +1 ; 
    }
    
    for(i=0;i<9; ++i) 
    {
    for(j=0; j<9; ++j)
        printf("%d ", solution[i][j]);
    printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n");  
    //toucher le code entre les commentaires 
    
    printf("%d",rand() % 2);
    
  



    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}

