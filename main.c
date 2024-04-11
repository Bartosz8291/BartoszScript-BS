#include <stdio.h>
#include <stdlib.h>

void bs_print(const char* text) {
    printf("%s\n", text);
}

void bs_timeout(int seconds) {
    int milliseconds = seconds * 1000;
    usleep(milliseconds * 1000); // Usypia wątek na określoną liczbę milisekund
}

void bs_pause() {
    bs_print("Press any key to continue...");
    getchar(); // Oczekuje na naciśnięcie dowolnego przycisku
}

void website(const char* url) {
    char command[1000];
    sprintf(command, "start %s", url);
    int result = system(command);
    if (result == -1) {
        bs_print("Error openning website");
    }
}

int main();{
return 0;
}
