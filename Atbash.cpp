// include 🗃️
#include <iostream>
#include <string>
// end include

// declare functions 🛠️

// get the Atbash corresponding letter [eg: a -> z, b -> y, h -> s]
char Atbash(char x);
// convert a string to the corresponding Atbash cyper
std::string Atbash(std::string TheString);

// main with args
int main(int argc, char *argv[])
{
    // if there is only one word there is no need for a for loop
    if (argc == 2)
    {
        std::cout << Atbash(argv[1]) << std::endl;
    }
    // add all the argvs if there is more then one and Atbsh cyper
    else if (argc > 2)
    {
        // The for loop for adding all of the argvs to one string
        std::string concatenated_args;
        for (int i = 1; i < argc; ++i)
        {
            concatenated_args += argv[i];
            if (i < argc - 1)
            {
                concatenated_args += " "; // Add a space between arguments } }
            }
        }
        std::cout << Atbash(concatenated_args) << std::endl;
    }
    // error wrong Usage
    else
    {
        std::cout << "Usage: command [The string ]" << std::endl;
    }

    return 0;
}

// get the Atbash corresponding letter [eg: a -> z, b -> y, h -> s]
char Atbash(char x)
{
    if (x >= 'a' && x <= 'z')
    {
        return ('a' + 'z') - x;
    }
    else if (x >= 'A' && x <= 'Z')
    {
        return Atbash((char)tolower(x));
    }
    else
    {
        return x;
    }
}

// convert a string to the corresponding Atbash cyper
std::string Atbash(std::string TheString)
{
    std::string afterCode = "";
    for (int i = 0; i < TheString.length(); ++i)
    {
        afterCode += (Atbash(TheString[i]));
    }

    return afterCode;
}