#include<string>
#pragma once
class Animal{
    public:
    Animal(std::string _name, int _age);
    virtual void printInfo();
    protected:
    std::string name;
    int age;
};
class Zebra: public Animal{
    public:
    Zebra(std::string _name, int _age, int _numStripes);
    virtual void printInfo();
    private:
    int numStripes;
};
class Cat: public Animal{
    public:
    Cat(std::string _name, int _age,std::string _favoriteToy);
    virtual void printInfo();
    private:
    std::string favoriteToy;
};

