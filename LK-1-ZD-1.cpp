#include <iostream>
#include <string>
using namespace std;

int var(string f_second_name, int f_variant)
{
    int your_variant = 0;
    int sum = 0;
    for (int i = 0; i < f_second_name.length(); i++)
        sum += f_second_name[i] - 0;
    your_variant = sum % f_variant + 1;
    return your_variant;
}

int main() 
{
    string second_name;
    int variant;
    std::cout << "enter your second name" << endl;
    std::cin >> second_name;
    std::cout << "enter the number of variants" << endl;
    std::cin >> variant;
    std::cout << var(second_name, variant);
    return 0;
}