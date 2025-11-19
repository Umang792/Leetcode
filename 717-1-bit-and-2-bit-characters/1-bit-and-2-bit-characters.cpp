class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size()==1){
            return true;
        }
        for(int i=0;i<bits.size();){
            if(bits[i]==1){
                i=i+2;
            }
            else{
                i++;
            }
            if(i==bits.size()-1){
                return true;
            }
        }
        return false;
    }
};