#include <iostream>
#include <vector>


class Profile {
private:
std::string name;
int age;
std::string city;
std::string country;
std::string sex;
std::vector<std::string> hobbies = {};

public:
Profile(std::string new_name,
int new_age,
std::string new_city,
std::string new_country,
std::string new_sex);

std::string get_hobbies();
std::string view_profile();

void add_hobby(std::string new_hobby);

};