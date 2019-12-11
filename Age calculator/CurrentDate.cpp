#include <windows.h> 
#include <iostream>

#include "CurrentDate.h"

void GetCurrentDate(Date *date)
{
   if (date != nullptr)
   {
   SYSTEMTIME for_current_date;
   GetLocalTime(&for_current_date);

   date->year = for_current_date.wYear;
   date->month = for_current_date.wMonth;
   date->day = for_current_date.wDay;
   }
   else
   {
     std::cout << "date is nullpointer" << std::endl;
   }
}