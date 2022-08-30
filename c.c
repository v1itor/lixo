#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celsius){
    return (( (double) 9 / (double) 5)*celsius)+32;
}
double dividesPerTen(double dividend){
    return dividend/10;
}
void isDigit(char ch[]) {
    for (int i = 0; i < sizeof(ch); i++)
    {
        if (isalnum(sizeof ch))
        {
            printf("eh numero");
        }
        else if (isalpha(ch[i]))
        {
            printf("eh número");
        }
    }
}
int main(int argc, char const *argv[])
{
    double celsius;
    printf("Digita um numero: ");
    scanf("%lf", &celsius);
    printf("%lf", celsiusToFahrenheit(celsius));
    printf("\n%lf", dividesPerTen(celsius));
    char frase[256];
    printf("Digite uma frase abaixo:");
    fflush(stdin);
    scanf("%c", &frase);
    printf("\n%c", frase);
    isDigit(frase);

    return 0;
}
