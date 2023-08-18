#include <iostream>
#include <vector>
#include <string>

void generateSampleSpace(std::vector<std::string> &sampleSpace, std::string outcome, int tossesLeft)
{
    if (tossesLeft == 0)
    {
        sampleSpace.push_back(outcome);
        return;
    }

    generateSampleSpace(sampleSpace, outcome + "H", tossesLeft - 1); // Head
    generateSampleSpace(sampleSpace, outcome + "T", tossesLeft - 1); // Tail
}

int main()
{
    int numberOfTosses = 3;
    std::vector<std::string> sampleSpace;

    generateSampleSpace(sampleSpace, "", numberOfTosses);

    std::cout << "Sample space for tossing a coin " << numberOfTosses << " times:\n";
    for (const std::string &outcome : sampleSpace)
    {
        std::cout << outcome << "\n";
    }

    return 0;
}
