#include <iostream>
#include <string>
#include <conio.h>
#include <cctype>
#include <algorithm>
#include <vector>
#define N 6

using namespace std;

class word{
    private:
    string ans;
    string guess;
    vector<int> pos;
    vector<bool> isused;

    public:
    word();
    word(string guess, string ans);

    bool is_guess_right();
    void attempt_guess();
    void get_pos();
};