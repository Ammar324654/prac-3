#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <memory>

// Abstract class defining the truck loading strategy
class TruckLoadStrategy {
public:
    virtual int calculateTrucks(int numCrates, int loadSize) = 0;
    virtual ~TruckLoadStrategy() = default;
};

// Recursive strategy for calculating truckloads
class RecursiveTruckLoad : public TruckLoadStrategy {
public:
    int calculateTrucks(int numCrates, int loadSize) override;
};

// Class that calculates the truckloads using a given strategy
class Truckloads {
private:
    std::shared_ptr<TruckLoadStrategy> strategy;

public:
    // Constructor takes a strategy
    Truckloads(std::shared_ptr<TruckLoadStrategy> strat);

    // Method to calculate the number of trucks
    int numTrucks(int numCrates, int loadSize);
};

#endif // TRUCKLOADS_H
