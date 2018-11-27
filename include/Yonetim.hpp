#ifndef YONETIM_HPP
#define YONETIM_HPP

#include"Okul.hpp"

class Yonetim{
private:
  Okul *okul;
	public:
		Yonetim();
    void SinifEkle(string okunan);
    void SinifDegistir(char sc1,char sc2);
    void OgrenciDegistir(char sc1,char sc2);
    void ListeYazdir();
    ~Yonetim();
};
#endif
