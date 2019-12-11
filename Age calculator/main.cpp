#include <iostream>
#include <fstream>


#include "WorkWithDB.h"
#include "Console.h"

#include "AgeCalculation.h"

int main()
{ 
   myFrends* my_friend = nullptr;
   size_t num_of_friends;
   SelectDBMode(my_friend, num_of_friends);

   std::cout << "Friends: " << std::endl;
   for (int i = 0; i < num_of_friends; i++)
   {
      std::cout << to_string(my_friend[i]) << std::endl;
   }
   SaveFriendsToDB(my_friend, num_of_friends);

   auto find_friend = TakeFriendFromDB(false);
   FindChosenFriend(num_of_friends, my_friend, &find_friend);
}


