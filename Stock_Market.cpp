#include <iostream>
#include <thread>
#include <chrono>
#include <random> 
#include <limits>

int main() {
float base = 250; // starting price    
int seconds = 5; // Countdown duration
while (seconds > 0) {
std::cout << "Time Remaining: " << seconds << " seconds\n";
std::this_thread::sleep_for(std::chrono::seconds(1));
--seconds;
}
std::cout << "Time's Up!\n";
std::random_device rd;  // Seed
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> dist(-100, 100);

    int randomNum = dist(gen);

    std::cout << "Random Number: " << randomNum << "\n";

    int percentage = randomNum;

    std::cout << percentage << "%\n";// percentage growth for stock

    float priceChange = base * (percentage / 100.0f);
    float newPrice = base + priceChange;

    std::cout << newPrice;
return 0;
}
