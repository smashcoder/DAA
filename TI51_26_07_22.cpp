#include <iostream>

using namespace std;

int main(){
	int W;
	cout<<"Weight Of Bag:";
	cin>>W;
	int n;
	cout<<"\nNumber of Items:";
	cin>>n;
	int a[n], b[n];
	double c[n], d[n], e;
	for(int i=0;i<n;i++){
		cout<<"\nWeight:";
		cin>>a[i];
		cout<<"\nProfit:";
		cin>>b[i];
	}
	/*for(int i=0;i<n;i++){
		cout<<"\n"<<a[i]<<"\t"<<b[i];
	}*/
	for(int i=0;i<n;i++){
		double div = b[i]/a[i];
		c[i] = div;
	}
	/*for(int i=0;i<n;i++){
		cout<<"\n"<<c[i];
	}*/
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(c[j]>c[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				
				int temp1 = b[j];
				b[j] = b[j+1];
				b[j+1] = temp1;
				
				double temp2 = c[j];
				c[j] = c[j+1];
				c[j+1] = temp2;
			}
		}
	}
	for(int i=n-1;i>=0;i--){
		if(W>a[i]){
			W = W - a[i];
			d[i] = 1;
		}
		else if(W>0){
			d[i] = (float)W/a[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<"\n"<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<d[i];
		e+= ((float)d[i]*b[i]);
	}
	cout<<"\nProfit:"<<e;
}
