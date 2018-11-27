/**        
* @date  31.10.2018  
* @author  hseyinsade
*/
#include "Yonetim.hpp"


int main()
{
  ifstream fileread;
  fileread.open("Okul.txt", ios::in);
  string okunan,sc1,sc2;
  Yonetim *yonetim=new Yonetim();
  while (!fileread.eof())
  {
    getline(fileread, okunan);
    yonetim->SinifEkle(okunan);
    //cout << okunan << "\n";
  }
  fileread.close();
  int menuSecim=0;
  do{
    yonetim->ListeYazdir();
    cout<<"1- Sinif Degistir Islemi\n"<<"2- Ogrenci Degistir Islemi\n"<<"3- Cikis\n"<<"=>";
    cin>>menuSecim;
    switch (menuSecim) {
      case 1:
      {
        cout<<"1. Sinif Adi:";
        cin>>sc1;
        cout<<"2. Sinif Adi:";
        cin>>sc2;
        yonetim->SinifDegistir(sc1[0],sc2[0]);
        break;
      }
      case 2:
      {
        cout<<"1. Ogrenci:";
        cin>>sc1;
        cout<<"2. Ogrenci:";
        cin>>sc2;
        yonetim->OgrenciDegistir(sc1[0],sc2[0]);
        break;
      }
    }
  }while(menuSecim==1||menuSecim==2);
  delete yonetim;
  return 0;
}
