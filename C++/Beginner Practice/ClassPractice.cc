//C++ Program to show how OOP works

using namespace std;

class Car {
    char make[30];
    char model[30];
    int age;
    int price;
    int miles;

public:
    void getMake();
    void getModel();

private:
    void getPrice(); 
};

int main() {
    Car myCar;
    return 0;
}