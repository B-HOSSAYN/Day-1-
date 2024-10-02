// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int temperature;
    printf("Entrez la température en Celsius: ");
    scanf("%d", &temperature);

    // 2D array to store the states as strings
    char states[3][10] = {"Solide", "Liquide", "Gaz"};
    int thresholds[] = {0, 100};

    // Calculate the index based on the temperature comparison with thresholds
    int state_index = (temperature >= thresholds[0]) + (temperature >= thresholds[1]);

    // Print the state based on the calculated index
    printf("%s\n", states[state_index]);

    return 0;
}