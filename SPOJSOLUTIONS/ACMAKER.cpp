// Problem: ACMAKER
// Submission ID: 26591511
// Language: 4596

#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
   cin>>n;
   while(n)
   {
   map<string,bool>m;
   for(int i=0;i<n;i++){ string temp; cin>>temp;m[temp]=true;}
    char tmp;


    while(1)
    { vector<string>relevant;
       unsigned int maxi=0;
       string temp;
        string abbr;
      cin>>abbr;
      transform(abbr.begin(),abbr.end(),abbr.begin(),::tolower);
    tmp=getchar();
    while(tmp=getchar())
    { //cout<<tmp<<endl;
        if(tmp=='\n')
        { if(!m[temp])
            {unsigned int q=temp.size();
           maxi=max(maxi,q);

relevant.push_back(temp);}
         break;
        }
       else if(tmp==' ')
       {if(!m[temp]&&temp.size()>0)
             { unsigned int q=temp.size();
maxi=max(maxi,q);
                relevant.push_back(temp);}
         temp.clear();
       }
       else
      { temp.push_back(tmp);

       }

    }
    if(relevant[0][0]=='C')
        break;
    vector<vector<vector<int>>>dp(relevant.size()+1,vector<vector<int>>(abbr.size()+1,vector<int>(maxi,0)));
    //vector<vector<int>>dp(relevant.size()+1,vector<int>(abbr.size()+1,0));
    //dp[relevant.size()][abbr.size()]=1;
    long ans=0;
    for(int i=relevant.size()-1;i>=0;i--)
       for(int j=abbr.size()-1;j>=0;j--)
             for(int k=relevant[i].size()-1 ;k>=0;k--)
                 {
                     if(relevant[i][k]==abbr[j])
                         {// cout<<i<<" "<<k<<" "<<" "<<<<" "<<relevant[i][k]<<endl;
                             for(int l=k+1;l<relevant[i].size();l++)
                               dp[i][j][k]+=dp[i][j+1][l];
                              if(i!=relevant.size()-1)
                             for(int l=0; l<relevant[i+1].size();l++)
                               {
                                   dp[i][j][k]+=dp[i+1][j+1][l];}

                           if(i+1==relevant.size()&&j+1==abbr.size())
                              dp[i][j][k]++;

                         // cout<<i<<"   "<<j<<"    "<<k<<"   "<<dp[i][j][k]<<endl;
                          if(i==0&&j==0)
                            ans+=dp[i][j][k];
                         }
                 }
transform(abbr.begin(),abbr.end(),abbr.begin(),::toupper);
     if(ans!=0)
    cout<<abbr<<" can be formed in "<<ans<<" ways\n";
     else
    cout<<abbr<<" is not a valid abbreviation\n";
    }
   cin>>n;}

return 0;}
