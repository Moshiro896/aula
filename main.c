#include <stdio.h>

float Lerp(float a, float b, float f);
float CelsiusToFahrenheit(float value);
float FahrenheitToCelsius(float value);

int main()
{
    int option;
    float value;
    
    printf("1 - Celsius -> Fahrenheit\n");
    printf("2 - Fahrenheit -> Celsius\n");
    printf("Selecione a opcao: ");
    scanf("%d", &option);
    printf("Informe o valor: ");
    scanf("%f", &value);
    if(option == 1)
    {
        printf("O resultado e: %f", CelsiusToFahrenheit(value));
    }
    else
    {
        printf("O resultado e: %f", FahrenheitToCelsius(value));
    }

    return 0;
}

float CelsiusToFahrenheit(float value)
{
    float normalized = (value + 273.0) / 373.0;
    return Lerp(-459.0, 212.0, normalized);
}

float FahrenheitToCelsius(float value)
{
    float normalized = (value + 459.0) / 671.0;
    return Lerp(-273.0, 100.0, normalized);
}

float Lerp(float a, float b, float f)
{
    return a * (1.0 - f) + (b * f);
}