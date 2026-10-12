class Solution {
public:
    int reverse(int x) {
        string s1 = to_string(x);

        if(s1[0]=='-'){
            std::reverse(s1.begin() + 1, s1.end());
        }
        else std::reverse(s1.begin() , s1.end());  

        try {
            x = stoi(s1);
        }
        catch (...) {
            return 0;
        }

        return x;
    }
};