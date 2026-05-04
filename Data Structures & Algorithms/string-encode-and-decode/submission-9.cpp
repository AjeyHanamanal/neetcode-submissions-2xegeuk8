class Solution {
public:

    // Encode: vector<string> → string
    string encode(vector<string>& strs) {
       string res="";

       for(string s:strs)
       {
        res+=to_string(s.size())+"#"+s;
       }
       return res;
    }

    // Decode: string → vector<string>
    vector<string> decode(string s) {
        int i=0;
        vector<string>res;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));

            string word=s.substr(j+1,len);

            res.push_back(word);

            i=j+1+len;
        }
        return res;
       
    }
};