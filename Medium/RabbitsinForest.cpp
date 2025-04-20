//Medium - 781 Rabbits in forest
class Solution {
    public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        for(int &x : answers) {
            mp[x]++;
        }
        int total=0;
        for(auto &it :mp){
            int x = it.first;//answer
            int count=it.second;//how many rabbits answered x
            int groupSize=(x+1);
            int groups=ceil((double)count/groupSize);
            total += groups*(groupSize);
        }
        return total;
    }
};
