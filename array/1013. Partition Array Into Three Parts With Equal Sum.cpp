class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum%3!=0)
        {
            return false;
        }
        int partition =0;
        int part=sum/3;
        int temp = 0;
        for(int i=0;i<arr.size();i++)
        {
            temp+=arr[i];
            if(temp==part)
            {
                partition++;
                temp=0;
            }
            if(partition==3)
            {
                    return true;
            }
    
            
     }
       
            return false;
    }
};
