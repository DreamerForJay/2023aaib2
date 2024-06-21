//week15-5.c
//LeetCode 1208. Get Equal Substrings Within Budget寫到一半
int equalSubstring(char* s, char* t, int maxCost) {
    int ans=0,j=0;
    int N=strlen(s); //先知道字串的長度
    for(int i=0;i<N;i++){ //字串的迴圈
        maxCost -= abs(s[i]-t[i]);
        while(maxCost<0){
            maxCost +=abs(s[j]-t[j]);
            j+=1;
        }
        if(i-j+1>ans) ans=i-j+1;
    }
    return ans;
}
