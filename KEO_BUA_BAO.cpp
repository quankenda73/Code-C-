#include<iostream>
#include <cstdlib>
#include <ctime> 
 using namespace std;
 void game(){
 		cout<<"\n\n\t\t============TRO CHOI KEO-BUA-BAO====================";
 	cout<<"\n 1 <=> KEO";
 	cout<<"\n 2 <=> BUA";
 	cout<<"\n 3 <=> BAO";
 	cout<<"\n\n\t\t=======================END=======================";
 	
 	int nguoichoi;//Bien nay chua gia tri la 1,2,3
 	cout<<"\nMoi ban nhap lua chon: ";
 	cin>>nguoichoi;
 	//bu?c 2: Cho may chon ==>Random
	 srand(time(NULL));
	 int may = rand() % 3+1;//random trong doan[a,b] theo cong thuc sau: rand() %(b-a+1)+a;
	 //Buoc 3: so sanh ai thang cuoc 
	 if(nguoichoi == 1)
	 {
	 	if(may==3)
		 {   
		    cout<<"\nNguoi choi chon:KEO"; 
		 	cout<<"\nMay chon:BAO";
			cout<<"\nNguoi choi thang cuoc"; 
		} 
		else if(may==2)
		{
		    cout<<"\nNguoi choi chon: KEO"; 
		 	cout<<"\nMay chon:BUA";
			cout<<"\nMay WIN"<<endl; 	
		 } 
		 else {
		 	cout<<"\nNguoi choi chon: KEO"; 
		 	cout<<"\nMay chon:KEO";
		 	cout<<"\n\n\t\tKET QUA HOA NHAU !!!";
		 }
	}
	else if(nguoichoi==2) 
	{
		if(may==3)
		 {   
		    cout<<"\nNguoi choi chon: BUA"; 
		 	cout<<"\nMay chon:BAO";
			cout<<"\nMAY WIN"; 
		} 
		else if(may==1)
		{
		    cout<<"\nNguoi choi chon: BUA"; 
		 	cout<<"\nMay chon:KEO";
			cout<<"\nNguoi choi thang !!!"; 	
		} 
		else {
			cout<<"\nNguoi choi chon: BUA"; 
		 	cout<<"\nMay chon : BUA";
			cout<<"\nHoa Nhau !!!";
		} 	 
	}
	else if(nguoichoi==3)
	{
			if(may==1)
		 {   
		    cout<<"\nNguoi choi chon: BAO"; 
		 	cout<<"\nMay chon:KEO";
			cout<<"\nMAY WIN"; 
		} 
		else if(may==2)
		{
		    cout<<"\nNguoi choi chon: BAO"; 
		 	cout<<"\nMay chon:BUA";
			cout<<"\nNguoi choi thang !!!"; 	
		} 
		else {
			cout<<"\nNguoi choi chon: BAO"; 
		 	cout<<"\nMay chon : BAO";
			cout<<"\nHOA Nhau !!!";
		} 
	}
 }
 int main() 
 {
 	while(10)
	 {
	 	game();
	 	int luachon; 
        cout<<"\n\n\t\tBan co muon choi tiep khong "<<endl;
        cout<<"1.Tiep Tuc"<<endl;
		cout<<"2.Thoat"<<endl;
		 cin>>luachon;
		 if(luachon==2){
		 	break; 
		 } 
	 }	
 	system("pause");
 	return 0;
 }
