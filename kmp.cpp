/*--------------------------------KMP--------------------------------------*/

 vector<int> prefixfunction(string z){
        int n=(int) z.length();
        vector<int> lps(n);
        lps[0]=0;
        for(int i=1;i<n;i++){
            int j=lps[i-1];
            while(j>0&&z[i]!=z[j])
                j=lps[i-1];
            if(z[i]==z[j]) j++;
            lps[i]=j;
        }
        return lps;
 }
