#pragma once
#include <string>

#include "Months.h"

struct DateOfBirth
{
   int day_of_birth{};
   Months month_of_birth{};
   int year_of_birth{};
};

struct myFrends
{
   std::string first_name;
   std::string last_name;
   DateOfBirth birth_day {};
}; 