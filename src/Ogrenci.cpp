/**          

* @date  31.10.2018  
* @author  hseyinsade*/
#include "Ogrenci.hpp"

Ogrenci::Ogrenci(char Name)
    {
      this->Name=Name;
    }
    char Ogrenci::getName()
    {
      return Name;
    }
    ostream& operator<<(ostream& ekran,Ogrenci& sag)
    {
      cout<<sag.getName();
      return ekran;
    }
