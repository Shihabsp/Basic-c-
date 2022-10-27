#include<iostream>
using namespace std;

int main()
{
    //cout<< "Enter a number."<<endl;
    //int num, sum=0;
    //cin >> num;
    int t, n, m, black = 0;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n >> m;
		string arr[n][m];

		for(int j=0; j<n; j++){
			for(int k=0; k<m; k++){
				cin >> arr[j][k];
			}
		}
		for(int j=0; j<n; j++){
            int pblack = 0;
			for(int k=0; k<m; k++){
				if(arr[j][k] == "#"){
					pblack++;
				}
			}
			if(black <= pblack){
				black = pblack;
			}
		}
		cout << black << endl;
	}
    

    /*for(int i=1; i<=num; i++){
        sum+=i;
        if(i==num){
            cout<< i <<" = ";
        }
        else{
            cout<< i << "+";
        }
        
    }
    cout << sum << endl;*/
    return 0;
}