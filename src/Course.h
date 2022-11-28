/*
	Daniel McCray (solo)
*/

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <set>

class Course
{
public:
	// Default Constructor
	Course() : courseNumber(0), courseName("N/A"), courseUnits(0), prereqs({0,0}) {}	
	// Overload Constructor
	Course(int courseNumberParam, std::string courseNameParam,
	int numberOfUnitsParam, std::set<int> preRequisitesParam) :
	courseNumber(courseNumberParam), courseName(courseNameParam),
	courseUnits(numberOfUnitsParam), prereqs(preRequisitesParam) {} 
	// Accessor functions
	std::string getCourseName() const;
	int getCourseNumber();
	int getCourseUnits();
	std::set<int> getCoursePrereqs() const;
	Course getCourse() const;
	static std::string getPrefix();

	// Mutator functions
	void setCourseName(std::string);
	void setCourseNumber(int);
	void setCourseUnits(int);
	void setPrereqs(std::set<int>,int);
	// Destructor
	~Course();
private:
	int courseNumber;
	std::string courseName;
	int courseUnits;
	std::set<int> prereqs;
	static const std::string PREFIX;
};
#endif
