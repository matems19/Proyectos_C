#include <stdio.h>

int main() {
    // Usamos float porque el 30% seguro da decimales
    char nombre[50]; 
    float materiales, mano_de_obra, total;

    printf("--- MP COMPUTACION - SISTEMA DE PRESUPUESTOS ---\n");

    printf("Ingrese el nombre del cliente: ");
    scanf("%s", nombre); // Sin el & para texto

    printf("Ingrese el costo del material ($): ");
    scanf("%f", &materiales); // %f para floats

    // Calculamos la mano de obra como el 30% del material
    // IMPORTANTE: Se usa punto (0.30), no coma.
    mano_de_obra = materiales * 0.60;
    
    total = materiales + mano_de_obra;

    printf("\n========================================\n");
    printf("Cliente: %s\n", nombre);
    printf("Costo Materiales: $%.2f\n", materiales);
    printf("Mano de Obra (30%%): $%.2f\n", mano_de_obra);
    printf("----------------------------------------\n");
    printf("TOTAL A COBRAR: $%.2f\n", total);
    printf("========================================\n");

    return 0;
}