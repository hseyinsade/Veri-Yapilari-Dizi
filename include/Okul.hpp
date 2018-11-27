#ifndef OKUL_HPP
#define OKUL_HPP
#define MAX_SINIF 15

#include"Sinif.hpp"

class Okul{
  private:
      Sinif *Siniflar[MAX_SINIF];
      int toplamSinifSayisi;
	public:
		Okul();
    void SinifEkle(Sinif*& sinif);
    int getToplamSinifSayisi();
    int getSinifIndex(char sc);
    void SinifDegistir(int sc1,int sc2);

    void OgrenciDegistir(int sc1,int sc2);

    Sinif* getSinif(int index);
    friend ostream& operator<<(ostream& ekran,Okul& sag);
    ~Okul();
};
#endif
