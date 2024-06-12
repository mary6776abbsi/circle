#include <iostream>
using namespace std;

const double PI = 3.14159; // تعریف ثابت پایدار برای مقدار پی

// تابع برای محاسبه محیط دایره با استفاده از شعاع
double calculatePerimeter(double radius) {
    return 2 * PI * radius;
}

// تابع برای محاسبه مساحت دایره با استفاده از شعاع
double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;

    // دریافت شعاع از کاربر
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // محاسبه و نمایش محیط و مساحت دایره
    cout << "Perimeter of the circle: " << calculatePerimeter(radius) << endl;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    return 0;
}
