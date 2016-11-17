#include <iostream>

using namespace std;

void bubbleSort(int unsort[], int n){
	int j,k,temp;
	for(int i=1;i<n;i++){
		j = i;
		temp = unsort[i];
		while(j > 0 && unsort[j-1]>temp){
			unsort[j] = unsort[j-1];
			j = j-1;
		}
		unsort[j] = temp;
	}
}

void main(){
	int unsort[] = {10,5,252,36,47,815,91,26,510,46,7,22,31};
	int n = 13;

	bubbleSort(unsort,n);

	for(int i = 0;i<=n-1;i++){
		cout << unsort[i] << " ";
	}
}

