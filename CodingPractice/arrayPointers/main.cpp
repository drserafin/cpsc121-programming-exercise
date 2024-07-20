#include <bits/stdc++.h>
#include <cmath>  // For pow functio

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    const char* words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    if ( n < 1 || n > pow(10,9)) {
        std::cout << "Out of range please select a number between 1 and 10^9";
    } else if (n >= 1 && n <= 9) { 
        std::cout << words[n-1];
    } else {
        std::cout << "Greater than 9";
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
