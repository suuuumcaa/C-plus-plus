#include <Windows.h>
#include <iostream>
#include <string>

class MilitaryBase
{
private:
    std::string country;
    std::string name;
    bool secret;
    bool active;
    int x;
    int y;
public:
    MilitaryBase() {
        country = "";
        name = "";
        secret = false;
        active = false;
        x = 0;
        y = 0;
    }
    MilitaryBase(std::string country, std::string name, bool secret, bool active, int x, int y) {
        this->country = country;
        this->name = name;
        this->secret = secret;
        this->active = active;
        this->x = x;
        this->y = y;
    }

    std::string GetCountry() {
        return country;
    }
    void SetCountry(std::string country) {
        this->country = country;
    }

    std::string GetName() {
        return name;
    }
    void SetName(std::string name) {
        this->name = name;
    }

    bool GetSecret() {
        return secret;
    }
    void SetSecret(bool secret) {
        this->secret = secret;
    }

    bool GetActive() {
        return active;
    }
    void SetActive(bool active) {
        this->active = active;
    }

    bool GetX() {
        return x;
    }
    void SetX(int x) {
        this->x = x;
    }

    bool GetY() {
        return y;
    }
    void SetY(int y) {
        this->y = y;
    }

    void Print() {
        std::cout << std::string(30, '=') << std::endl;
        std::cout << "Country - " << country << std::endl;
        std::cout << "X - " << x << std::endl;
        std::cout << "Y - " << y << std::endl;
        std::cout << "Name - " << name << std::endl;
        std::cout << "Secret - " << secret << std::endl;
        std::cout << "Active - " << active << std::endl;
        std::cout << std::string(30, '=') << std::endl << std::endl;
    }
};

class crew
{
private:
    std::string rank;
    std::string FullName;
    std::string PhoneNumber;
    MilitaryBase* MilBase;
    bool InService;
public:
    crew() {
        rank = "";
        FullName = "";
        PhoneNumber = "";
        MilBase = nullptr;
        InService = false;
    }
    crew(std::string rank, std::string FullName, std::string PhoneNumber, MilitaryBase* MilitaryBase, bool InService) {
        this->rank = rank;
        this->FullName = FullName;
        this->PhoneNumber = PhoneNumber;
        this->MilBase = MilitaryBase;
        this->InService = InService;
    }

    std::string GetRank() {
        return rank;
    }
    void SetCountry(std::string rank) {
        this->rank = rank;
    }

    std::string GetFullName() {
        return FullName;
    }
    void SetFullName(std::string FullName) {
        this->FullName = FullName;
    }

    std::string GetPhoneNumber() {
        return PhoneNumber;
    }
    void SetPhoneNumber(std::string PhoneNumber) {
        this->PhoneNumber = PhoneNumber;
    }

    std::string GetMilitaryBase() {
        return MilBase->GetName();
    }
    void SetMilitaryBase(MilitaryBase* MilitaryBase) {
        this->MilBase = MilitaryBase;
    }

    bool GetInService() {
        return InService;
    }
    void SetPhoneNumber(bool InService) {
        this->InService = InService;
    }

    void Print() {
        std::cout << std::string(30, '=') << std::endl;
        std::cout << "Full name - " << FullName << std::endl;
        std::cout << "Rank - " << rank << std::endl;
        std::cout << "Phone number - " << PhoneNumber << std::endl;
        if (MilBase != nullptr) {
            std::cout << "Military base - " << MilBase->GetName() << std::endl;
        }
        std::cout << "In service - " << InService << std::endl;
        std::cout << std::string(30, '=') << std::endl << std::endl;
    }
};

class transport
{
private:
    int YearOfPurchase;
    std::string NumberOfTheMachine;
    std::string FullName;
    MilitaryBase* MilBase;
    crew* cr;
    bool active;
public:
    transport() {
        YearOfPurchase = 0;
        NumberOfTheMachine = "";
        FullName = "";
        MilBase = nullptr;
        cr = nullptr;
        active = false;
    }
    transport(int YearOfPurchase, std::string NumberOfTheMachine, std::string FullName, MilitaryBase* MilitaryBase, crew* crew, bool active) {
        this->YearOfPurchase = YearOfPurchase;
        this->NumberOfTheMachine = NumberOfTheMachine;
        this->FullName = FullName;
        this->MilBase = MilitaryBase;
        this->cr = crew;
        this->active = active;
    }

    int GetYearOfPurchase() {
        return YearOfPurchase;
    }
    void SetYearOfPurchase(int YearOfPurchase) {
        this->YearOfPurchase = YearOfPurchase;
    }

    std::string GetNumberOfTheMachine() {
        return NumberOfTheMachine;
    }
    void SetNumberOfTheMachine(std::string NumberOfTheMachine) {
        this->NumberOfTheMachine = NumberOfTheMachine;
    }

    std::string GetFullName() {
        return FullName;
    }
    void SetFullName(std::string FullName) {
        this->FullName = FullName;
    }

    std::string GetMilitaryBase() {
        return MilBase->GetName();
    }
    void SetMilitaryBase(MilitaryBase* MilitaryBase) {
        this->MilBase = MilitaryBase;
    }

    std::string GetCrew() {
        return cr->GetFullName();
    }
    void SetCrew(crew* crew) {
        this->cr = crew;
    }

    bool GetActive() {
        return active;
    }
    void SetActive(bool active) {
        this->active = active;
    }

    void Print() {
        std::cout << std::string(30, '=') << std::endl;
        std::cout << "Full name - " << FullName << std::endl;
        std::cout << "Number of the machine - " << NumberOfTheMachine << std::endl;
        std::cout << "Year of purchase - " << YearOfPurchase << std::endl;
        if (MilBase != nullptr) {
            std::cout << "Military base - " << MilBase->GetName() << std::endl;
        }
        if (cr != nullptr) {
            std::cout << "Crew - " << cr->GetFullName() << std::endl;
        }
        std::cout << "Active - " << active << std::endl;
        std::cout << std::string(30, '=') << std::endl << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Ru");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    MilitaryBase USAMainBase("США", "Перл-Харбор", false, true, 212143, 1575713);
    USAMainBase.Print();
    MilitaryBase USASecondBase("США", " Chievres", false, true, 215243, 2457313);
    USASecondBase.Print();
    MilitaryBase RusBase("Россия", "Московская", true, true, 753456, 2356713);
    RusBase.Print();
    MilitaryBase ChainBase("Китай", "Шанхайская_подводная", false, false, 534143, 1245713);
    ChainBase.Print();
    MilitaryBase MainChainBase("Китай", "Шанхайская_воздушная", true, true, 251143, 7555713);
    MainChainBase.Print();

    crew USAMainBaseCaptain("Главный_капитан", "Edward_York", "+16507599755", &USAMainBase, true);
    USAMainBaseCaptain.Print();
    crew USASecondBaseCaptain("Главный_капитан", "Eogan_York", "+16503529755", &USASecondBase, true);
    USASecondBaseCaptain.Print();
    crew RusCaptain("Главный_капитан", "Александр_Вовк", "+79126436243", &RusBase, true);
    RusCaptain.Print();
    crew ChainCaptain("Капитан", "Ёкита_Накамура", "+861067645489", &ChainBase, false);
    ChainCaptain.Print();
    crew MainChainCaptain("Главный_капитан", "Сян_Лян", "+865327644363", &MainChainBase, true);
    MainChainCaptain.Print();

    transport USAMainCaptainAirplane(1941, "L7075", "Альбакор", &USAMainBase, &USAMainBaseCaptain, false);
    USAMainCaptainAirplane.Print();
    transport USASecondCaptainTank(1990, "6435", "Тигр", &USASecondBase, &USASecondBaseCaptain, true);
    USASecondCaptainTank.Print();
    transport RusSanki(1945, "8635", "Катюша", &RusBase, &RusCaptain, false);
    RusSanki.Print();
    transport ChainAirplane(2000, "6452", "AIDC_AT-3", &ChainBase, &ChainCaptain, true);
    ChainAirplane.Print();
    transport MainChainTank(2003, "8784", "Type_98", &MainChainBase, &MainChainCaptain, true);
    MainChainTank.Print();
}
