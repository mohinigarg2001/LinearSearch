#include<iostream>
using namespace std;

bool Search(int arr[], int n , int key){
	for(int i= 0; i<n;i++){
		if(arr[i]==key){
			return 1;
		}
	}return 0;
}


int main(){
	
	int arr[10]= {1,34,-34,43,-8,1,33,3,45,2};
	int key;
	cout<<"Enter the key you wanted to search:"<<endl;
	cin>>key;
	bool found = Search(arr,10,key);
	if(found){
		cout<<"Key is Found"<<endl;
	}
	else{
		cout<<"Key is not found"<<endl;
	}
}
