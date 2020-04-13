#include <iostream>
#include <cstdlib>
#include <cstdio>
int main() {
        string dosyaAdi;
        string karakterler="asffgkhljprueywwbxmmz9284";
        cout<<"\n Dosya adini girin: ";
        cin>>dosyaAdi;
        int denemeSayisi;
        cout<<"\nDeneme sayisi ni secin: ";
        cin>>denemeSayisi;
        int haneSayisi;
        cout<<"\nSifreniz kac haneli olacak : ";
        cin>>haneSayisi;
        char komut[100];
        int ek;
        for(int i=0;i<denemeSayisi;i++) {
                string sifre;
                for(int j=0;j<haneSayisi;j++) {
                        sifre += karakterler[rand()%karakterler.size()];
                }
                ek = sprintf(komut,"unrar e -p%s %s",sifre.c_str(), dosyaAdi);
                int kontrol;
                kontrol = System(komut);
                if(kontrol==EXIT_SUCCESS) {
                        cout<<"\nDogru sifre bulundu >> "<<sifre<<endl;
                        break;
                }
                        else {
                                cout<<"\nSifre yanlis >> "<<sifre<<endl;
                        }
                }
        }
