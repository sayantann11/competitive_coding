 vector<vector<int>>results;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            map<int,bool>map;
            int target=0-nums[i];
            int l=i+1;
            int r=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1])continue;
            cout<<nums[i]<<endl;
            
            while(l<r){
                if(nums[l]+nums[r]>target){
                    r--;
                }
                else if(nums[l]+nums[r]<target){
                    l++;
                }
               else {
                    cout<<i<<" "<<l<<" "<<r<<endl;
                   if(!map[nums[l]] && !map[nums[r]]){
                       map[nums[l]]=true;
                       map[nums[r]]=true;
                vector<int>threeVals{nums[i],nums[l],nums[r]};
                results.push_back(threeVals);
                   }
                  
             l++;
            }
                
            }
           
            
        }
        return results;
    }
