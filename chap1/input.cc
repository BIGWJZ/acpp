#include <iostream>
#include <string>

int main(){
    std::cout << "Please enter your first name: " ;
    std::string name;
    std::cin >> name;
    const std::string greetings = " Hello, " + name + "! ";
    const std::string spaces(greetings.size(),' ');
    const std::string second = "*" + spaces + "*";
    const std::string first(second.size(),'*');
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "*" << greetings << "*" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    return 0;
}