#include "setup.h"

// Poruszanie się

// 1. Jak robot wykonuje swój kod (pętla powtarzaj)

procedura powtarzaj() {
  dojedz_do_sciany();
}

// 2. Spróbujmy pomóc robotowi dojechać do mety.
//    Funkcje które mogą się przydać:
//      - jedz_do_przodu(milisekundy)
//      - zatrzymaj_sie()
//      - poczekaj(milisekundy)

procedura do_mety() {
  jedz_do_przodu(3000);
  zatrzymaj_sie();
  poczekaj(5000);
}

// 3. Czy roboty mogą tańczyć? Spróbujmy zapropogramować robota tak aby to zrobił!
//    Funkcje które mogą się przydać:
//      - jedz_do_przodu(milisekundy)
//      - obrot_w_lewo(milisekundy)
//      - obrot_w_prawo(milisekundy)
//      - zatrzymaj_sie()
//      - poczekaj(milisekundy)

procedura taniec() {
  obrot_w_lewo(200);
  obrot_w_prawo(400);
  obrot_w_lewo(200);
  jedz_do_przodu(200);
  jedz_do_tylu(200);
}

// 4. Czy robot coś widzi? 
//
//    /test czujnikow przy pomocy kartonikow/
//
//    Spróbujmy zaproprogramować robota tak, aby po dojechaniu do mety -zatrzymał się
//    Funkcje które mogą się przydać:
//      - jedz_do_przodu(milisekundy)
//      - na_linii 
//        oraz instrukcja 'jezeli' i 'w_przeciwnym_razie'
//      - zatrzymaj_sie()

procedura do_mety_i_stop() {
  jezeli (na_linii()) {
    zatrzymaj_sie();
  }
  w_przeciwnym_razie {
    jedz_do_przodu(100);
  }
}

// 5. Czy robot ma więcej zmysłów? 
//
//    /informacja jak dziala czujnik ultradzwiekowy/
//
//    Spróbujmy zatrzymać robota przed ścianą
//    Funkcje które mogą się przydać:
//      - jedz_do_przodu(milisekundy)
//      - odleglosc 
//        oraz instrukcja 'jezeli' i 'w_przeciwnym_razie'
//        oraz operatory < > 
//      - zatrzymaj_sie()

procedura dojedz_do_sciany() {
  jezeli (odlegosc() < 5) {
    zatrzymaj_sie();
    poczekaj(500);
  }
  w_przeciwnym_razie {
    jedz_do_przodu(100);
  }
}

// 6. Czy robot może bawić się z innymi robotami?
//
// /przedtawienie pomysłu/

procedura berek() {
  jezeli (na_linii()) {
    jedz_do_tylu(500);
    obrot_w_lewo(500);
  }
  w_przeciwnym_razie {
    jezeli (odlegosc() < 50) {
      jedz_do_przodu(100);
    }
    w_przeciwnym_razie {
      obrot_w_prawo(100);
    }
  }
}
