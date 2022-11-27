/*
    Daniel McCray (solo)
    Nov 27 3:46:32
    This main.cpp file is primarly used
    for testing my implementations
*/

#include <iostream>
#include "./Course.h"

using namespace std;

int main()
{
    Course spanishClass = Course(250, "C++ Programming Language 2",4, {150,170});
    cout << spanishClass.getCourseName();
    return 0;
}