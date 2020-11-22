#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int getCount(const string& inputStr){
    std::function<bool(char)> isVowel = [](char letter)
    {
        std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        return any_of(vowels.cbegin(), vowels.cend(), [&letter](char vowel)
        { return vowel == letter; });
    };

    int num_vowels = std::count_if(inputStr.cbegin(), inputStr.cend(), isVowel);

    //your code here
    return num_vowels;
}


int main()
{
    if(getCount("abracadabra") == 5)
        std::cout << "OK" << std::endl;
    else
        std::cout << "NOT OK" << std::endl;
    return 0;
}
