#include <vector>
#include <iostream>
#include "profile.hpp"


Profile::Profile(std::string new_name,
int new_age,
std::string new_city,
std::string new_country,
std::string new_sex) :
name(new_name), age(new_age), city(new_city), country(new_country),
sex(new_sex) {}

std::string Profile::get_hobbies() {

std::string hobby_list = "";

    if (hobbies.size() > 0) {
        hobby_list += "Hobbies include:\n";
    }
    for (int i=0; i < hobbies.size(); i++) {
        hobby_list += (hobbies[i] + "\n");
    }

    return hobby_list;
}

std::string Profile::view_profile()
{
   return "Name: " + name + ", age: " + std::to_string(age) + ", city: " + city + ", country: " + country +
   ", sex: " + sex + "\n" + get_hobbies();
}

void Profile::add_hobby(std::string new_hobby) {
    hobbies.push_back(new_hobby);
}
