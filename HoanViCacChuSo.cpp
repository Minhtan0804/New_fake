#include<bits/stdc++.h>
using namespace std;
 
vector < string > v;
int a[100005], dd[100005] = {0}, n, k;
long long c = INT_MAX;
void ql(int i){
    for(int j = 1; j <= k; j++){
        if(dd[j] == 0){
            a[i] = j;
            dd[j] = 1;
            if(i == k){
                long long x1 = INT_MAX;
                long long x2 = INT_MIN;
                for(string x : v){
                    string s = "";
                    for(int h = 1; h <= k; h++) s += x[a[h] - 1];
                    x1 = min(x1, stoll(s));
                    x2 = max(x2, stoll(s));
                }
                c = min(c, abs(x1 - x2));
            }else ql(i + 1);
            dd[j] = 0;
        }
    }
}
 
int main(){
    cin >> n >> k;
    for(int i = 0; i < n ; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    ql(1);
    cout << c;
}













//#include<bits/stdc++.h>
//using namespace std;
//vector<vector<int>> res;
//vector<int> ress;
//int n, k, A[15], B[15], C[15], ress_size, res_size;
//
//void makeVec()
//{
//    int temp = 0;
//    for (int i = 1; i <= k; i++) temp = temp*10 + A[C[i]];
//    ress.push_back(temp);
//}
//
//void makeArr(int temp)
//{
//    int i = k;
//    while(temp)
//    {
//        A[i--] = temp%10;
//        temp /=10;
//    }
//}
//
//void Try(int i)
//{
//    for (int j = 1; j <= k; j++)
//    {
//    	if(!B[j]){
//    		C[i] = j;
//            B[j] = 1;
//            if (i == k) makeVec();
//            else Try(i+1);
//            B[j] = 0;
//		}
//	}
//}
//
//void minVec(){
//	int maxx = INT_MAX;
//	for (int i = 0; i < ress_size; i++)
//    {
//        int j = 0;
////        for (j; j < res_size; j++) cout << res[j][i] << " ";
////        cout << endl;
//        for (j; j < res_size; j++) A[j] = res[j][i];
//        sort(A, A+j);
//        maxx = min((A[j-1] - A[0]), maxx);
////    cout << A[j-1]-A[0] << " ";
//    }
//    cout << maxx;
//}
//
//int main()
//{
//    cin >> n >> k;
//    int temp;
//    while(n--)
//    {
//        cin >> temp;
//        memset(B, 0, sizeof(B));
//        memset(C, 0, sizeof(C));
//        memset(A, 0, sizeof(A));
//        ress.clear();
//        makeArr(temp);
//        Try(1);
//        res.push_back(ress);
//    }
//    
//    ress_size = ress.size();
//    res_size = res.size();
//    minVec();
//}
