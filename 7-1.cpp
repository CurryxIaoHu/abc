#include <iostream>
using namespace std;

int main()
{
	int flag[10] = {0};
	int tag[10] = {0};
	int n,j,max;
	string tmp;
	cin >> n;
	while(n--){
		cin >> tmp;
		while(tmp.size()>0){
			flag[(int)tmp.back()-'0']++;
			tmp.pop_back();
		}
	}
	max = 0;
	for(int i=0;i<10;++i){
		if (flag[i] > flag[max])
		    max = i;
	} //更新max 
	tag[max] = 1;
	for(int i=0;i<10;++i){
		if (flag[i] == flag[max])
		    tag[i] = 1;
	} //tag[i] = 1表示i是出现次数最多的（之一）
	cout << flag[max] << ": ";
	for (int i = 0;i<10;++i){
		if(tag[i])
		    j= i;
	}
	for (int i = 0;i<10;++i){
		if(tag[i]==1 && i!=j)
		    cout << i << " ";
		else if (tag[i]==1 && i==j)
		    cout << i;
	}
	return 0;
}