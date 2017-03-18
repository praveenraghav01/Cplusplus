    #include <iostream>
    #include <vector>
    #include <string>
    #include <climits>
    using namespace std;
    string find_minimum_window(string s, string t) {
        if(s.empty() || t.empty()) 
    	return 0;
     
        int ns = s.size(), nt = t.size();
        vector<int> total(256, 0);
        vector<int> sofar(256, 0);
        for(int i=0; i<nt; i++) 
            total[t[i]]++;
     
        int L = 0, R; 
        int minL = 0;                   
     
            
        int count = 0;
        int min_win_len = INT_MAX;
     
        for(R=0; R<ns; R++) {           
            if(total[s[R]] == 0) 
    continue;
            else sofar[s[R]]++;
            if(sofar[s[R]] <= total[s[R]])      
                count++;
            if(count == nt) {           
                while(true) {
                    char c = s[L]; 
                    if(total[c] == 0) { 
					L++; }
                    else if(sofar[c] > total[c]) {
                        sofar[c]--;
                        L++;
                    }
                    else break;
                }  
                if(R - L + 1 < min_win_len) {  
                    min_win_len = R - L + 1;
                    minL = L;
                }
            }
        }
        string res;
        if(count == nt)                 
     res = s.substr(minL,min_win_len);  
        return res;
    }
    int main() {
        string s;
        cin>>s;
        string s2=find_minimum_window(s, "abcdefghijklmnopqrstuvwxyz");
    	if(s2.length()>0)
    	cout<<s2.length();
    	else cout<<-1;
    	
    } 
