#include <stdio.h>

// This is a demo code for the first Repository

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter any number to repeat 'Hello World!': ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Hello World! \n");
        printf("\n");
    }
    printf("We are Going to say 'Namaste World!' \n");
    printf("\n");
    for (int i = 0; i < (2 * n); i++)
    {
        printf("Namaste World! This is INDIA \n");
        printf("\n");
    }

    return 0;
}
