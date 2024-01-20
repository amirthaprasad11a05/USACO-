5. Blocks
// http://www.usaco.org/index.php?page=viewproblem2&cpid=1205
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N; 
    cin >> N;
    string str[4];
    for(int i=0;i<4;i++) 
    cin>>str[i];
    for(int i=0;i<N;i++){
        string s; 
        cin>>s;
        bool flag=false;
        for(char a:str[0]){
            for(char b:str[1]){
                for(char c:str[2]){
                    for(char d:str[3]){
                        int cnt[26]={0};
                        cnt[a-'A']++; cnt[b-'A']++; cnt[c-'A']++; cnt[d-'A']++;
                        for(char e:s) cnt[e-'A']--;
                        int j;
                        for(j=0;j<26;j++) if(cnt[j]<0) break;
                        if(j==26) flag=true;
                    }
                }
            }    
        }
        cout<<((flag) ? "YES" : "NO")<<endl;
    }

    return 0;
}