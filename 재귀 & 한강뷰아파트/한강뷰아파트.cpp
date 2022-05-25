#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
vector<pair<double,double> > V;
int main()

{
    int n, i, x1, x2, y1, y2, x, y;
    double yy;
    scanf("%d", &n);
    scanf("%d %d", &x, &y);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x2<x){
            V.push_back({(double)(x1-x)*y/(y-y1),(double) (x2-x)*y/(y-y2)});
        }else if(x1>x){
            V.push_back({(double)(x1-x)*y/(y-y2),(double) (x2-x)*y/(y-y1)});
        }else{
            V.push_back({(double)(x1-x)*y/(y-y1),(double) (x2-x)*y/(y-y1)});
        }
    }
    sort(V.begin(),V.end());
    yy = y * -1.0;
    for(auto n : V){
        if(n.first<=yy){
            yy = max(yy, n.second);
        } else if(yy>=y){
            return !printf("No");
        } else{
            return !printf("Yes");
        }
    }
    return !printf("No");
}
