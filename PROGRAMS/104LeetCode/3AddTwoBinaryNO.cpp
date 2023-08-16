#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    char a[] ="10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    char b[] ="110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
    // long long  aint=stoll(a,0,2);
    // long long  bint=stoll(b,0,2);


    char* endptr;
    long int aint = strtol(a, &endptr, 2);
    long int bint=strtol(b ,&endptr,2);

    cout<<aint<<endl;
    cout<<bint<<endl;


    long long n = (long long)(log2(aint+bint));


    string s =bitset<32> (aint+bint).to_string().substr(32-n-1);
    cout<<s<<endl;
   





   return 0;
}