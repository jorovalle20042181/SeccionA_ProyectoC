#include <stdio.h>

// Definir las tasas de cambio fijas para la conversión
#define TASA_GTQ_USD 0.13  // 1 GTQ = 0.13 USD
#define TASA_USD_GTQ 7.69  // 1 USD = 7.69 GTQ
#define TASA_GTQ_EUR 0.12  // 1 GTQ = 0.12 EUR
#define TASA_EUR_GTQ 8.33  // 1 EUR = 8.33 GTQ

// Función para convertir de Quetzales (GTQ) a Dólares (USD)
double gtq_a_usd(double cantidad) {
    return cantidad * TASA_GTQ_USD;
}

// Función para convertir de Dólares (USD) a Quetzales (GTQ)
double usd_a_gtq(double cantidad) {
    return cantidad * TASA_USD_GTQ;
}

// Función para convertir de Quetzales (GTQ) a Euros (EUR)
double gtq_a_eur(double cantidad) {
    return cantidad * TASA_GTQ_EUR;
}

// Función para convertir de Euros (EUR) a Quetzales (GTQ)
double eur_a_gtq(double cantidad) {
    return cantidad * TASA_EUR_GTQ;
}

int main() {
    int opcion;
    double cantidad, resultado;

    // Menú de opciones
    printf("Conversor de Monedas\n");
    printf("1. Convertir Quetzales (GTQ) a Dólares (USD)\n");
    printf("2. Convertir Dólares (USD) a Quetzales (GTQ)\n");
    printf("3. Convertir Quetzales (GTQ) a Euros (EUR)\n");
    printf("4. Convertir Euros (EUR) a Quetzales (GTQ)\n");
    printf("Seleccione una opción (1-4): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la cantidad en Quetzales (GTQ): ");
            scanf("%lf", &cantidad);
            resultado = gtq_a_usd(cantidad);
            printf("%.2f GTQ son equivalentes a %.2f USD.\n", cantidad, resultado);
            break;

        case 2:
            printf("Ingrese la cantidad en Dólares (USD): ");
            scanf("%lf", &cantidad);
            resultado = usd_a_gtq(cantidad);
            printf("%.2f USD son equivalentes a %.2f GTQ.\n", cantidad, resultado);
            break;

        case 3:
            printf("Ingrese la cantidad en Quetzales (GTQ): ");
            scanf("%lf", &cantidad);
            resultado = gtq_a_eur(cantidad);
            printf("%.2f GTQ son equivalentes a %.2f EUR.\n", cantidad, resultado);
            break;

        case 4:
            printf("Ingrese la cantidad en Euros (EUR): ");
            scanf("%lf", &cantidad);
            resultado = eur_a_gtq(cantidad);
            printf("%.2f EUR son equivalentes a %.2f GTQ.\n", cantidad, resultado);
            break;

        default:
            printf("Opción no válida.\n");
    }

    return 0;
}