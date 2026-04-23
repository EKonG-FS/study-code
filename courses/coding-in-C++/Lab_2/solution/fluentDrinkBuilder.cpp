#include <iostream>
#include <string>

constexpr int DEFAULT_TEMP = 12;

class DrinkBuilder
{
private:
    std::string name;
    int sugar;
    int temperature = DEFAULT_TEMP;
    bool withMilk;

public:
    DrinkBuilder(const std::string &name, int sugar, int temperature, bool withMilk)
        : name(name), sugar(sugar), temperature(temperature), withMilk(withMilk) {};

    DrinkBuilder &setName(const std::string &name)
    {
        this->name = name;
        return *this;
    }

    DrinkBuilder &setSugar(int sugar)
    {
        this->sugar = sugar;
        return *this;
    }

    DrinkBuilder &setTemperature(int temperature)
    {
        this->temperature = temperature;
        return *this;
    }

    DrinkBuilder &setWithMilk(bool withMilk)
    {
        this->withMilk = withMilk;
        return *this;
    }

    const DrinkBuilder &print()
    {
        std::cout << "Name: " << this->name << '\n';
        std::cout << "Sugar: " << this->sugar << '\n';
        std::cout << "Temperature: " << this->temperature << '\n';
        std::cout << "With Milk: " << std::boolalpha << this->withMilk << '\n';

        return *this;
    }

    const DrinkBuilder &isValid()
    {
        bool issueDetected = false;

        if (sugar < 0)
        {
            std::cout << "Hey - you should add more sugar" << '\n';
            issueDetected = true;
        }
        if (temperature <= 0)
        {
            std::cout << "I have a soare throat - increase the temperature" << '\n';
            issueDetected = true;
        }

        if (!issueDetected)
        {
            std::cout << "That's perfect!" << '\n';
        }

        return *this;
    }
};

int main()
{
    DrinkBuilder drink1("Gin Tonic", 0, 15, false);
    drink1.print();

    std::cout << std::endl;

    drink1.setName("White Russian")
        .setSugar(5)
        .setTemperature(4)
        .setWithMilk(true)
        .print();

    drink1.isValid();
}
