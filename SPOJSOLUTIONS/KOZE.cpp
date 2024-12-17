// Problem: KOZE
// Submission ID: 26058939
// Language: 6352

#include<bits/stdc++.h>
using namespace std;
int wolf,sheep,key;
void dfs(int i,int j,vector<vector<int>>&a,vector<vector<char>>&ar)
{   //cout<<"sex"<<i<<"  "<<j<<endl;
    if(i==ar.size()-1||j==ar[0].size()-1)
    key=1;
   a[i][j]=1;
  if(ar[i][j]=='v')
    wolf++;
  if(ar[i][j]=='k')
    sheep++;
    //cout<<"sex      1";
  if(i!=ar.size()-1&&ar[i+1][j]!='#'&&a[i+1][j]==0)
    {   a[i+1][j]=1;
        dfs(i+1,j,a,ar);}
    //cout<<" ex2";
  if(j!=ar[0].size()-1&&ar[i][j+1]!='#'&&a[i][j+1]==0)
    {   a[i][j+1]=1;
        dfs(i,j+1,a,ar);}
       // cout<<"s3";
  if(i!=0&&ar[i-1][j]!='#'&&a[i-1][j]==0)
    {   a[i-1][j]=1;
        dfs(i-1,j,a,ar);}
        //cout<<"s4";
  if(j!=0&&ar[i][j-1]!='#'&&a[i][j-1]==0)
    {   a[i][j-1]=1;
        dfs(i,j-1,a,ar);}

}
int main()
{int r,c;
 scanf("%d%d",&r,&c);
 int s=0,w=0;
 vector<vector<char>>ar(r,vector<char>(c));
 for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
           cin>>ar[i][j];
 vector<vector<int>>a(r,vector<int>(c,0));
 for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            { if(a[i][j]==0&&ar[i][j]!='#')
                { key=0;
                  sheep=wolf=0;
                  dfs(i,j,a,ar);
                  if(key==1)
                  {s+=sheep;
                  w+=wolf;}
                  else
                  { if(sheep>wolf)
                      s+=sheep;
                     else
                      w+=wolf;

                  }


                }

            }
  cout<<s<<" "<<w;
 return 0;}
