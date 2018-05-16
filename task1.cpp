#include <iostream>
#include<string>
using namespace std;
void encrypt(char aux[],int key,int len){
 	int arr[len];
  for(int n=0;n<len;n++)
  arr[n]=aux[n];

  for(int i=0;i<len;i++){
      if(arr[i]<123&&arr[i]>=97){
          arr[i]+=key;
          if(arr[i]>=123)
            arr[i]-=26;
          
      }else if(arr[i]<98&&arr[i]>=65){
          arr[i]+=key;
            if(arr[i]>=98)
                arr[i]-=26;
      }
  }
  for(int n=0;n<len;n++){
      aux[n]=arr[n];
  
  cout<<aux[n];}
}

void decrypt(char arr[],int key, int len){
     arr[n]=aux[n];
  for(int i=0;i<len;i++){
      if(arr[i]<123&&arr[i]>=90){
          arr[i]-=key;
          if(arr[i]<90)
            arr[i]+=26;
          
      }else if(arr[i]<98&&arr[i]>=65){
          arr[i]-=key;
            if(arr[i]<65)
                arr[i]+=26;
      }
  }
   for(int n=0;n<len;n++){
      aux[n]=arr[n];
  
  cout<<aux[n];}
}
int main() {
    int len;
    int k;
    cout<<"Enter the length of the text"
    cin>>len;
    char arr[len];
    for(int i=0;i<len;i++){
      cin>>arr[i];}
     cout<<"Enter the encyption key";
     cin>>k;
    
    
    encrypt(arr,k,len);
    
    
	// your code goes here
	return 0;
}
