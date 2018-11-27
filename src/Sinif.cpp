/**          

* @date  31.10.2018  
* @author  hseyinsade*/
#include "Sinif.hpp"


    Sinif::Sinif(char SinifName)
    {
      this->SinifName=SinifName;
      toplamOgreciSayisi=0;
    }
    char Sinif::getSinifName()
    {
      return SinifName;
    }
    int Sinif::getToplamOgreciSayisi()
    {
      return toplamOgreciSayisi;
    }
    void Sinif::OgrenciEkle(char Name)
    {
      Ogrenciler[toplamOgreciSayisi]=new Ogrenci(Name);
      toplamOgreciSayisi++;
    }
    Ogrenci* Sinif::getOgrenci(int index)
    {
      return Ogrenciler[index];
    }
    ostream& operator<<(ostream& ekran,Sinif& sag)
    {
      cout<<"Sinif "<<sag.getSinifName()<<endl;
      for(int i=0;i<sag.getToplamOgreciSayisi();i++)
      cout<<*(sag.getOgrenci(i))<<"("<<sag.getOgrenci(i)<<")"<<endl;
      cout<<endl;
      return ekran;
    }
    Sinif::~Sinif()
    {
      for(int i=0;i<getToplamOgreciSayisi();i++){
          delete Ogrenciler[i];
      }
    }
