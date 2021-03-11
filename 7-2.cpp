#include <iostream>
using namespace std;

const int MAXSIZE = 6;
int main()
{
    int n,max_line[MAXSIZE] = {0},min_colomn[MAXSIZE],flag = 1;
    cin >> n;
    int array[MAXSIZE][MAXSIZE];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> array[i][j];
            if(array[i][j] > max_line[i])
                max_line[i] = array[i][j];    
        }
    }
    
    for(int i=0;i<n;++i){
        min_colomn[i] = array[0][i];
        for(int j=0;j<n;++j){
            if(array[j][i] < min_colomn[i])
                min_colomn[i] = array[j][i];
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(array[i][j] == max_line[i] && array[i][j] == min_colomn[j]){
                cout << i << " " <<j;
                flag = 0;
            }
        }
    }
    if (flag) cout << "NONE";
    system("pause");
    return 0;
}