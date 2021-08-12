#include "ExportedFunctions.hpp"

#include <random>

namespace test_lib_for_presentation
{

std::vector<int> getRandomNumbers(const std::size_t count)
{
    // THIS IS COPY OF EXAMPLE FROM CPPREF : https://en.cppreference.com/w/cpp/numeric/random

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
    randomVector.reserve(count);

    for (std::size_t n = 0; n < count; ++n)
    {
        randomVector.emplace_back(std::lround(normal_dist(e2)));
    }

    return randomVector;
}

}
