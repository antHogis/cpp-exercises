#include <iostream>
#include <string>
using namespace std;

int main()
{
    int weight; 
    float height;

    cout << "Input weight: ";
    cin >> weight;
    cout << "Input height (cm): ";
    cin >> height;

    height /= 100;

    float bmi = (float) weight / (height * height);

    cout << "Weight (kg) : " << weight << '\n';
    cout << "height (m)  : " << height << '\n';
    cout << "BMI         : " << bmi << '\n';
}