//Author: Robert DeValentine
#include "student.h"
#include <string>



void student::setName(std::string first, std::string last)
{
        firstName = first;

        lastName = last;
}


std::string student::fullName()
{
        std::string name;

        name = name + firstName;

        name =  name + " ";
        
        name = name + lastName;

        return name;
}
