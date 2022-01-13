class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>>ans;
        string str;
        unordered_map<string, vector<string>>umap;
        for(int i=0;i<string_list.size();i++)
        {
            str=string_list[i];
        
            sort(string_list[i].begin(), string_list[i].end());
            umap[string_list[i]].push_back(str);
        }
        for(auto it : umap)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
