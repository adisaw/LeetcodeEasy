class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string bits="";
        for(int i=0;i<32;i++)
        {
            uint32_t k=n%2;
            n=n/2;
            bits=bits+to_string(k);
            
        }
        uint32_t ans=0;
        uint32_t t=1;
        for(int i=31;i>=0;i--)
        {
            char ch=bits[i];
            
            uint32_t k=(uint32_t)ch-48;
           // cout<<k<<" ";
            ans= ans+ t*k;
            t=t*2;
        }
        //cout<<endl;
       //cout<<bits;
        return ans;
    }
};
