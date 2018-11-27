/**          
* @date  31.10.2018  
* @author  hseyinsade
*/
#include "Yonetim.hpp"

	Yonetim::Yonetim()
    {
      okul=new Okul();
    }
    void Yonetim::SinifEkle(string okunan)
    {
      Sinif *sinif;
      istringstream buf(okunan);
      istream_iterator<string> beg(buf), end;
      vector<string> tokens(beg, end); // done!
      vector<string>::iterator it;
      int i=-1;

      for(it = tokens.begin(); it != tokens.end(); it++,i++)    {

      if(i!=-1){
          sinif->OgrenciEkle((*it)[0]);
        }
      else
        sinif=new Sinif((*it)[0]);
      }
      if(sinif!=NULL)okul->SinifEkle(sinif);
      sinif=NULL;
    }
    void Yonetim::SinifDegistir(char sc1,char sc2)
    {
      okul->SinifDegistir(okul->getSinifIndex(sc1),okul->getSinifIndex(sc2));
    }
    void Yonetim::OgrenciDegistir(char sc1,char sc2)
    {
      okul->OgrenciDegistir(sc1,sc2);
    }
    void Yonetim::ListeYazdir()
    {
      cout  << *okul;
    }
    Yonetim::~Yonetim()
    {
      delete okul;
    }
