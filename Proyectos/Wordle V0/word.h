#include <iostream>
#include <string>
using namespace std;

class word {
    private:
    string ans;
    int length;

    public:
    word();
    word(string ans, int length);

    void attempt_word(string temp, int i);
    bool is_correct(string temp);
    void get_word();
};