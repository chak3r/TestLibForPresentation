#include "ExportedFunctions.hpp"

#include <random>

namespace test_lib_for_presentation
{

std::vector<int> getTenRandomNumbers(const std::size_t size)
{

    // Seed with a real random value, if available
    std::random_device r;
 
    // Choose a random mean between 1 and 6
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, 6);
    int mean = uniform_dist(e1);
 
    // Generate a normal distribution around that mean
    std::seed_seq seed2{r(), r(), r(), r(), r(), r(), r(), r()}; 
    std::mt19937 e2(seed2);
    std::normal_distribution<> normal_dist(mean, 2);
 
    std::vector<int> randomVector;
    randomVector.reserve(size);    

    for (std::size_t n = 0; n < size; ++n) {
        randomVector.emplace_back(std::round(normal_dist(e2)));
    }

    return randomVector;
}

}
