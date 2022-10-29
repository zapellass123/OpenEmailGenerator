class Solution {
public:
    char findTheDifference(string s, string t) {
       char arr[s.length()];
        char brr[t.length()];
        
        for(int i=0;i<s.length();i++){
            arr[i]=s.at(i);
        }
         for(int i=0;i<t.length();i++){
            brr[i]=t.at(i);
        }
        sort(arr,arr+s.length());
        sort(brr,brr+t.length());
        for(int i=0;i<s.length();i++){
            if(arr[i]!=brr[i])
                return brr[i];
        }
        return brr[t.length()-1];
    }
};
