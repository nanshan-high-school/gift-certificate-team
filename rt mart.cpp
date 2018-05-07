//OK
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout << "How many product are you going to buy in RT-Mart?";
	int product;
	cin >> product;
	int p[product];
	for(int t = 0 ; t < product ; t++){
		cout << "What is the price of NO." << t + 1 << " ?";
		cin >> p[t]; 
	}
	int rankT = pow(2,product);
	int rank[rankT][product];
	for(int x = 0 ; x < product ; x ++){
		int change = pow(2, x);
		int add = 0;
		for(int y = 0 ; y < rankT ; y ++){
			rank[y][x] = add;
			if(y % change == 0){
				add = (add == 0) ? 1 : 0;
			}
		}
	}
	int A[rankT] = {0}, B[rankT] = {0};
	for(int t = 0 ; t < rankT ; t ++){
		for(int t2 = 0 ; t2 < product ; t2 ++){
			if(rank[t][t2] == 1){
				A[t] += p[t2];
			} else{
				B[t] += p[t2];
			}
		}
	}
	int refound[rankT], refoundA[rankT], refoundB[rankT];
	for(int t = 0 ; t < rankT ; t ++){
		refoundA[t] = 100 - (A[t] % 100);
		refoundB[t] = 100 - (B[t] % 100);
		if(refoundA[t] == 100){
			refoundA[t] = 0;
		}
		if(refoundB[t] == 100){
			refoundB[t] = 0;
		}
	}
	for(int t = 0 ; t < rankT ; t ++){
		refound[t] = refoundA[t] + refoundB[t];
	}
	int most = 0, mostR = 0;
	for(int t = 0 ; t < rankT ; t ++){
		if(refound[t] > mostR){
			most = t;
			mostR = refound[t];
		}
	}
	cout << "\nA should buy ";
	for(int t = 0 ; t < product ; t ++){
	 	if (rank[most][t] == 1){
	 		cout << "No." << t + 1 << " ";
		}
	}
	cout << "product.\nHe(She) will get $" << refoundA[most] << " for refound.\nB should buy ";
	for(int t = 0 ; t < product ; t ++){
	 	if (rank[most][t] == 0){
	 		cout << "No." << t + 1 << " ";
		}
	}
	cout << "product.\nHe(She) will get $" << refoundB[most] << " for refound.\nThe total cash refound is $" << mostR << ".";
	system("Pause");
	return 0;
}
