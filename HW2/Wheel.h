#pragma once
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class Wheel
{
protected:
    int Min;
    int Max;
    int BallValue;

public:
    Wheel(); // Default Constructor
    Wheel(int minimum, int maximum); // Fill constructor 
    ~Wheel(); // Destructor

    // Getters
    int getMin();
    int getMax();
    int getBallValue();

    // Setters
    void setMin(int M);
    void setMax(int M);
    void setBallValue(int B);

    // Other Functions
    void Spin();
};