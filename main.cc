#include <iostream>
#include "italian.hh" // Diamo inizio alle danze.

intero contatore significa 0;

usando spazio_di_nomi std;

intero principale() {
    mentre (contatore minore 10) {
        contatore accresci;
        stampa << "Contatore: " << contatore << fine_linea;
    }

    stampa << fine_linea;

    testo nome;
    stampa << "Come ti chiami?" << fine_linea;
    stampa << "Nome: ";
    leggi >> nome;

    se (grandezza(nome) minore_uguale 0) {
        stampa << "Non hai inserito il tuo nome!" << fine_linea;
    } altrimenti {
        stampa << "Ciao, " << nome << "!" << fine_linea;
    }

    ritorna 0;
}