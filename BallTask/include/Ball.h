#pragma once
#include <iostream>
#include <string>

class Ball
{
    private:
    std::string m_color  ;
    double m_radius ;

    public: 
    
    Ball(double radius);
    Ball( const std::string &color = "black", double radius = 10.0);
    void print();
};