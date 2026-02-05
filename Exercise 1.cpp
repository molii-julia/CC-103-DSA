#include <iostream>
using namespace std;

struct Car {
    char brand[20];
    char model[20];
    int year;
    float mileage;
};

float calculateDepreciation(float mileage) {
    if (mileage < 10000)
        return 0;
    else if (mileage >= 10000 && mileage <= 49999)
        return 10;
    else if (mileage >= 50000 && mileage <= 99999)
        return 20;
    else
        return 30;
}


void displayCarDetails(Car car) {
    float depreciation = calculateDepreciation(car.mileage);

    cout << "Car Details: " << endl;
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "Mileage: " << car.mileage << endl;
    cout << "Depreciation: " << depreciation << "%" << endl;
}

int main() {
    Car myCar;

    cout << "Enter the brand of the car: ";
    cin >> myCar.brand;

    cout << "Enter the model of the car: ";
    cin >> myCar.model;

    cout << "Enter the year of the car: ";
    cin >> myCar.year;

    cout << "Enter the mileage of the car: ";
    cin >> myCar.mileage;

    displayCarDetails(myCar);

    return 0;
}