
#include <stdio.h>

struct Car {
    char brand[50];
    char model[50];
    int year;

    struct Engine {
        float capacity;
        int horsepower;
        char fuelType[20];
    } engine;
};

int main() {
    struct Car car1 = {
        "Toyota",
        "Innova",
        2024,
        {2.5, 150, "Diesel"}
    };

    printf("Car Details\n");
    printf("Brand: %s\n", car1.brand);
    printf("Model: %s\n", car1.model);
    printf("Year: %d\n", car1.year);

    printf("\nEngine Details\n");
    printf("Capacity: %.1f L\n", car1.engine.capacity);
    printf("Horsepower: %d HP\n", car1.engine.horsepower);
    printf("Fuel Type: %s\n", car1.engine.fuelType);

    return 0;
}
