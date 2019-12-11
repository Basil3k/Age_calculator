#include <string>

#include "Months.h"

std::string to_string(const Months& month)//this 3 functions need for convertation entered month in letter to number
{
   switch (month)
   {
   case Months::JAN:
      return "January";
   case Months::FEB:
      return "February";
   case Months::MAR:
      return "March";
   case Months::APR:
      return "April";
   case Months::MAY:
      return "May";
   case Months::JUNE:
      return "June";
   case Months::JULY:
      return "July";
   case Months::AUG:
      return "August";
   case Months::SEPT:
      return "September";
   case Months::OCT:
      return "October";
   case Months::NOV:
      return "November";
   case Months::DEC:
      return "December";
   }
}

   Months string_to_month(std::string & month)
   {
      if (month == "January")
      {
         return Months::JAN;
      }
      else if (month == "February")
      {
         return Months::FEB;
      }
      else if (month == "March")
      {
         return Months::MAR;
      }
      if (month == "April")
      {
         return Months::APR;
      }
      else if (month == "May")
      {
         return Months::MAY;
      }
      else if (month == "June")
      {
         return Months::JUNE;
      }
      else if (month == "July")
      {
         return Months::JULY;
      }
      else if (month == "August")
      {
         return Months::AUG;
      }
      if (month == "September")
      {
         return Months::SEPT;
      }
      else if (month == "October")
      {
         return Months::OCT;
      }
      else if (month == "November")
      {
         return Months::NOV;
      }
      if (month == "December")
      {
         return Months::DEC;
      }
   }

   int to_int(const Months& month)
   {
      switch (month)
      {
      case Months::JAN:
         return 1;
      case Months::FEB:
         return 2;
      case Months::MAR:
         return 3;
      case Months::APR:
         return 4;
      case Months::MAY:
         return 5;
      case Months::JUNE:
         return 6;
      case Months::JULY:
         return 7;
      case Months::AUG:
         return 8;
      case Months::SEPT:
         return 9;
      case Months::OCT:
         return 10;
      case Months::NOV:
         return 11;
      case Months::DEC:
         return 12;
      }
   }