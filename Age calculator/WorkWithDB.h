#pragma once

#include "MyFriend.h"

size_t ReadSizeFromDb();
void ReadFromDb(myFrends *&my_friend, size_t &num_of_friends);
void CreateFriend(myFrends *&my_friend, size_t &num_of_friends, bool read_from_db, bool read_only_from_db);
void SaveFriendsToDB(const myFrends *my_friend, const size_t &num_of_friends);
void SelectDBMode(myFrends *&my_friend, size_t& num_of_friends);