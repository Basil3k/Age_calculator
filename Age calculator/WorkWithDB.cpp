#include <iostream>
#include <fstream>

#include "WorkWithDB.h"
#include "Console.h"


size_t ReadSizeFromDb()
{
   std::fstream my_friends ("Ourdatabase.txt", std::ios::in);
   if (my_friends)
   {
      size_t num_of_friends{};
      my_friends >> num_of_friends;
      return  num_of_friends;
   }
}

void ReadFromDb(myFrends*& my_friend, size_t &num_of_friends)
{
   std::fstream data_base("Ourdatabase.txt", std::ios::in);
   if (data_base)
   {
      if (my_friend == nullptr)
      {
         std::cout << "Error you !!!" << std::endl;
      }
      std::string friend_data_on_line;
      std::getline(data_base, friend_data_on_line);
      for (int i = 0; i < num_of_friends; i++)
      {
         std::string car_line{};
         std::getline(data_base, car_line);
         my_friend[i] = friend_from_string(car_line);
      }
   }
}

void CreateFriend(myFrends*& my_friend, size_t& num_of_friends, bool read_from_db, bool read_only_from_db)
{
   if (!read_only_from_db)
   {
      std::cout << "Enter number of cars: ";
      std::cin >> num_of_friends;
      std::cout << std::endl;
   }
   size_t new_num_of_friends{};
   size_t size = 0;
   if (read_from_db and !read_only_from_db) //it refresh database
   {
      size = ReadSizeFromDb();

      new_num_of_friends = size + num_of_friends;
      my_friend = new myFrends[new_num_of_friends];
      ReadFromDb(my_friend, size);
   }
   else if (read_from_db and read_only_from_db)//it read only friends from database
   {
      size = ReadSizeFromDb();
      num_of_friends = size;
      my_friend = new myFrends[size];
      ReadFromDb(my_friend, size);
   }
   else
   {
      my_friend = new myFrends[num_of_friends];
   }
   if (!read_only_from_db)
   {
      for (size_t i = 0 + size; i < num_of_friends + size; i++)
      {
         my_friend[i] = TakeFriendFromDB(true);
      }
   }
   if (read_from_db and !read_only_from_db)
   {
      num_of_friends = new_num_of_friends;
   }
}

void SaveFriendsToDB(const myFrends *my_friend, const size_t &num_of_friends)
{
   std::ofstream data_base("Ourdatabase.txt");
   if (data_base)
   {
      data_base << num_of_friends;
      data_base << std::endl;

      for (int i = 0; i < num_of_friends; i++)
      {
         data_base << to_string(my_friend[i]) << std::endl;
      }
   }
}

void SelectDBMode(myFrends *&my_friend, size_t &num_of_friends)
{
   std::cout << "1 - If you want create new database or add new friend" << std::endl;
   std::cout << "2 - If you want to find in an existing database" << std::endl;
   int answer;
   std::cin >> answer;
   if (answer == 1)
   {
      std::cout << "1 - If you want create new database" << std::endl;
      std::cout << "2 - If you want add friend on you database" << std::endl;
      int answer;
      std::cin >> answer;
      switch (answer)
      {
      case 1:
         CreateFriend(my_friend, num_of_friends, false, false);
         break;
      case 2:
         CreateFriend(my_friend, num_of_friends, true, false);
      }
   }
   else 
   {
      CreateFriend(my_friend, num_of_friends, true, true);
   }
}