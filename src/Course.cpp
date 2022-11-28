/*
	Daniel McCray (solo)
*/

#include "Course.h"

#include <iostream>
#include <iomanip>
using namespace std;

const string Course::PREFIX = "CS A";

// Definition overloaded constructor

// Definition function getCourseNumber
	int Course::getCourseNumber()
	{
		return this->courseNumber;
	}
// Definition function getCourseName
	string Course::getCourseName() const
	{
		return this->courseName;
	}
// Definition function getCourseUnits
	int Course::getCourseUnits()
	{
		return this->courseUnits;
	}
// Definition function getPrereqs
	std::set<int> Course::getCoursePrereqs() const
	{
		auto iteratorBegin = this->prereqs.begin();
		auto endOfSet = this->prereqs.end();
		int i = 1;
		while(iteratorBegin != endOfSet)
		{
			cout << "Pre-Requisit number " << i << " is: " << this->PREFIX << *iteratorBegin << endl;
			iteratorBegin++;
			++i;
		}
		return this->prereqs;
	}
// Definition function getCourse
	Course Course::getCourse() const
	{
		return *this;
	}
// Definition function getPrefix
	 std::string Course::getPrefix()
	{
		return PREFIX;
	}

// Definition function setCourseName
	void Course::setCourseName(string newCourseName)
	{
		cout << "Orinal Name: " << this->courseName;
		this->courseName = newCourseName;
		cout << "\nNew Name: " << this->courseName << "\n";
	}
// Definition function setCourseNumber
	void Course::setCourseNumber(int newCourseNumber)
	{
		cout << "Orinal Course Number: " << this->courseNumber;
		this->courseNumber = newCourseNumber;
		cout << "\nNew Course Number: " << this->courseNumber << "\n";
	}

// Definition function setCourseUnits
	void Course::setCourseUnits(int newCourseUnits)
	{
		cout << "Orinal Course Units: " << this->courseUnits;
		this->courseUnits = newCourseUnits;
		cout << "\nNew Course Units: " << this->courseUnits << "\n";
	
	}

// Definition function setPrereqs
	void Course::setPrereqs(std::set<int> newData, int length)
	{	
		cout << "Adding new values in an array with length " << length << endl;
		auto newDataBegin = newData.begin();
		auto newDataEnd = newData.end();
		while (newDataBegin != newDataEnd)
		{
			this->prereqs.insert(*newDataBegin);
			newDataBegin++;
		}
		this->getCoursePrereqs();
		
	}

