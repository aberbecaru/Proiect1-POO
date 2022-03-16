Documentatie

Prima data am creat clasa Film, care contine datele despre un anumit film. Am declarat datele corespunzatoare acestei clase, am implementat constructorii de initializare, am folosit set-erii si get-erii pentru a obtine variabilele declarate, am supraincarcat operatorii << si >> pentru aceasta clasa. In continuare voi prezenta functiile si operatorii ceruti supraincarcati:
•	Functia BileteDisponibile(), care calculeaza numarul de bilete disponibile scazand numarul total de locuri din sala cu numarul de bilete cumparate. Nu supraincarcam operatorul – deoarece avem functie de numere
•	Functia PretFinal(), care calculeaza pretul final al unui bilet inmultind pretul standard cu numarul de dimensiuni in care este proiectat filmul. Nu supraincarcam operatorul – deoarece avem functie de numere
•	Supraincarcarea operatorului compus de atribuire +=,  pe care o folosim pentru a determina numarul de bilete cumparate, ce ramane stocata in variabila compusa pentru care a fost facuta atribuirea
•	Supraincarcarea operatorului compus de atribuire -=, pe care o folosim pentru a determina diferenta de capacitate dintre sali, ce ramane stocata in variabila compusa pentru care a fost facuta atribuirea
•	Supraincarcarea operatorului relational == care verifica daca 2 filme sunt proiectate in aceeasi dimensiune(2D, 3D).


Apelarea functiilor si prezentarea operatorilor supraincarcati o gasiti in main.

Apoi am creat clasa Cinema, care contine datele administrative despre un cinema si o variabila de tip Film pentru a realiza compunerea dintre clase.  Am declarat datele corespunzatoare acestei clase, am implementat constructorii de initializare, am folosit set-erii si get-erii pentru a obtine variabilele declarate, am supraincarcat operatorii << si >> pentru aceasta clasa. In continuare voi prezenta functiile si operatorii ceruti supraincarcati:
•	Functia salariuangajat(), care calculeaza salariu unui angajat prin raportul dintre bugetul de salarii(inmultit cu 1.0 pentru a realiza impartirea exacta) si numarul de angajati. Nu supraincarcam operatorii * si  – deoarece avem functie de numere
•	Supraincarcarea operatorului aritmetic binar + care calculeaza incasarile totale dintre 2 cinema-uri
•	Supraincarcarea operatorului aritmetic binar – care calculeaza profitul obtinut pentru cele 2 cinema-uri, mai precis adunand incasarile de la cele 2 cinema-uri si scazand bugetul total
•	Supraincarcarea operatorului relational != care verifica daca cele 2 cinema-uri sunt aceeasi franciza, adica daca au acelasi nume

Apelarea functiilor si prezentarea operatorilor supraincarcati o gasiti in main.
