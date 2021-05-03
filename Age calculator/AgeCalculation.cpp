#include <iostream>

#include "AgeCalculation.h"
#include "Months.h"
#include "WorkWithDB.h"
#include <stack>

void FindChosenFriend(size_t num_of_friend, myFrends  *my_friend, myFrends *friend_to_find) #test commenting
{
   Date date;
   GetCurrentDate(&date);
   int friends_age {};
   for (int i = 0; i < num_of_friend; i++)
   {
      if ((my_friend[i].first_name == friend_to_find->first_name) and (my_friend[i].last_name == friend_to_find->last_name))
      {
         if (date.month <= to_int(my_friend[i].birth_day.month_of_birth))//if current month less than month of birth
         {
            if (date.day < my_friend[i].birth_day.day_of_birth)//if current month big than month of birth
            {
               friends_age = date.year - my_friend[i].birth_day.year_of_birth - 1;
            }
         }
         else
         {
            friends_age = date.year - my_friend[i].birth_day.year_of_birth;
         }
      }
   }
   std::cout << "Friends age is: " << friends_age << std::endl;
}
