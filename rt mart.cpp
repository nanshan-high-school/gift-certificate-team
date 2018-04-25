#include<iostream>
using namespace std;
//product商品數量、p陣價格、total有幾種排列組合 、rank陣排列方法 
int main(){
	cout << "你要在RT-mart買幾樣產品啊??";
	int product;
	cin >> product;
	int p[product];
	for(int t = 0 ; t < product ; t++){
		cout << "請輸入第" << t + 1 << "產品的金額:";
		cin >> p[t]; 
	}
	int totalR = 1;
	for(int t = 1, p = 2 ; t < product ; t ++){
		totalR += p;
		p = p*2;
	}
	int rank[totalR][product/2];
	for(int t1 = 0 ; t1 < totalR ; t1 ++){
		for(int t2 = 0 ; t2 < product / 2 ; t2 ++){
			rank[t1][t2] = 0;
		}
	}
	for(int t1 = 0 ; t1 < totalR ; t1 ++){
		int m = t1 + 1;
		for(int t2 = 0 ; t2 < product / 2 ; t2 ++){
			rank[t1][t2] = m;
			for(t3 = 0 ; t3 < 5 ; t3 ++){
				if(rank[t1][t2] > product){
					rank[t1][t2] % product + 
					if(rank[t1][t2] > product){
					
					}
				}
			} 
		}
	
	}

	
	
	
	
	
	system("Pause");
	return 0;
}
