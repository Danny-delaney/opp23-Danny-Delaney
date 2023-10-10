#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

class Collectible
{
public:
    enum class Type
    {
        HealthPack, GoldCoin, SilverCoin, BronzeCoin
    };

    // Default construction possible
    Collectible(Type t_type = Type::HealthPack, int t_value = 0);

    int value() const;
    Type getType() const; // Add the getType function

    void setType(Type t_type);
    void setValue(int t_value);

    ~Collectible()
    {
        std::cout << "Destroying collectible with type: " << static_cast <int> (m_type) << " and value " << m_value << std::endl;
    }

private:
    Type m_type;
    int m_value;
};

Collectible::Collectible(Type t_type, int t_value)
    : m_type(t_type), m_value(t_value) {}

int Collectible::value() const
{
    return m_value;
}

Collectible::Type Collectible::getType() const // Define the getType function
{
    return m_type;
}

void Collectible::setType(Type t_type)
{
    m_type = t_type;
}

void Collectible::setValue(int t_value)
{
    m_value = t_value;
}

Collectible* generateCollectibles(int t_howMany)
{
    Collectible* arr = new Collectible[t_howMany]; // Allocate dynamic array

    // Seed the random number generator with current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    for (int i = 0; i < t_howMany; ++i) {
        // Assign a random type
        int randomType = std::rand() % 4; // Generate a random number between 0 and 3
        Collectible::Type type;
        switch (randomType) {
        case 0:
            type = Collectible::Type::HealthPack;
            break;
        case 1:
            type = Collectible::Type::GoldCoin;
            break;
        case 2:
            type = Collectible::Type::SilverCoin;
            break;
        case 3:
            type = Collectible::Type::BronzeCoin;
            break;
        }

        // Assign a random value between 1 and 100
        int randomValue = (std::rand() % 100) + 1;

        // Set the type and value for the current Collectible
        arr[i].setType(type);
        arr[i].setValue(randomValue);
    }

    return arr;
}

int main()
{
    int howMany = 5; // You can change this to the desired array size

    Collectible* collectibles = generateCollectibles(howMany); // Call the generateCollectibles function

    // Print the type and value of each Collectible
    for (int i = 0; i < howMany; ++i) {
        Collectible::Type type = collectibles[i].getType();
        int value = collectibles[i].value();

        // Print the type using a switch statement
        std::string typeString;
        switch (type) {
        case Collectible::Type::HealthPack:
            typeString = "Health Pack";
            break;
        case Collectible::Type::GoldCoin:
            typeString = "Gold Coin";
            break;
        case Collectible::Type::SilverCoin:
            typeString = "Silver Coin";
            break;
        case Collectible::Type::BronzeCoin:
            typeString = "Bronze Coin";
            break;
        }

        std::cout << "Type: " << typeString << ", Value: " << value << std::endl;
    }

    // Delete the dynamically allocated array
    delete[] collectibles;

    return 0;
}
