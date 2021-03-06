// AllDiv3.cpp
		/*Coded By Mr. Black-D3vil*/
#include <bits/stdc++.h>
#include <cassert>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ff                 first
#define ss                 second
#define endl               "\n"
#define ll                 long long
#define ld                 long double
#define loop(a, b, c)      for(ll (a) = (b); (a)<=(c); (a)++)
#define looprev(a, b, c)   for(ll (a) = (b); (a)>=(c); (a)--)
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define mii                map<ll, ll>
#define pqb                priority_queue<ll>
#define pqs                priority_queue<int, vi, greater<ll> >
#define Unique(c)          (c).resize(unique(all(c))-(c).begin())
#define all(n)             n.begin(),n.end()
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(t)               int x; cin>>x; while(x--)
//mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;

const ll maxn = 1e5 + 5;

    
void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("//home//black-devil//Desktop///InputOutput//input.txt", "r", stdin);
		freopen("//home//black-devil//Desktop//InputOutput//output.txt", "w", stdout);
	#endif
}


int main(int argc, char const *argv[])
{

	file_i_o();

	clock_t start, end;
    start = clock();

    // precompute();

	w(t){

		int n;
		cin >> n;
		int A = 0, B = 0;
		int temp;
		for(int i = 0; i < n; i++) {
			cin >> temp;
			if(temp % 3 == 1) {
				A++;
			}
			if(temp % 3 == 2) {
				B++;
			}
		}
		int ans = 0;
		if(A > B) {
			ans += B;
			A -= B;
			B = 0;
		} else {
			ans += A;	
			B -= A;
			A = 0;
		} 
		bool flag = false;
		if(A % 3 == 0 && B % 3 == 0) {
			ans += ((A/3)*2 + (B/3)*2);
			flag = true;
		}
		if(flag) {
			cout << ans <<endl;
		} else {
			cout << -1 <<endl;
		}
		
	}


	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";
    cerr<<"Coded by Mr. Black-D3vil"<<endl;

	return 0;
}