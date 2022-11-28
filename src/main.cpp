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
    //  Create an accurate instance of the class i'm doing this for
    Course justinJangClass = Course(250, "C++ Programming Language 2", 4, {170, 150});

    //  Test getCourseName
    cout << justinJangClass.getCourseName() << endl;

    //  Test getCourseNumber
    cout << justinJangClass.getCourseNumber() << endl;

    //  Test getCourseUnits
    cout << justinJangClass.getCourseUnits() << endl;

    //  Test getCoursePrereqs
    //  Reference 'Course.cpp' to see how I outputted the set before returning it
    std::set<int> listOfPrereqs = justinJangClass.getCoursePrereqs();

    //  Test getCourse
    Course copiedCourse = justinJangClass.getCourse();
    cout << "The new course that used getCourse is as follows \nCourse Number: CS A" <<
    copiedCourse.getCourseNumber() << "\nCourse Name: " << copiedCourse.getCourseName() << "\nCourse Units: " <<
    copiedCourse.getCourseUnits() << "\nPre-Requisits: \n";
    auto copiedCoursePrereqs = copiedCourse.getCoursePrereqs();
    cout << endl;

    //Test getPrefix

    //  Test setCourseName
    justinJangClass.setCourseName("How to make burgers");
    
    // Test setCourseNumber
    justinJangClass.setCourseNumber(420);

    //  Test setCourseUnits
    justinJangClass.setCourseUnits(6);

    //Test setPrereqs
    justinJangClass.setPrereqs({190,185},2);

    //  Calling destructor
    justinJangClass.~Course();
    cout << "\n\n\n\nDone running program";

    return 0;
}