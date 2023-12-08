#include <iostream>
#include <cmath>

int main ()
{

const char* messages[] = {
    "It is certain.",
"It is decidedly so.",
"Without a doubt.",
"Yes - definitely.",
"You may rely on it.",
"As I see it, yes.",
"Most likely.",
"Outlook good.",
"Yes.",
"Signs point to yes.",
"Reply hazy, try again.",
"Ask again later.",
"Better not tell you now.",
"Cannot predict now.",
"Concentrate and ask again.",
"Don't count on it.",
"My reply is no.",
"My sources say no.",
"Outlook not so good.",
"Very doubtful."};

char choice;

while (true)
{
    std::cout << "give it a shake: (Y/N)";
    std::cin >> choice;
    
    if (choice == 'Y' || "y")
    {
        srand(time(NULL));
        int message = rand() % (sizeof(messages) / sizeof(messages[0]));
        std::cout << messages[message] << "\n";
    }
    else
    {
        break;
    }
}
}