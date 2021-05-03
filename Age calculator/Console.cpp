#include <iostream>// wqeqweqwe12321
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

#include "MyFriend.h"

myFrends TakeFriendFromDB(bool take_all_data)
{
   myFrends Friend;

   std::cout << "Enter first name your friend: ";
   std::cin >> Friend.first_name;
   std::cout << std::endl;

   std::cout << "Enter last name your friend: ";
   std::cin >> Friend.last_name;
   std::cout << std::endl;

   if (take_all_data)
   {
   std::cout << "Enter day of born yor friend: ";
   std::cin >> Friend.birth_day.day_of_birth;
   std::cout << std::endl;

   std::cout << "Enter month of born yor friend: ";
   std::string string_month;
   std::cin >> string_month;
   Friend.birth_day.month_of_birth = string_to_month(string_month);
   std::cout << std::endl;

   std::cout << "Enter year of born yor friend: ";
   std::cin >> Friend.birth_day.year_of_birth;
   std::cout << std::endl;
   }
   return Friend;
}

std::string to_string(const myFrends& my_friend)
{
   return "" + my_friend.first_name + " " + my_friend.last_name +
    + " " + std::to_string(my_friend.birth_day.day_of_birth) +
    " " + to_string(my_friend.birth_day.month_of_birth) +
    " " + std::to_string(my_friend.birth_day.year_of_birth);
}

std::vector<std::string> split(const std::string& s, char delimiter)
{
   std::vector<std::string> tokens;
   std::string token;
   std::istringstream sourse_string(s);
   while (std::getline(sourse_string, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}

myFrends friend_from_string(const std::string& my_friend)
{
   myFrends new_friend;
   auto splitted_friend = split(my_friend, ' ');
   new_friend.first_name = splitted_friend.at(0);
   new_friend.last_name = splitted_friend.at(1);
   new_friend.birth_day.day_of_birth = std::stoi(splitted_friend.at(2));
   new_friend.birth_day.month_of_birth = string_to_month(splitted_friend.at(3));
   new_friend.birth_day.year_of_birth = std::stoi(splitted_friend.at(4));

   return new_friend;
}
