#include <iostream>

using namespace std;

void insertSort(int unsort[], int n){
	int k;

	for(int i = 0;i<=n-1;i++){
		for(int j = i+1;j<=n-1;j++){
			if(unsort[j] < unsort[i]){
				k = unsort[i];
				unsort[i] = unsort[j];
				unsort[j] = k;
			}

		}
	}
}

void main(){
	int unsort[] = {10,5,25,36,47,85,91,2,5,46,7,22,1};
	int n = 13;

	insertSort(unsort,n);

	for(int i = 0;i<=n-1;i++){
		cout << unsort[i] << " ";
	}
}