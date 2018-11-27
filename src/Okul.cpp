/**

* @date  31.10.2018
* @author  hseyinsade
*/
#include "Okul.hpp"

		Okul::Okul()
    {
      toplamSinifSayisi=0;
    }
    void Okul::SinifEkle(Sinif*& sinif)
    {
      Siniflar[toplamSinifSayisi]=sinif;
      toplamSinifSayisi++;
    }
    int Okul::getToplamSinifSayisi()
    {
      return toplamSinifSayisi;
    }
    int Okul::getSinifIndex(char sc)
    {
      for(int i=0;i<getToplamSinifSayisi();i++)
      {
          if(Siniflar[i]->getSinifName()==sc)
          {
            return i;
          }
      }
    }
    void Okul::SinifDegistir(int sc1,int sc2)
    {
      Sinif *t1=Siniflar[sc1];
      Siniflar[sc1]=Siniflar[sc2];
      Siniflar[sc2]=t1;
    }

    void Okul::OgrenciDegistir(int sc1,int sc2)
    {
      int temp1x,temp1y;
      int temp2x,temp2y;
      for(int i=0;i<getToplamSinifSayisi();i++)
      {
        for(int j=0;j<Siniflar[i]->getToplamOgreciSayisi();j++)
        {
          if(Siniflar[i]->Ogrenciler[j]->getName()==sc1)
          {
            temp1x=i;
            temp1y=j;
          }
          if(Siniflar[i]->Ogrenciler[j]->getName()==sc2)
          {
            temp2x=i;
            temp2y=j;
          }
        }
      }
      Ogrenci *t1=Siniflar[temp1x]->Ogrenciler[temp1y];
      Siniflar[temp1x]->Ogrenciler[temp1y] =Siniflar[temp2x]->Ogrenciler[temp2y];
      Siniflar[temp2x]->Ogrenciler[temp2y]=t1;
    }

    Sinif* Okul::getSinif(int index)
    {
      return Siniflar[index];
    }
    ostream& operator<<(ostream& ekran,Okul& sag)
    {
      for(int i=0;i<sag.getToplamSinifSayisi();i++)
      cout<<*(sag.getSinif(i));
      return ekran;
    }
    Okul::~Okul()
    {
      for(int i=0;i<getToplamSinifSayisi();i++){
          delete Siniflar[i];
      }
    }
