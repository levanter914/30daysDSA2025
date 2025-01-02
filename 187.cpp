class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> dna;

        unordered_map<string,int> map;

        for(int i=0;i+10<=s.size();i++){
            map[s.substr(i,10)]++;
        }

        for(auto& q:map){
            if(q.second>1){
                dna.push_back(q.first);
            }
        }
        return dna;
    }
};