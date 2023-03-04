// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// WindowsProject1.cpp : Defines the entry point for the application.
//



#include <iostream>
#include <string>
#include <vector>



struct Food
{
    std::string name;
    int calories;
};

Food foodList[] = {
    {"Apple", 52},
    {"Banan", 89},
    {"Bread", 79},
    {"Chiken", 215},
    {"Meal", 250},
    {"Rise", 130},
};

int main()
{
    std::vector<Food> foods;

    std::string input;
    do
    {
        std::cout << "Enter product name (or 'stop' to complete):";
        std::getline(std::cin, input);

        if (input != "stop")
        {
            bool found = false;
            for (const auto& food : foodList)
            {
                if (food.name == input)
                {
                    foods.push_back(food);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                std::cout << "Product not found, try again.\n";
            }
        }
    } while (input.compare(input) != 'stop');

    int totalCalories = 0;
    for (const auto& food : foods)
    {
        totalCalories += food.calories;
    }
    std::cout << "You have consumed " << totalCalories << "calories today.\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
