#include <iostream>
#include <vector>

int main ()
{
    std::string testPhrase = "turpentine and turtles";
    std::string whalePhrase = "";

    for (int i = 0; i < testPhrase.length(); i++)
    {
        if (testPhrase[i] == 'a' || testPhrase[i] == 'e' || testPhrase[i] == 'i' || testPhrase[i] == 'o' || testPhrase[i] == 'u')
        {
            whalePhrase += testPhrase[i];
            whalePhrase += testPhrase[i];
        }
    }
    whalePhrase += '\n';
    std::cout << whalePhrase;
}