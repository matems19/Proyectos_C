#include <stdio.h>
int main(){
    float v,i,r;
    printf("Ingresa el valor del Voltaje(V): ");
    scanf("%f",&v);
    printf("Ingresa el valor de la resistencia(Ω): ");
    scanf("%f",&r);
    if(r!=0){
        i=v/r;
        printf("La corriente es: %.2f A", i);
    } 
    else {
        printf("Error: La resistencia no puede ser cero.");
    }
    return 0;
}