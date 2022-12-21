#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>
using namespace std;
 int main () {
 int JarmilaHeslo = 5678;
 int JamalHeslo = 6666;
 int PepeHeslo = 1234;//tohle je int
 int x = 1234;
 int y = 5678;
 int z = 6666;
 int PepeZustatek = 0;
 int PepeVyber;
 int JarmilaZustatek = 500;
 int JarmilaVyber;
 int JamalZustatek = 80000000;
 int JamalVyber;
 int uzivatel;
 int moznosti;
 int komu;
 int PepePoslatKomu;
 int JarmilPoslatKomu;
 int JamalPoslatKomu;
 int PepePoslatJarmila;
 int JarmilaPoslatPepe;
 int PepePoslatJamal;
 int JamalPoslatPepe;
 int JamalPoslatJarmila;
 int JarmilaPoslatJamal;
 int PepeMenu;
 int JarmilaMenu;
 int JamalMenu;

         cout <<"Zvol si uzivatele \n ";
         cout <<"                                      1 = Pepe          2 = Jarmila          3 = Jamal \n";
          cin >> uzivatel;
         cout <<"============================= \n";
             switch (uzivatel) {
case 1: //Pepe
PepeMenu:


         cout <<"Napis svoje heslo\n";
         cout <<"============================= \n";
          cin >> PepeHeslo;
         cout <<"============================= \n";
      if (x == PepeHeslo) {
         cout <<"Spravne Heslo\n";
         cout <<"============================= \n";
     }else {
         cout <<"Spatne Heslo\n";
         cout <<"============================= \n";

           }
         cout <<"                                       1 = Vyber         2 = Zustatek         3 = Poslat penize \n";
          cin >> moznosti;
         cout <<"============================= \n";
             switch (moznosti){

  case 1: //Vyber
         cout <<"Kolik chces vybrat? \n";
         cout <<"============================= \n";
          cin >> PepeVyber;
       if(PepeZustatek <= 0) {
         cout <<"Error zadejte validni castku \n";
         cout <<"============================= \n";
goto PepeMenu;
      }else {PepeZustatek = PepeZustatek - PepeVyber;
         cout << "Vybrali jste " << PepeVyber << " CZK \n" << "Vas Zustatek je " << PepeZustatek << " CZK \n";
         cout <<"============================= \n";
goto PepeMenu;
    }
break;


case 2: //Zustatek
         cout <<"Vas zustatek je " << PepeZustatek << " CZK \n";
         cout <<"============================= \n";
goto PepeMenu;
break;

  case 3: //Poslat penize
         cout <<"Komu chcete poslat penize? \n";
         cout <<"                                       1 = Jarmila       2 = Jamal \n";
         cout <<"============================= \n";
          cin >> komu;
             switch(komu) {

      case 1: //Pepe posila Jarmila
         cout << "Kolik chcete poslat Jarmile? \n";
         cout <<"============================= \n";
          cin >> PepePoslatJarmila;
                PepeZustatek = PepeZustatek - PepePoslatJarmila;
                JarmilaZustatek = JarmilaZustatek + PepePoslatJarmila;
         cout <<"============================= \n";
         cout << "Poslal jste " << PepePoslatJarmila << " CZK Jarmile \n" << "Vas Zustatek je " << PepeZustatek << " CZK \n";
         cout <<"============================= \n";
goto PepeMenu;

      case 2: //Pepe posila Jamal
         cout << "Kolik chcete poslat Jamalovi? \n";
         cout <<"============================= \n";
          cin >> PepePoslatJamal;
                PepeZustatek = PepeZustatek - PepePoslatJamal;
                JamalZustatek = JamalZustatek + PepePoslatJamal;
         cout <<"============================= \n";
         cout << "Poslal jste " << PepePoslatJamal << " CZK Jamalovi \n" << "Vas Zustatek je " << PepeZustatek << " CZK \n";
         cout <<"============================= \n";
goto PepeMenu;
}
}
break;





case 2: //Jarmila
JarmilaMenu:
         cout <<"Napis svoje heslo\n";
         cout <<"============================= \n";
          cin >> JarmilaHeslo;
         cout <<"============================= \n";
      if (y == JarmilaHeslo) {
         cout <<"Spravne Heslo\n";
         cout <<"============================= \n";
     }else {
         cout <<"Spatne Heslo\n";
         cout <<"============================= \n";

           }
         cout <<"                                       1 = Vyber         2 = Zustatek         3 = Poslat penize \n";
          cin >> moznosti;
         cout <<"============================= \n";
             switch (moznosti){

  case 1: //Vyber
         cout <<"Kolik chces vybrat? \n";
         cout <<"============================= \n";
          cin >> JarmilaVyber;
       if(JarmilaZustatek <= 0) {
         cout <<"Error zadejte validni castku \n";
         cout <<"============================= \n";
      }else {JarmilaZustatek = JarmilaZustatek - JarmilaVyber;
         cout << "Vybrali jste " << JarmilaVyber << " CZK \n" << "Vas Zustatek je " << JarmilaZustatek << " CZK \n";
         cout <<"============================= \n";
goto JarmilaMenu;
    }
break;


  case 2: //Zustatek
         cout <<"Vas zustatek je " << JarmilaZustatek << " CZK \n";
         cout <<"============================= \n";
goto JarmilaMenu;
break;

  case 3: //Poslat penize
         cout <<"Komu chcete poslat penize? \n";
         cout <<"                                       1 = Pepe         2 = Jamal \n";
         cout <<"============================= \n";
          cin >> komu;
             switch(komu) {

      case 1: //Jarmila posila Pepe
         cout << "Kolik chcete poslat Pepemu? \n";
         cout <<"============================= \n";
          cin >> JarmilaPoslatPepe;
                JarmilaZustatek = JarmilaZustatek - JarmilaPoslatPepe;
                PepeZustatek = PepeZustatek + JarmilaPoslatPepe;
         cout <<"============================= \n";
         cout << "Poslala jste " << JarmilaPoslatPepe << " CZK Pepemu \n" << "Vas Zustatek je " << JarmilaZustatek << " CZK \n";
         cout <<"============================= \n";
goto JarmilaMenu;

      case 2: //Jarmila posila Jamal
         cout << "Kolik chcete poslat Jamalovi? \n";
         cout <<"============================= \n";
          cin >> JarmilaPoslatJamal;
                JarmilaZustatek = JarmilaZustatek - JarmilaPoslatJamal;
                JamalZustatek = JamalZustatek + JarmilaPoslatJamal;
         cout <<"============================= \n";
         cout << "Poslala jste " << JarmilaPoslatJamal << " CZK Jamalovi \n" << "Vas Zustatek je " << JarmilaZustatek << " CZK \n";
         cout <<"============================= \n";
goto JarmilaMenu;
break;
}
}








case 3: //Jamal
JamalMenu:
         cout <<"Napis svoje heslo\n";
         cout <<"============================= \n";
          cin >> JamalHeslo;
         cout <<"============================= \n";
      if (z == JamalHeslo) {
         cout <<"Spravne Heslo\n";
         cout <<"============================= \n";
     }else {
         cout <<"Spatne Heslo\n";
         cout <<"============================= \n";
return 0;
           }
         cout <<"                                       1 = Vyber         2 = Zustatek         3 = Poslat penize \n";
          cin >> moznosti;
         cout <<"============================= \n";
             switch (moznosti){

  case 1: //Vyber
         cout <<"Kolik chces vybrat? \n";
         cout <<"============================= \n";
          cin >> JamalVyber;
       if(JamalZustatek <= 0) {
         cout <<"Error zadejte validni castku \n";
         cout <<"============================= \n";
      }else {JamalZustatek = JamalZustatek - JamalVyber;
         cout << "Vybrali jste " << JamalVyber << " CZK \n" << "Vas Zustatek je " << JamalZustatek << " CZK \n";
         cout <<"============================= \n";
goto JamalMenu;
    }
break;
goto JamalMenu;

  case 2: //Zustatek
         cout <<"Vas zustatek je " << JamalZustatek << " CZK \n";
         cout <<"============================= \n";
goto JamalMenu;
break;

  case 3: //Poslat penize
         cout <<"Komu chcete poslat penize? \n";
         cout <<"                                       1 = Pepe         2 = Jarmila \n";
         cout <<"============================= \n";
          cin >> komu;
             switch(komu) {

      case 1: //Jamal posila Pepe
         cout << "Kolik chcete poslat Pepemu? \n";
         cout <<"============================= \n";
          cin >> JamalPoslatPepe;
                JamalZustatek = JamalZustatek - JamalPoslatPepe;
                PepeZustatek = PepeZustatek + JamalPoslatPepe;
         cout <<"============================= \n";
         cout << "Poslal jste " << JamalPoslatPepe << " CZK Pepemu. \n" << "Vas Zustatek je " << JamalZustatek << " CZK \n";
         cout <<"============================= \n";
goto JamalMenu;

      case 2: //Jamal posila Jarmila
         cout << "Kolik chcete poslat Jarmile? \n";
         cout <<"============================= \n";
          cin >> JamalPoslatJarmila;
                JamalZustatek = JamalZustatek - JamalPoslatJarmila;
                JarmilaZustatek = JarmilaZustatek + JamalPoslatJarmila;
         cout <<"============================= \n";
         cout << "Poslal jste " << JamalPoslatJarmila << " CZK Jarmile. \n" << "Vas zustatek je " << JamalZustatek << " CZK \n";
         cout <<"============================= \n";
goto JamalMenu;
}
break;
}
}
}
