// Problem: BRCKTS
// Submission ID: 25625021
// Language: 4536

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define watch(x) cout << (#x) << " is " << (x) << endl
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
void prinv(vi &v){copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));cout << endl;}
int n;
string s;
const int N = 3e4+5;
// first value is no. of unpaired opening brackets
// second value is no. of unpaired closing brackets
vector< pii > seg(4*N);
void build(int l,int r,int pos)
{
	if(l > r)	return;
	if(l == r)
	{
		seg[pos] = {s[l]=='(',s[l]==')'};
		return;
	}
	int mid = (l+r)/2;
	build(l,mid,2*pos+1);
	build(mid+1,r,pos*2+2);
	// unpaired opening brackets will be no. of unpaired opening brackets from right node(as they will never be paired with left closing brackets e.g ") (" . ) and the leftover brackets from left which are left unpaired even after merging
	seg[pos].fi = seg[pos*2+2].fi+max(0,seg[pos*2+1].fi-seg[pos*2+2].se);
	// similar argument for closing brackets
	seg[pos].se = seg[pos*2+1].se+max(0,seg[pos*2+2].se-seg[pos*2+1].fi);
}

void upd(int k,int l, int r, int pos)
{
	if(l > r)	return;
	if(l == r)
	{
		swap(seg[pos].fi,seg[pos].se);
		return;
	}
	int mid = (l+r)/2;
	if(k <= mid)
		upd(k,l,mid,pos*2+1);
	else
		upd(k,mid+1,r,pos*2+2);
	seg[pos].fi = seg[pos*2+2].fi+max(0,seg[pos*2+1].fi-seg[pos*2+2].se);
	seg[pos].se = seg[pos*2+1].se+max(0,seg[pos*2+2].se-seg[pos*2+1].fi);	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int _;
	// cin >> _;
	_ = 1;
	while(_ < 11)
	{
		cout << "Test "<< _ <<":"<< '\n';
		cin >> n;
		cin >> s;
		int q,k;
		cin >> q;
		build(0,n-1,0);
		while(q--)
		{
			cin >> k;
			if(!k)
			{
				if(seg[0].fi == 0 && seg[0].se == 0)
					cout << "YES"<<'\n';
				else
					cout << "NO"<<'\n';
			}
			else
			{
				k--;
				upd(k,0,n-1,0);
			}
		}
		_++;
	}
}