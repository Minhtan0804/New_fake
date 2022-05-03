#include<bits/stdc++.h> 
using namespace std; 
int wei,n; 
int cow[105],F[105][25005]; 

int cowMovie(){ 
    memset(F, 0, sizeof(F)); 
    for(int j = 1; j <= wei; ++j) 
        F[0][j] = 0; 
    for(int i = 1; i <= n; ++i){ 
        for(int j = 1; j <= wei; ++j){ 
            F[i][j] = F[i-1][j]; 
            if(cow[i] <= j){ 
                F[i][j] = max(F[i][j], F[i-1][j-cow[i]] + cow[i]); 
            } 
        } 
    } 
    return F[n][wei]; 
} 

main(){ 
    cin >> wei >> n; 
    for(int i=1;i<=n;++i) cin>>cow[i]; 
    cout<<cowMovie(); 
}