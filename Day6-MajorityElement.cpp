class Solution {
public:
    //Approach: Hash Maps
    
    //Time complexity : O(n)
    //Space complexity : O(n)
    
    
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> freq; //Will atleast n - (n/2) associations //O(n)
         
        for(int x : nums){  //Traverse over vector of size n //O(n)
            
            if(++freq[x] > (nums.size() / 2))    //Access element in hash map: O(1)
                return x; //O(1)
        }
        
        return 0; ///O(1)
        
        
    }
};
