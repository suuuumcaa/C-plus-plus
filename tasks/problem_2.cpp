#include <Windows.h>
#include <iostream>
#include <string>

class Person
{
private:
    std::string FullName;
    std::string country;
    std::string PhoneNumber;
    Person* mother;
    Person* father;
    int height;
    int weight;
public:
    Person() {
        FullName = "";
        height = 0;
        weight = 0;
        country = "";
        PhoneNumber = "";
        mother = nullptr;
        father = nullptr;
    }
    Person(std::string FullName, int height, int weight, std::string country, std::string PhoneNumber) {
        this->FullName = FullName;
        this->height = height;
        this->weight = weight;
        this->country = country;
        this->PhoneNumber = PhoneNumber;
        mother = nullptr;
        father = nullptr;
    }

    std::string GetFullName() {
        return FullName;
    }
    void SetFullName(std::string FullName) {
        this->FullName = FullName;
    }

    int GetHeight() {
        return height;
    }
    void SetHeight(int height) {
        this->height = height;
    }

    int GetWeight() {
        return weight;
    }
    void SetWeight(int weight) {
        this->weight = weight;
    }

    std::string GetCountry() {
        return country;
    }
    void SetCountry(std::string country) {
        this->country = country;
    }

    std::string GetPhoneNumber() {
        return PhoneNumber;
    }
    void SetPhoneNumber(std::string PhoneNumber) {
        this->PhoneNumber = PhoneNumber;
    }

    std::string GetMother() {
        return mother->GetFullName();
    }
    void SetMother(Person *mother) {
        this->mother = mother;
    }

    std::string GetFather() {
        return father->GetFullName();
    }
    void SetFather(Person* father) {
        this->father = father;
    }

    void Print() {
        std::cout << std::string(30, '=') << std::endl;
        std::cout << "Full name - " << FullName << std::endl;
        std::cout << "Height - " << height << std::endl;
        std::cout << "Weight - " << weight << std::endl;
        std::cout << "Country - " << country << std::endl;
        std::cout << "Phone number - " << PhoneNumber << std::endl;
        if (mother != nullptr) {
            std::cout << "Mother - " << mother->GetFullName() << std::endl;
        }
        if (father != nullptr) {
            std::cout << "Father - " << father->GetFullName() << std::endl;
        }
        std::cout << std::string(30, '=') << std::endl << std::endl;
    }

    bool IsMoreThan150CmTall() {
        if (height > 150) {
            return true;
        } else {
            return false;
        }
    }

    bool HasAWeightLessThan80Kg() {
        if (weight < 80) {
            return true;
        } else {
            return false;
        }
    }

    bool IsThePhoneNumberCorrect() {
        if (PhoneNumber.length() == 12 && PhoneNumber[0] == '+') {
            return true;
        } else {
            return false;
        }
    }
};

void PrintData(std::string *FullName, std::string *country, std::string *PhoneNumber, int *height, int *weight)
{
    std::cout << "Enter full name ";
    std::cin >> *FullName;

    std::cout << "Enter height ";
    std::cin >> *height;

    std::cout << "Enter weight ";
    std::cin >> *weight;

    std::cout << "Enter country ";
    std::cin >> *country;

    std::cout << "Enter phone number ";
    std::cin >> *PhoneNumber;
}

int main()
{
    setlocale(LC_ALL, "Ru");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::string FullName;
    std::string country;
    std::string PhoneNumber;
    int height;
    int weight;

    std::cout << std::endl << "Enter information about the father of the family" << std::endl;
    PrintData(&FullName, &country, &PhoneNumber, &height, &weight);
    Person father(FullName, height, weight, country, PhoneNumber);
    if (father.IsMoreThan150CmTall()) {
        std::cout << "Height > 150 sm" << std::endl;
    } else {
        std::cout << "Height <= 150 sm" << std::endl;
    }

    std::cout << std::endl << "Enter information about the mother of the family" << std::endl;
    PrintData(&FullName, &country, &PhoneNumber, &height, &weight);
    Person mother(FullName, height, weight, country, PhoneNumber);
    if (mother.HasAWeightLessThan80Kg()) {
        std::cout << "Weight < 80 kg" << std::endl;
    } else {
        std::cout << "Weight >= 80 kg" << std::endl;
    }


    std::cout << std::endl << "Enter the details of the son of the family" << std::endl;
    PrintData(&FullName, &country, &PhoneNumber, &height, &weight);
    Person son(FullName, height, weight, country, PhoneNumber);
    if (son.IsThePhoneNumberCorrect()) {
        std::cout << "Phone number correct" << std::endl;
    }
    else {
        std::cout << "Phone number no correct" << std::endl;
    }
    son.SetFather(&father);
    son.SetMother(&mother);
    son.Print();
}
