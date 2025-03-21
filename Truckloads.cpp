#include "Truckloads.h"

// RecursiveTruckLoad method for calculating trucks
int RecursiveTruckLoad::calculateTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1; // Base case: one truck needed
    }

    int halfCrates = numCrates / 2;
    return calculateTrucks(halfCrates, loadSize) + calculateTrucks(numCrates - halfCrates, loadSize); // Divide and conquer
}

// Truckloads constructor
Truckloads::Truckloads(std::shared_ptr<TruckLoadStrategy> strat) : strategy(strat) {}

// Method to calculate the number of trucks
int Truckloads::numTrucks(int numCrates, int loadSize) {
    return strategy->calculateTrucks(numCrates, loadSize);
}
