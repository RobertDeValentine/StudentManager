//Author: Robert DeValentine
#ifndef _STUDENT_H_

#define _STUDENT_H_
#include <string>
#include <iostream>
#include <vector>

class student

{

private:
std::string firstName;
std::string lastName;

public:
 
void setName(std::string, std::string);

std::string fullName();

};

#endif
