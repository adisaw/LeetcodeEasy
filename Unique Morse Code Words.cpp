class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string,int> mp;
       vector<string> a={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; 
     for(int i=0;i<words.size();i++)
     {
         string ans="";
         for(int j=0;j<words[i].length();j++)
         {
             int num=(int)words[i][j]-97;
             ans=ans+a[num];
         }
         mp[ans]++;
         
     }
    return mp.size();
    }
};
