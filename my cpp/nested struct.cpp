#include <iostream>

using namespace std;

struct guru
{
  /* data */
  string nama;
  int umur;
};


// nested struct
struct mapel
{
  /* data */
  string nama_mapel;
  double kkm;
  string status;
  guru guru1,guru2;
};


int main()
{
  guru guru1, guru2;
  mapel mapel1;

  guru1.nama = "lulu";
  guru1.umur = 30;

  guru2.nama = "sukron";
  guru2.umur = 44;

  mapel1.nama_mapel = "quantum";
  mapel1.kkm = 3.3;
  mapel1.status = "wajib";
  mapel1.guru1 = guru1;
  mapel1.guru2 = guru2;

  cout<<"nama guru1:"<<mapel1.guru1.nama<<endl;
}