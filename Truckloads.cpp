#include <iostream>

class Truckloads {
public:
    int numTrucks(int numCrates, int loadSize) {
        // Base case: If the number of crates is less than or equal to the load size, one truck is needed
        if (numCrates <= loadSize) {
            return 1;
        }
        
        // Recursive case: Divide crates in half and calculate trucks needed for each half
        int halfCrates = numCrates / 2;
        int trucks = 0;
        
        // For each half, calculate trucks and divide further if necessary
        while (halfCrates > 0) {
            trucks += numTrucks(halfCrates, loadSize);  // Call recursively for the divided pile
            halfCrates = halfCrates / 2;  // Keep dividing further
        }
        
        return trucks;
    }
};

int main() {
    Truckloads t;
    
    int numCrates = 14;
    int loadSize = 3;
    std::cout << "Number of trucks required: " << t.numTrucks(numCrates, loadSize) << std::endl;
    
    return 0;
}

