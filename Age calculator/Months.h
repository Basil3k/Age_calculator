#pragma once

enum class Months //2
{
   JAN = 1,
   FEB,
   MAR,
   APR,
   MAY,
   JUNE,
   JULY,
   AUG,
   SEPT,
   OCT,
   NOV,
   DEC
};


std::string to_string(const Months& month);
Months string_to_month(std::string& month);
int to_int(const Months& month);
