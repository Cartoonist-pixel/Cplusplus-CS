#include <iostream>
#include <thread>
#include <chrono>
#include <random> 
#include <limits>

int main() {
int seconds = 60; // Countdown duration
while (seconds > 0) {
std::cout << "Time Remaining: " << seconds << " seconds\n";
std::this_thread::sleep_for(std::chrono::seconds(1));
--seconds;
}
std::cout << "Time's Up!\n";
std::random_device rd;  // Seed
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> dist(0, 100);

    int randomNum = dist(gen);

    std::cout << "Random Number: " << randomNum << "\n";

return 0;
}




