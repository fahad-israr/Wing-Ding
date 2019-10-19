#include <bits/stdc++.h>
using namespace std;

struct Point {
	int x;
	int y;
	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};


int main()
{
    int t,p;
    cin>>t;
    if(t<=2)return t;
    vector<vector<int>> points;
    while(t--){
        vector<int>tp;
        cin>>p;tp.push_back(p);
        cin>>p;tp.push_back(p);
        points.push_back(tp);
    }
   
    int r=0,n;
	

	vector<Point> ps;
	for(auto &z:points) {
		Point p=Point(z[0],z[1]);
		ps.push_back(p);
	}

	map<pair<int,int>, int> mp;
	for (int i = 0; i < ps.size(); ++i) {
		mp.clear();
		n = 1;
		for (int j = i + 1; j < ps.size(); ++j) {
			int a = ps[i].x - ps[j].x, b = ps[i].y - ps[j].y;
			if (a==0 && b==0) {
				n ++;
				continue;
			}
			if (a==0)
				mp[make_pair(0, 1)] ++;
			else if (b==0)
				mp[make_pair(1, 0)] ++;
			else {
				int k = __gcd(a, b);
				mp[make_pair(a / k, b / k)] ++;
			}
		}
		r = max(r, n);
		for (auto &x : mp)
			r = max(r, x.second + n);
	}
	cout<<r;
    
    return 0;
}
