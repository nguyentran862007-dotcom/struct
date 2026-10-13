#include<iostream>
#include<string>
using namespace std;
struct sach {
	string ten;
	int trang;
	float gia;
}; 
   
   int main(){
   	sach s1;
    getline(cin, s1.ten);
    cin >> s1.trang;
    cin >> s1.gia;
      float tien = s1.gia/s1.trang ;
    cout << tien ;
    return 0;
   	
   }
