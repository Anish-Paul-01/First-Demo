#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter any number to repeat 'Hello World!': ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Hello World! \n");
    }
    
    return 0;
}
