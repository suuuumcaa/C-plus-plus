#include <iostream>

class ElectricalCircuit
{
private:
    int Voltage;
    int Resistance;
public:
    ElectricalCircuit() {
        Voltage = 0;
        Resistance = 0;
    }
    ElectricalCircuit(int Voltage, int Resistance) {
        this->Voltage = Voltage;
        this->Resistance = Resistance;
    }

    int GetVoltage() {
        return Voltage;
    }
    void SetVoltage(int Voltage) {
        this->Voltage = Voltage;
    }

    int GetResistance() {
        return Resistance;
    }
    void SetResistance(int Resistance) {
        this->Resistance = Resistance;
    }

    void PrintVoltageAndResistance() {
        std::cout << "Voltage = " << Voltage << "\tResistance = " << Resistance << std::endl;
    }

    void CalculateCurrentValue() {
        std::cout << "Current valuee = " << (double)Voltage/(double)Resistance << std::endl;
    }
};


int main()
{
    int Voltage;
    int Resistance;

    std::cout << "Enter voltage ";
    std::cin >> Voltage;

    std::cout << "Enter resistance ";
    std::cin >> Resistance;

    ElectricalCircuit MainCircuit(Voltage, Resistance);
    MainCircuit.CalculateCurrentValue();
}
