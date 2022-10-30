#include<iostream>
using namespace std;

int solve(string digits, int index, string maping_values[], string output){
    // base case
    if(digits.length() == output.length()){
        cout << output << endl;
        return 0;
    }
    int digit = digits[index] - '0';
    string char_digits = maping_values[digit];
    for(int i=0;i<char_digits.length();i++){
        output.push_back(char_digits[i]);
        solve(digits, index+1, maping_values, output);
        output.pop_back();
    }
    return 0;
}


int main() {
    string digits;
    cin >> digits;
    string maping_values[] = {"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits, 0, maping_values, "");
    return 0;
/*
23
ad
ae
af
bd
be
bf
cd
ce
cf
*/
}
