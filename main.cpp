#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>

void bs_print(const char* text) {
    std::cout << text << std::endl;
}

void bs_timeout(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void bs_pause() {
    bs_print("Press any key to continue...");
    std::cin.get(); // Oczekuje na naciśnięcie dowolnego przycisku
}

void website(const char* url) {
    std::string command = "start ";
    command += url;
    int result = system(command.c_str());
    if (result == -1) {
        bs_print("Error opening website!");
    }
}

int main() {
    return 0;
}
