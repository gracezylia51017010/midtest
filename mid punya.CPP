#include <iostream.h>
#include <conio.h>

main()
{
	int G,R,A,C,E, TONT, TOT, NM, NF, NA;
   char Nama [20],NiM [10],Kriteria;
   cout << "Nama Mahasiswa = "; cin >>Nama;
   cout << "Nim            = "; cin >>NiM;
   cout << "Nilai Tugas 1  = "; cin >>G;
   cout << "Nilai Tugas 2  = "; cin >>R;
   cout << "Nilai Tugas 3  = "; cin >>A;
   cout << "Nilai Mid = "; cin >>C;
   cout << "Nilai Final = "; cin >>E;
   TONT = (G+C+E)/3;
   TOT =TONT*20/100;
   NM = E*40/100;
   NF = R*40/100;
   NA = TOT+NM+NF;
   cout << "\n Nama mahasiswa = "<<Nama;
   cout << "\n Nim = "<<NiM;
   cout << "\n Nilai Akhir = "<<NA;
   cout << "\n Dengan Kriteria = "<<Kriteria;
   	if(NA >= 80 ){
      	cout <<"a";
      } else if (NA >= 70 ){
      	cout <<"b";
      } else if (NA >= 60 ){
      	cout <<"c";
      } else if (NA >= 50 ){
      	cout <<"d";
      } else{
      	cout <<"e";
      }
   getch();
}