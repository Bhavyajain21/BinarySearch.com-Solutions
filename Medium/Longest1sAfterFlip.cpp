int solve(string s) {
    if(s.length()==0)
    {
        return 0;
    }

    if(s.length()==1)
    {
        if(s[0]==1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    vector<int> noz;
    vector<int> v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            noz.push_back(i);
        }
    }
    if(noz.size()==1 || noz.size()==0)
    {
        return s.length();
    }
    if(noz.size()==s.length())
    {
        return 1;
    }
    int count=0,flag=0;
    int max = noz[1];
    
    for(int i=1;i<noz.size()-1;i++)
    {
        int l = noz[i-1]+1;
        int r = noz[i+1]-1;
        count=r-l+1;
        if(count>max)
        {
            max = count;
        }
        flag=1;
    }
    
    count = s.length()-1+1-noz[noz.size()-1]+noz[noz.size()-1]-(noz[noz.size()-2]+1);
    if(count>max)
        {
            max = count;
        }
        return max;
}