#include <iostream>
#include <vector>
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
int main() {
    pairlist_t mylist;
    mylist.push_back(std::make_pair("Alice", 30));
    mylist.push_back(std::make_pair("Bob", 25));
    mylist.push_back(std::make_pair("Charlie", 35));

    for (const auto& p : mylist) {
        std::cout << p.first << " is " << p.second << " years old." << std::endl;
    }
    text_t name="Ovin";
    number_t age=20;

    std::cout<<"Hello, "<<name<<".You are "<<age<<" years old "<<std::endl;
    return 0;
}