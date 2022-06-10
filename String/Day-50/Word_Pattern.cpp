bool wordPattern(string pattern, string str) {
        std::vector<string> words(26,"");
        std::unordered_map<string,int> wordDict;
        int start = 0;
        int end = 0;
        for(int i = 0; i < pattern.size(); ++i){
            end = start;
            while(end < str.size() && str[end] != ' ') ++end;
            std::string currWord = str.substr(start, end-start);
            if(words[pattern[i]-'a'] == ""){
                if(wordDict.find(currWord) != wordDict.end()) return false;
                words[pattern[i]-'a'] = currWord;
                wordDict[currWord] = 1;
            }else{
                if(words[pattern[i]-'a'] != currWord) {
                    return false;
                }
            }
            start = end+1;
            if(start >= str.size()){
                if(i == pattern.size()-1){
                    return true;
                }else{
                    return false;
                }
            }
        }
        return false;
    }
