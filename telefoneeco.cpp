#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int i, j, sssa;

bool compare(string a, string b){

 sssa = a.length();

 for (i = 0; i < sssa; ++i){
  if(a[i] < b[i]) return 1;
  if(a[i] > b[i]) return 0;
 }

 return 1;

}

int main(){

 int n, l, c;
 char num1[205];
 string bba;

 while( cin >> n || n == 1){
  vector<string> v;
  c = 0;

  for (i = 0; i < n; ++i){
   cin >> num1 ;
   v.push_back(num1);
  }

  sort(v.begin(), v.end(), compare);
  bba = v[0];
  l = bba.length();

  for (i = 1; i < n; ++i){

   for (j = 0; j < l; ++j){
    if(bba[j] == v[i][j]) c++;
    else break;
   }

   bba = v[i];

  }

  cout << c << endl;

 }

 return 0;
// pq as minhas variaveis so tem nome merda , agr q percebi
}
