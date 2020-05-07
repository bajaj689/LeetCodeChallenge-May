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
    
    //Approach : Vote Algorithm
    //TC : O(n)
    //SC : O(1)
    
     int majorityElement(vector<int>& nums) {
         
     int major=num[0], count = 1;
         
        for(int i=1; i<num.length;i++){
            if(count==0){
                count++;
                major=num[i];
            }else if(major==num[i]){
                count++;
            }else count--;
            
        }
        return major;
     }
};
