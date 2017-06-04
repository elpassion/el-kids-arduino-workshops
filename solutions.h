#include "setup.h"

////////////////////////////////////////////////////////////////////////////////
// 1. Jak robot wykonuje swój kod.

procedura powtarzaj() {

}

////////////////////////////////////////////////////////////////////////////////
// 2. Spróbujmy pomóc robotowi dojechać do mety.

procedura do_mety() {
  jedz_do_przodu(3000);
  zatrzymaj_sie();
  poczekaj(5000);
}

////////////////////////////////////////////////////////////////////////////////
// 3. Czy roboty mogą tańczyć? Zapropogramujmy naszego robota tak, by to zrobił!

procedura taniec() {
  obroc_w_lewo(200);
  obroc_w_prawo(400);
  obroc_w_lewo(200);
  jedz_do_przodu(200);
  jedz_do_tylu(200);
}

////////////////////////////////////////////////////////////////////////////////
// 4. Czy robot coś widzi?

procedura do_mety_i_stop() {
  jezeli (na_linii()) {
    zatrzymaj_sie();
  }
  w_przeciwnym_razie {
    jedz_do_przodu(100);
  }
}

////////////////////////////////////////////////////////////////////////////////
// 5. Czy robot ma więcej zmysłów?

procedura dojedz_do_sciany() {
  jezeli (odleglosc() < 5) {
    zatrzymaj_sie();
    czekaj(500);
  }
  w_przeciwnym_razie {
    jedz_do_przodu(100);
  }
}

////////////////////////////////////////////////////////////////////////////////
// 6. Czy robot może bawić się z innymi robotami?

procedura berek() {
  jezeli (na_linii()) {
    jedz_do_tylu(500);
    obroc_w_lewo(500);
  }
  w_przeciwnym_razie {
    jezeli (odleglosc() < 50) {
      jedz_do_przodu(100);
    }
    w_przeciwnym_razie {
      obroc_w_prawo(100);
    }
  }
}
