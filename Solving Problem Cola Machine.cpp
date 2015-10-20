#include<iostream>
using namespace std;

int main(){
int pilihan;
   cout<<" *=* BANDIT CAFE *=*\n\n";
   cout<<" Daftar Menu Minuman :  \n\n";
   cout<<" 1. Kopi Bohay"<<endl;
   cout<<" 2. Brotowali Milk"<<endl;
   cout<<" 3. Fresh Milk"<<endl;
   cout<<" 4. Milk Shake"<<endl;
   cout<<" 5. Flavoured Soda"<<endl;
   cout<<"\n Masukkan Pilihan Anda : ";
   cin>>pilihan;
   if(pilihan==1)
   cout<<" \n\n Minuman Anda Adalah Kopi Bohay\n "<<endl;
   else
   if(pilihan==2)
   cout<<" \n\n Minuman Anda Adalah Brotowali Milk\n "<<endl;
   else
   if(pilihan==3)
   cout<<" \n\n Minuman Anda Adalah Fresh Milk\n "<<endl;
   else
   if(pilihan==4)
   cout<<" \n\n Minuman Anda Adalah Milk Shake\n "<<endl;
   else
   if(pilihan==5)
   cout<<" \n\n Minuman Anda Adalah Flavoured Soda\n "<<endl;
   else
   cout<<" \n Pilihan Yang Anda Masukkan Salah, Silahkan Ambil Kembali Uang Anda \n"<<endl;
   cout<<"\n *=* Terima Kasih Sudah Memilih Menu Kami *=*\n\n";
return 0;
}

======================================================================================================================

#include<iostream>
using namespace std;
int main(){
int pilihan;
cout<<" *=* BANDIT CAFE *=*\n\n";
cout<<" Daftar Menu Minuman : \n\n";
cout<<" 1. Kopi Bohay\n";
cout<<" 2. Brotowali Milk\n";
cout<<" 3. Fresh Milk\n";
cout<<" 4. Milk Shake\n";
cout<<" 5. Flavoured Soda\n\n";
cout<<" Masukkan Pilihan Anda : ";
cin>> pilihan;
switch(pilihan)
{
    case 1:cout<<"\n Minuman Anda Adalah Kopi Bohay ";break;
    case 2:cout<<"\n Minuman Anda Adalah Brotowali Milk ";break;
    case 3:cout<<"\n Minuman Anda Adalah Fresh Milk ";break;
    case 4:cout<<"\n Minuman Anda Adalah Milk Shake ";break;
    case 5:cout<<"\n Minuman Anda Adalah Flavoured Soda ";break;
    default :cout<<"\n Pilihan Yang Anda Masukkan Salah, Silahkan Ambil Kembali Uang Anda. ";break;

}
cout<<"\n\n *=* Terima Kasih Sudah Memilih Menu Kami *=* \n\n";

return 0;
}

