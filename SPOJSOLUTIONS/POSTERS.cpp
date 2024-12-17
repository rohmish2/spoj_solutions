// Problem: POSTERS
// Submission ID: 26644535
// Language: 5200

#include<bits/stdc++.h>
using namespace std;
void update(int l,int r,int node,int sl,int sr,vector<bool>&seg,vector<bool>&lazy)
{   if(lazy[node])
     { seg[node]=true;//update seg node
       if(sl!=sr)//if not leaf
         { lazy[2*node+1]=true;
           lazy[2*node+2]=true;
         }

     lazy[node]=false;}
 
 if(sl>=l&&sr<=r)
   {seg[node]=true;//mark true
     if(sl!=sr)//if not leaf
         { lazy[2*node+1]=true;
           lazy[2*node+2]=true;
         }   
   return;}
 if(sl>r||sr<l)//dont update
 	return;

 int mid=(sl+sr)>>1;
update(l,r,2*node+1,sl,mid,seg,lazy);
update(l,r,2*node+2,mid+1,sr,seg,lazy);
seg[node]=seg[2*node+1]*seg[2*node+2];
}
bool query(int l,int r,int node,int sl,int sr,vector<bool>&seg,vector<bool>&lazy)
{ if(lazy[node])
     { seg[node]=true;
       if(sl!=sr)
         { lazy[2*node+1]=true;
           lazy[2*node+2]=true;
         }

     lazy[node]=false;}
  if(sl>=l&&sr<=r)
   {
   return seg[node];}
 if(sl>r||sr<l)
 	return true;

 int m=(sl+sr)>>1;
 return seg[node]=(query(l,r,2*node+1,sl,m,seg,lazy)&&query(l,r,2*node+2,m+1,sr,seg,lazy));
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t; 
 cin>>t;

 while(t--)
 {  int q; 
    cin>>q;
    
   vector<pair<int,int>>que;
  int maxi=0;
    vector<int>sett;
   unordered_map<int,bool>mmm;
   for(int i=0;i<q;i++)
     { int i1,i2;
     	cin>>i1>>i2;
          if(!mmm[i1])
          {sett.push_back(i1);
          	mmm[i1]=true;}
          if(!mmm[i2])
          {sett.push_back(i2);
           mmm[i2]=true;}
          
          maxi=max(maxi,i2);
          que.push_back({i1,i2});}
    sort(sett.begin(),sett.end());
    unordered_map<int,int>mm;
     int cnter=1;
     for(auto i:sett)
     	mm[i]=cnter++;
    
    vector<bool>l(4*sett.size()+100,false),seg(4*sett.size()+100,false);      
  int cnt=0;
  for(int i=q-1;i>=0;i--)
     { if(!query(mm[que[i].first]-1,mm[que[i].second]-1,0,0,sett.size()+100,seg,l))
     	cnt++;
        update(mm[que[i].first]-1,mm[que[i].second]-1,0,0,sett.size()+100,seg,l);

       //cout<<cnt<<" 1\n";
     }

 cout<<cnt<<endl;

 }

return 0;

}