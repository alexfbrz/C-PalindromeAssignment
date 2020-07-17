
#include <cstdlib>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void isPal (string s){  
    
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        cout<<"The string is a palindrome."<<endl;
    else
        cout<<"The string is not a palindrome."<<endl;
}

string removeWhitePunct(string s)
{
    auto notUsed = [](char c) 
                { 
                    return ispunct(c) || isspace(c); 
                };

    s.erase(remove_if(s.begin(), s.end(), notUsed), s.end());

    return s;    
}

   
int main() {

    
    auto s= std::string("taco cat");
    auto p= std::string("palindrome");
    auto q= std::string("racecar");
    auto a= std::string("Madam, I'm Adam");
        
    isPal(removeWhitePunct(s));
    isPal(removeWhitePunct(p));
    isPal(removeWhitePunct(q));
    isPal(removeWhitePunct(a));
       
    return 0;
}

