
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define all(x)  x.begin(),x.end()
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int gcd(int u, int v)
{
    return u%v==0?v:gcd(v,u%v);
}
vector<int>primes;
const int mod=1e9+7;
const int N=100010;
int coprime[N];

void seive(){
primes.push_back(2);
coprime[2]=1;
for(int i=3;i<N;i+=2){
    if(coprime[i]==0){
        primes.push_back(i);
        if(1LL*i*i<=N){
            for(int j=i*i;j<N;j+=i){
                if(j+i>=N)break;
                coprime[j]=1;
            }
        }
    }
}
}
int binpow(int a,int pow){
if(pow==0)return 1;
int ab=binpow(a,pow/2);
ab=(1LL*ab*ab)%mod;
if(pow&1)ab=(1LL*ab*a)%mod;
return ab;
}


int main(){
int t;
sc(t);
for(int i=0;i<t;i++){
cout<<"binpow test ,give me number to raise power -- n and pow"<<endl;
int n,p;
sc2(n,p);
cout<<binpow(n,p);
}
return 0;
}

