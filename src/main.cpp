/*
    Daniel McCray (solo)
    Nov 27 3:46:32
    This main.cpp file is primarly used
    for testing my implementations
*/

#include <iostream>
#include "./Course.h"
#include <set>
using namespace std;

int main()
{
    //  Course *ptrToCourse = new Course(250, "C++ Programming Language 2", 4, {150, 170});
    //  Create an accurate instance of the class i'm doing this for
    Course justinJangClass = Course(250, "C++ Programming Language 2", 4, {150, 170});
    cout << justinJangClass.getCourseName() << endl;

    return 0;
}