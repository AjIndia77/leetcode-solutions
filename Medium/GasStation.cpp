//Medium - 134 Gas Station
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int totalGas=0,totalCost=0;
       //unique solution always exists
       int start=0,curGas=0;
       for(int i=0;i<gas.size();i++){
        totalGas+=gas[i];
        totalCost+=cost[i];
        curGas+=(gas[i]-cost[i]);

        if(curGas<0){
            start=i+1;
            curGas=0;
        }
       } 

       return totalGas<totalCost?-1:start;
    }
};
//Time Complexity - O(n)
//Space Complexity - O(1)
