#include <iostream>

using namespace std;

struct Car {
    string name;
    string color;
    string model;
    int age;
    int speed;
    int speed_max;

    void init(string xname, string xcolor, string xmodel, int xage, int xspeed_max) {
        name = xname;
        color = xcolor;
        model = xmodel;
        age = xage;
        speed_max = xspeed_max;
    }

    void show() {
        cout << "model......: " << model << endl;
        cout << "name.......: " << name << endl;
        cout << "color......: " << color << endl;
        cout << "speed max..: " << speed_max << endl;    
    }

    void set_speed(int xspeed) {
        if(xspeed > speed_max) {
            cout << "speed max limited :: " << speed_max << endl;
        } else if(xspeed < 0) {
            speed = 0;
            cout << "speed not permited" << endl;
        } else {
            speed = xspeed;
        }
    }

    void show_speed() {
        cout << "speed: " << speed << endl;
    }
};

int main() {
    Car car;

    car.init("f320", "red", "ferrari", 3, 425);
    car.show();

    car.set_speed(100);

    car.show_speed();

    return 0;
}