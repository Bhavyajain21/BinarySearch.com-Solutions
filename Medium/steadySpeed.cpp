int solve(vector<int>& nums) {
    if(nums.size()==1)
    {
        return nums[0];
    }
   sort(nums.begin(),nums.end());
   int i=0,flag=0;
   int j=i+1;
   int count = 1,max = -1,maxi = -1;
   while(j<nums.size())
   {
       if(nums[i]==nums[j])
       {
           j++;
       }
       else
       {
           flag=1;
           count = j-i;
           if(count>maxi)
           {
               maxi = count;
               max = nums[i];

           }
           i = j;
           j = i+1;

       }
   }
   if(flag==0 && j==nums.size())
   {
       return nums[0];
   }
   return max;
}