#include <stdio.h>
#include <math.h> 

int main(void)
{
    float AB; //on déclare les variable correspondant au longueur des coté du triangle
    float BC;
    float AC;
    float AC2; //AC2 est AC au carré
    
    
    printf("Quel est la longueur de AB en cm ? "); 
    scanf("%f", &AB); // il faut entré la longueur du coté AB en cm
    printf("Quel est la longueur de BC en cm ? ");
    scanf("%f", &BC); // il faut entré la longueur du coté BC en cm
        
    AC2 = (AB * AB) + (BC * BC); //théorème de pythagore
    AC = sqrt(AC2); //on utilise sqrt pour calculé la racine carré de AC2
        
    printf("La longueur de l'hypoténuse AC est de : %f \n", AC); // on imprime la longueur de l'hypoténuse en cm
    
}