#ifndef SINIF_HPP
#define SINIF_HPP
#define MAX_OGRENCI 15

#include"Ogrenci.hpp"

class Sinif{
  private:
      char SinifName;
      int toplamOgreciSayisi;
	public:
    Ogrenci *Ogrenciler[MAX_OGRENCI];
		Sinif(char SinifName);
    char getSinifName();
    int getToplamOgreciSayisi();
    void OgrenciEkle(char Name);
    Ogrenci* getOgrenci(int index);
    friend ostream& operator<<(ostream& ekran,Sinif& sag);
    ~Sinif();
};
#endif
