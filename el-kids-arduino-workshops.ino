#include "setup.h"

// Wstęp
// 1. Jak robot wykonuje swój kod (pętla powtarzaj)
// 2. Spróbujmy robotowi dojechać do mety, funkcje które mogą się przydać:
//      - jedz_do_przodu(milisekundy)
//      - zatrzymaj_sie()
//      - poczekja(milisekundy)

procedura powtarzaj() {
  jedz_do_przodu(3000);  
  zatrzymaj_sie();
  poczekaj(5000);
}

