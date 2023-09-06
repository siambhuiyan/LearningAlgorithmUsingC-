#include <iostream>
using namespace std;

class Car {
  public:

    // class data
    string brand, model;
    int mileage = 0;

    // class function to drive the car
    void drive(int distance) {
        mileage += distance;
    }
    
    // class function to print variables
    void show_data() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Distance driven: " << mileage << " miles" << endl;
    }
};

int main() {
    
    // create an object of Car class
    Car my_car;

    // initialize variables of my_car
    my_car.brand = "Honda";
    my_car.model = "Accord";
    my_car.drive(50);

    // display object variables
    my_car.show_data();

    return 0; 
}
