#include<string>
#include<fstream>
#include <vector>
#include <sstream>
#include <iterator>
#include<iostream>
using namespace std;

#ifndef OGRENCI_HPP
#define OGRENCI_HPP

class Ogrenci{
  private:
      char Name;
	public:
		Ogrenci(char Name);
    char getName();
    friend ostream& operator<<(ostream& ekran,Ogrenci& sag);
};
#endif
