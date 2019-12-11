#pragma once
#include <vector>

myFrends TakeFriendFromDB(bool take_all_data);
std::string to_string(const myFrends& my_friend);
std::vector<std::string> split(const std::string& s, char delimiter);
myFrends friend_from_string(const std::string& my_friend);