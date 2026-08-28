class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        vector<int> freq(26, 0);
        string str = "";
        for (char c : s) {
            freq[c - 'a']++;
        }
        for (char c : target) {
            freq[c - 'a']--;
        }

        for (int i = target.size()-1; i >= 0; i--) {
            freq[target[i] - 'a']++;

            bool m = true;
            for (int x : freq) {
                if (x < 0) {
                    m = false;
                    break;
                }
            }
            if (!m) {
                continue;
            }

            for (int b = target[i] - 'a' + 1; b < 26; b++) {
                if (freq[b]>0) {
                    freq[b]--;
                    str = target.substr(0, i);
                    str.push_back(char(b + 'a'));
                    for (int j = 0; j < 26; j++) {
                        
                            while(freq[j ])
                            {
                                freq[j]--;
                            str.push_back(char('a' + j));
                            }
                        
                    }
                    return str;
                }
            }
        
        }
         return str;

    }
   

}
;