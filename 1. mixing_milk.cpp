1. mixing milk:
//http://www.usaco.org/index.php?page=viewproblem2&cpid=855
#include <iostream>
using namespace std;
int c[3],a[3];
void pour(int x,int y) {
    if(a[y]+a[x]<=c[y])
		a[y]+=a[x],
		a[x]=0;
	else
		a[x]-=(c[y]-a[y]),
		a[y]=c[y];
}
int main() {
    cin>>c[0]>>a[0];
	cin>>c[1]>>a[1];
	cin>>c[2]>>a[2];
    int bl=0,br=1;
	for(int i=0;i<100;++i) {
		pour(bl,br);
		bl=(bl+1)%3;
		br=(br+1)%3;
	}
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	return 0;
}