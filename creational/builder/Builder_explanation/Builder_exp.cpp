
#include <string>
#include <iostream>

//product
class   Computer {
    std::string _cpu;
    std::string _ram;
    std::string _storage;
    public:
        void    setCPU(const std::string& cpu) { _cpu = cpu; }
        void    setRAM(const std::string& ram) { _ram = ram; }
        void    setStorage(const std::string& storage) { _storage = storage; }
        void    showSpecs() const {
            std::cout << "CPU: " << _cpu << std::endl;
            std::cout << "RAM: " << _ram << std::endl;
            std::cout << "STORAGE: " << _storage << std::endl;
        }
};

//Abstract Builder
class   ComputerBuilder {
    protected:
        Computer    *computer;
    public:
        ComputerBuilder() : computer(new Computer) {}
        Computer    *getResult() { return computer; }

        virtual void    buildCPU() = 0;   
        virtual void    buildRAM() = 0;   
        virtual void    buildStorage() = 0;
        virtual ~ComputerBuilder() {}   
};

//Concrete Builder
class   GamingComputerBuilder : public ComputerBuilder {
    public:
        void    buildCPU() {computer->setCPU("High-end CPU");}
        void    buildRAM() {computer->setRAM("32GB RAM");}
        void    buildStorage() {computer->setStorage("2TB SSD");}
};

//Director
class ComputerAssembler {
    ComputerBuilder*    builder;
    public:
        void    setBuilder(ComputerBuilder* newBuilder) {
            builder = newBuilder;
        }
        Computer*   constructComputer() {
            builder->buildCPU();
            builder->buildRAM();
            builder->buildStorage();
            return builder->getResult();
        }
};

int main() {
    ComputerAssembler assembler;
    GamingComputerBuilder gamingBuilder;

    assembler.setBuilder(&gamingBuilder);
    Computer *gamingPC = assembler.constructComputer();
    gamingPC->showSpecs();
    delete gamingPC;
    return EXIT_SUCCESS;
}
/*
    The Builder Pattern is a creational design pattern that lets you construct complex objects step by step. It's particularly useful when you need to create an object with numerous possible configurations.
    Key components of the Builder pattern:

    The Product: The complex object being built
    The Builder: Abstract interface for creating parts of the Product
    The Concrete Builder: Implements the Builder interface to construct and assemble parts
    The Director: Constructs the object using the Builder interface

Real-world analogy: Think of ordering a custom computer. 
    Rather than dealing with all specifications at once (CPU, RAM, storage, etc.), 
    you build it step by step. The computer is your Product, 
    the Builder defines the steps (addCPU, addRAM, etc.), 
    and different Concrete Builders could create gaming PCs, workstations

*/