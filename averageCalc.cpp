// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/12/14
// Generates 9 random numbers then uses a for loop to calculate
// the average. Uses arrays.

#include <random>
#include <array>
#include <iostream>

int main() {
    // Variables
    int randomNumber, counter, average;
    const int MAX = 10, MAX_NUM = 100, MIN_NUM = 0;
    int numberList[MAX];
    int sum = 0;

    // For loop to add the random numbers to the list
    for (counter = 0; counter < MAX; counter++) {
        // creating a random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);
        // random number variable
        randomNumber = idist(rgen);
        std::cout << "Added " << randomNumber << " To the list\n";
        numberList[counter] = randomNumber;
    }
    // For loop to calculate the sum
    for (counter = 0; counter < MAX; counter++) {
        sum += numberList[counter];
    }
    average = sum / 10;
    // Displaying the average
    std::cout << "The average is " << average << "\n";
}
