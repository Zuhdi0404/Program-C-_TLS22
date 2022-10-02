// Kasir bayar-bayar sederhana
#include <iostream>
using namespace std;

int main() {
    int hrg,ttl,jml,kbh,ssk;
    cout<<"Zuhdi Mubarak \n";
    cout<<"22/500112/TK/54802 \n";
    cout<<"Gauss Tambunan \n\n";

    cout<<"Nota Pembelian Barang Halal \n";
    cout<<"Harga Barang  : ";cin>>hrg;
    cout<<"Jumlah Barang : ";cin>>jml;kbh=hrg*jml;
    cout<<"Total harga   : ";cout<<kbh;cout<<endl;
    cout<<"Total Bayar   : ";cin>>ttl;ssk=ttl-kbh;
    cout<<"------------------------\n";
    cout<<"Kembalian     : "<<ssk<<endl<<endl;

    cout<<"Terima kasih telah mampir YGY";


    return 0;
}
