#include <iostream>
#include <vector>

using namespace std;

vector<int> p;

int main() {
  int n, input;
  cin >> n;
  p.push_back(0);
  
  for(int i =0; i<n; i++){
    cin>> input;
    p.push_back(input);
  }

  int dp[n+2];

  dp[0] = 0;
  dp[1] = p[1];

  int temp = 0;
  int max = 0;

  for(int i =2; i<=n;i++ ){
    temp = 0;
    max = p[i];
    for(int j =1; j<=(i/2); j++){
      temp = dp[j] + dp[i-j];
      if(max < temp){
        max = temp;
      }
    }
    dp[i] = max;
  }

  cout << dp[n];
  return 0;
  
} 