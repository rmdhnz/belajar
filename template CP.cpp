#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define EACH(x, a) for (auto& x: a)
#define go cout<<'\n'
#define ll long long
#define ull unsigned long long
#define F_OR(i,v) for(auto i = v.begin(); i!=v.end();++i)
#define F_ORR(i,v) for(auto i = v.rbegin(); i!=v.rend();++i)
template<class dt> void ascending(vector<dt>& v){
    sort(v.begin(),v.end());
}
template<class dt> void descending(vector<dt>&v){
    sort(v.rbegin(),v.rend());
}
void revstr(string& str){
    int len = str.size();
    for(int i = 0; i < len/2; ++i){
        swap(str[i],str[len-i-1]);
    }
}
template<class dt> void read(vector<dt>& v);
template<class dt,size_t S> void read(array<dt,S>& a);
template<class T> void read(T& x){
    cin >> x;
}
void read(long double& d){
    string t;
    read(t);
    d = stold(t);
}
template<class H, class... T> void read(H& h, T&... t){
    read(h);
    read(t...);
}
template<class A> void read(vector<A> & x){
    EACH(a,x)
        read(a);
}
