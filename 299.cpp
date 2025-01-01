class Solution {
public:
    string getHint(string secret, string guess) {
        int a=0;
        int b=0;
        vector<int> sec(10,0);
        vector<int> gue(10,0);

        if(secret.size()!=guess.size() || secret.empty()) return "0A0B";

        for(int i=0;i<secret.size();i++){
            char c1=secret[i],c2=guess[i];
            if(c1==c2){
                ++a;
            }
            else{
                sec[c1-'0']++;
                gue[c2-'0']++;
            }
        }

        for(int i=0;i<sec.size();i++){
            b+=min(sec[i],gue[i]);
        }

        return to_string(a)+"A"+to_string(b)+"B";
    }
};