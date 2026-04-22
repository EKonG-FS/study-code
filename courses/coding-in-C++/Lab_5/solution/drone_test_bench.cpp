#include <iostream>
#include <vector>
#include <algorithm>

#include "drone_test_bench.hpp"

int main()
{
    // Section I
    const int SIZE = 5;
    char testFrame[SIZE] = {'1', '2', '3', '4', '5'};

    if (SIZE <= 0)
    {
        std::cout << "Error: SIZE is zero or negative." << std::endl;
        return 1;
    }
    printFrame<SIZE>(testFrame);
    std::cout << min(testFrame) << std::endl;
    composeTags("Channel", "motor_temp", "Priority", 4);

    // Section II
    // Task 6
    std::vector recordedData = {42, 17, 42, 5, 99, 17, 63, 12};

    std::cout << "Print data" << std::endl;
    for (int datapoint : recordedData)
    {
        std::cout << datapoint << '\n';
    }

    std::sort(recordedData.begin(), recordedData.end());

    std::cout << "Print data" << std::endl;
    for (int datapoint : recordedData)
    {
        std::cout << datapoint << '\n';
    }

    std::vector<int>::iterator searchedValue;
    searchedValue = std::find(recordedData.begin(), recordedData.end(), 63);

    if (searchedValue == recordedData.end())
    {
        std::cout << "No value found" << std::endl;
    }
    else
    {
        std::cout << "Value exists" << std::endl;
    }

    return 0;
}