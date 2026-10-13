#include<iostream>
#include<string>

using namespace std ;
struct sach {
	string ten;
	int sotrang;
	double gia;
};


int main (){
   int n;
   cin >> n;
   
   sach* ds(new sach[n]);
   cin.ignore();
    for(int i = 0;i < n ; i++){
    	cout << "sach" << i + 1 << ":\n";
    	getline (cin , ds[i].ten);
    	cin >> ds[i].sotrang;
    	cin >> ds[i].gia;
    	cin.ignore();
	}
	
	
	cout << "\n--- thong tin sach --- \n";
	for (int i = 0; i< n ; i++){
	  cout << "sach "<< i + 1 << ": \n" ;
	  cout << "ten :"<< ds[i].ten << "\n";
	  cout << "trang :"<< ds[i].sotrang << "\n";
	  cout << "gia: "<< ds[i].gia << "\n";
	  cout << "gia tb moi trang :" << ds[i].gia/ds[i].sotrang << "\n";
	  cout<< "=========== \n ";
	}
	
	
    int max = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].gia > ds[max].gia) {
            max = i;
        }
    }
    cout << "\nSach co so tien cao nhat la: " << ds[max].ten;
    cout << " voi so tien la: " << ds[max].gia << " \n";
	 
	return 0;
	
	
	

}

