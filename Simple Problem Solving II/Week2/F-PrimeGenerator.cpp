#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>primes;
void sieve(ll b){
    bool isPrime[31700];
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= b; i++)
    {
      if (isPrime[i])
      {
        primes.push_back(i);
        for (int j = i*i; j <= b; j+=i)
        {
          isPrime[j] = false;
        } 
      } 
    }
}


void segmentedSeive(ll  a, ll b){
  
}


int main()
{
  ll a, b;
  int t;
  cin >> t;
  while (t--)
  {
    cin >> a >> b;
    segmentedSeive(a,b);
  }
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){
//     if(n==0 || n==1)    return false;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0)  return false;
//     }
//     return true;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    long long int n, m;
// 	    cin>>n>>m;
// 	    vector<int> prime;
// 	    for(int i=n; i<=m; i++){
// 	        if(isPrime(i))  prime.push_back(i);
// 	    }
// 	    for(auto it: prime) cout<<it<<endl;
// 	}
// 	return 0;
// }
