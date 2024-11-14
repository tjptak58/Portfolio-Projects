//C++ Program to show how OOP works
#include <iostream>
#include <string>
#include <cstdio>

class Person {
    //Public: members can be accessed from outside the class
    private: 
        std::string name;
        int age;
        
    //Private; can only be accessed within the class itself
    public:
        void printInfo();

        int getAge() {
            return age;
        }

        std::string getName() {
            return name;
        }

        void setName(std::string s) {
            name = s;
        }

        void setAge(int newAge) {
            age = newAge;
        }

        //Generic Constructor
        Person() {
            name = "default";
            age = 0;
            std::cout << "Default Constructor\n";
        }

        //Parameterized constructor
        Person (std::string name, int age) : name(name), age(age) {};

        //Copy Constructor (copy from instance of same class)
        //Person(Person &p1) {} created automatically

        //Move Constructor (Transfers ownership of old object to this new object STEALS RESOURCES)
        //Person(Person &&p1) {} created automatically

        //Destructor: last function to be called before object is destroyed

        ~ Person() {
            std::cout << "Object destroyed" << "\n";
        }

    //can be accessed within the class and by derived classes (Children??)
    protected: 
        std::string favoriteColor;

}instance;

void Person::printInfo() {
    std::cout << name << " " << age << std::endl;
}

int main() {
    return 0;
}