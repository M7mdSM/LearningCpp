#include "Ball.h"
Ball::Ball(double radius)
{
    m_radius = radius;
    m_color = "black";
}
Ball::Ball(const std::string &color , double radius)
{
    m_radius = radius;
    m_color = color;
}
void Ball::print()
{
    std::cout << "color: " << m_color << ", radius: "<<m_radius<<std::endl;
}

