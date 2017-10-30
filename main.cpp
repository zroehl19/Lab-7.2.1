/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zroehl
 *
 * Created on October 27, 2017, 1:19 PM
 */

#include <iostream>

using namespace std;

class Exc
{
public:
    float square_area(float a);
    float rectangle_area(float a,float b);
private:
    float a;
    float b;
    float r;
};

float Exc::square_area(float a)
{
    r = a*a;
    
    return r;
}

float Exc::rectangle_area(float a, float b)
{
    if(a <= 0 || b <= 0)
    {
        throw string("negative or zero");
    }
    
    r = a*b;
    
    return r;
}

/*
 * 
 */
int main(void) {
    
    float a, b;
    cin >> a;
    cin >> b;

    Exc area;
    
    try
    {
        float rSquare = area.square_area(a);
        float rRectangle = area.rectangle_area(a, b);
        cout << rSquare << endl << rRectangle << endl;
    }
    catch(string &exc)
    {
        cout << "Your area will be " << exc << endl;
    }
}

