// Problem: IAPCR2D
// Submission ID: 26139293
// Language: 4628

#include<bits/stdc++.h>
using namespace std;
int main()
{//vector<int>prime={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109};
 vector<long long>k={ 0,1, 2, 4, 8, 16, 30, 60, 96, 160, 270, 540, 792, 1584, 2592, 4032, 5376, 10752, 14688, 29376, 41040, 60800, 96000, 192000, 242880, 340032, 532224, 677376, 917280, 1834560, 2332800, 4665600, 5529600, 7864320, 12165120, 16422912, 19595520, 39191040, 60466176, 85100544, 102435840, 204871680, 258048000, 516096000, 677376000, 819624960, 1258709760, 2517419520, 2876670720, 3698576640, 4464046080, 6210846720, 8087040000, 16174080000, 18559756800, 23984916480, 28217548800, 39016857600, 59609088000, 119218176000, 137106432000, 274212864000, 418535424000, 492139929600, 543050956800, 695105224704, 850195906560, 1700391813120, 2190889451520, 3012472995840, 3543845437440, 7087690874880, 7848891187200, 15697782374400, 23878316851200, 27450031472640, 35265665433600, 43662252441600, 53061765120000, 106123530240000, 117666791424000, 130387525632000, 198057000960000, 396114001920000, 447913525248000, 564371041812480, 856880423239680, 1169709784104960, 1363487007375360, 2726974014750720, 3024469750579200, 3703432347648000, 4735710904320000, 6454598565888000, 9790683217920000, 12282857127936000, 13247091081216000, 26494182162432000, 30342810729185280, 35148882404966400, 39001250856960000, 78002501713920000, 93807673344000000, 187615346688000000, 217463242752000000, 244254714259046400, 369974052480614400, 739948104961228800, 798687560466432000, 1597375120932864000};

 int t;
scanf("%d",&t);
while(t--)
{ long long a;
  scanf("%lld",&a);
  int to=lower_bound(k.begin(),k.end(),a)-k.begin();
  if(a==0||to==k.size()||k[to]!=a)
  printf("nai\n");
  else
  printf("%d\n",to);


}
 return 0;}
