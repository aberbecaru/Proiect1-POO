#include<iostream>
using namespace std;

class Film{
public:
    Film(string titlu, unsigned int dimensiuni, unsigned int pret_standard, unsigned int locuri_sala, unsigned int bilete_cumparate);
    Film(const Film&);
    Film();
    string getTitlu();
    unsigned int getDimensiuni();
    unsigned int getPret_Standard();
    unsigned int getLocuri_Sala();
    unsigned int getBilete_Cumparate();
    void setTitlu(string);
    void setDimensiuni(unsigned int);
    void setPret_Standard(unsigned int);
    void setLocuri_Sala(unsigned int);
    void setBilete_Cumparate(unsigned int);
    friend istream& operator >> (istream& stream, Film& film);
    friend ostream& operator << (ostream& stream, Film& film);
    unsigned int BileteDisponibile();
    unsigned int PretFinal();
    Film& operator += (Film&);
    Film& operator -= (Film&);
    friend bool operator == (Film&, Film&);
private:
    string titlu;
    unsigned int dimensiuni;
    unsigned int pret_standard;
    unsigned int locuri_sala;
    unsigned int bilete_cumparate;
};

Film::Film(string titlu, unsigned int dimensiuni, unsigned int pret_standard, unsigned int locuri_sala, unsigned int bilete_cumparate){
    this->titlu=titlu;
    this->dimensiuni=dimensiuni;
    this->pret_standard=pret_standard;
    this->locuri_sala=locuri_sala;
    this->bilete_cumparate=bilete_cumparate;

}

Film::Film(const Film& Film){
    titlu=Film.titlu;
    dimensiuni=Film.dimensiuni;
    pret_standard=Film.pret_standard;
    locuri_sala=Film.locuri_sala;
    bilete_cumparate=Film.bilete_cumparate;
}

Film::Film(){}

string Film::getTitlu(){
    return this->titlu;
}

unsigned int Film::getDimensiuni(){
    return this->dimensiuni;
}

unsigned int Film::getPret_Standard(){
    return this->pret_standard;
}

unsigned int Film::getLocuri_Sala(){
    return this->locuri_sala;
}

unsigned int Film::getBilete_Cumparate(){
    return this->bilete_cumparate;
}

void Film::setTitlu(string){
    this->titlu=titlu;
}

void Film::setDimensiuni(unsigned int){
    this->dimensiuni=dimensiuni;
}

void Film::setPret_Standard(unsigned int){
    this->pret_standard=pret_standard;
}

void Film::setLocuri_Sala(unsigned int){
    this->locuri_sala=locuri_sala;
}

void Film::setBilete_Cumparate(unsigned int){
    this->bilete_cumparate=bilete_cumparate;
}


istream& operator >> (istream& stream, Film& Film) {
    stream>>Film.titlu>>Film.dimensiuni>>Film.pret_standard>>Film.locuri_sala>>Film.bilete_cumparate;
    return stream;
}

ostream& operator << (ostream& stream, Film& Film){
    stream<<Film.titlu<<" "<<Film.dimensiuni<<" "<<Film.pret_standard<<" "<<Film.locuri_sala<<" "<<Film.bilete_cumparate;
    return stream;
}

unsigned int Film::BileteDisponibile(){
    return this->locuri_sala - this->bilete_cumparate;
}

unsigned int Film::PretFinal(){
    return this->dimensiuni * this->pret_standard;
}

Film& Film::operator += (Film& film){
    this->bilete_cumparate +=film.bilete_cumparate;
    return *this;
}

Film& Film::operator -= (Film& film){
    this->locuri_sala -=film.locuri_sala;
    return *this;
}

bool operator == (Film& sala1, Film&sala2){
    return sala1.getDimensiuni() == sala2.getDimensiuni(); /// cele 2 filme au acceeasi dimensiune
}

class Cinema{
public:
    Cinema(string nume, unsigned int incasari, unsigned int nrangajati, unsigned int bugetsalarii, unsigned int bugettotal, Film f1, Film f2);
    Cinema(const Cinema&);
    Cinema();
    string getNume();
    unsigned int getIncasari();
    unsigned int getNrangajati();
    unsigned int getBugetsalarii();
    unsigned int getBugettotal();
    Film getF1();
    Film getF2();
    void setNume(string);
    void setIncasari(unsigned int);
    void setNrangajati(unsigned int);
    void setBugetsalarii(unsigned int);
    void setBugettotal(unsigned int);
    void setF1(Film);
    void setF2(Film);
    friend istream& operator >> (istream& stream, Cinema& cinema);
    friend ostream& operator << (ostream& stream, Cinema& cinema);
    double salariuangajat();
    friend int operator + (Cinema&);
    friend int operator - (Cinema&);
    friend bool operator != (Film&, Film&);

private:
    string nume;
    unsigned int incasari;
    unsigned int nrangajati;
    unsigned int bugetsalarii;
    unsigned int bugettotal;
    Film f1;
    Film f2;
};

Cinema::Cinema(string nume, unsigned int incasari, unsigned int nrangajati, unsigned int bugetsalarii, unsigned int bugettotal, Film f1, Film f2){
    this->nume=nume;
    this->incasari=incasari;
    this->nrangajati=nrangajati;
    this->bugetsalarii=bugetsalarii;
    this->bugettotal=bugettotal;
    this->f1=f1;
    this->f2=f2;
}

Cinema::Cinema(const Cinema& Cinema){
    nume=Cinema.nume;
    incasari=Cinema.incasari;
    nrangajati=Cinema.nrangajati;
    bugetsalarii=Cinema.bugetsalarii;
    bugettotal=Cinema.bugettotal;
    f1=Cinema.f1;
    f2=Cinema.f2;
}

Cinema::Cinema(){}

string Cinema::getNume(){
    return this->nume;
}

unsigned int Cinema::getIncasari(){
    return this->incasari;
}

unsigned int Cinema::getNrangajati(){
    return this->nrangajati;
}

unsigned int Cinema::getBugetsalarii(){
    return this->bugetsalarii;
}

unsigned int Cinema::getBugettotal(){
    return this->bugettotal;
}

Film Cinema::getF1(){
    return this->f1;
}

Film Cinema::getF2(){
    return this->f2;
}

void Cinema::setNume(string){
    this->nume=nume;
}

void Cinema::setIncasari(unsigned int){
    this->incasari=incasari;
}

void Cinema::setNrangajati(unsigned int){
    this->nrangajati=nrangajati;
}

void Cinema::setBugetsalarii(unsigned int){
    this->bugetsalarii=bugetsalarii;
}

void Cinema::setBugettotal(unsigned int){
    this->bugettotal=bugettotal;
}

void Cinema::setF1(Film){
    this->f1=f1;
}

void Cinema::setF2(Film){
    this->f2=f2;
}

istream& operator >> (istream& stream, Cinema& Cinema) {
    stream>>Cinema.nume>>Cinema.incasari>>Cinema.nrangajati>>Cinema.bugetsalarii>>Cinema.bugettotal>>Cinema.f1>>Cinema.f2;
    return stream;
}

ostream& operator << (ostream& stream, Cinema& Cinema){
    stream<<Cinema.nume<<" "<<Cinema.incasari<<" "<<Cinema.nrangajati<<" "<<Cinema.bugetsalarii<<" "<<Cinema.bugettotal<<" "<<Cinema.f1<<" "<<Cinema.f2;
    return stream;
}

double Cinema::salariuangajat(){
    return this->bugetsalarii*1.0 / this->nrangajati;
}

int operator + (Cinema& cinema1, Cinema& cinema2){
    return cinema1.getIncasari() + cinema2.getIncasari();
}

int operator - (Cinema& cinema1, Cinema& cinema2){
    return cinema1.getIncasari()+cinema2.getIncasari()-cinema1.getBugettotal()-cinema2.getBugettotal();
}

bool operator != (Cinema& cinema1, Cinema& cinema2){
    return cinema1.getNume().compare(cinema2.getNume()) != 0;
}

int main(){
    Film sala1("Spiderman: No Way Home", 3, 10, 50, 45);
    Film sala2("Red Notice", 2, 10, 40, 20);

    cout<<"Sala1 mai are "<<sala1.BileteDisponibile()<<" bilete disponibile"<<"\n";
    cout<<"Pretul unui bilet la sala1 este "<<sala1.PretFinal()<<" lei"<<"\n";
    cout<<"Pretul unui bilet la sala2 este "<<sala2.PretFinal()<<" lei"<<"\n";

    sala1+=sala2;
    cout<<"In total avem "<<sala1.getLocuri_Sala()<<" locuri disponibile in cele 2 sali"<<"\n";

    cout<<"In total astazi au fost vandute "<<sala1.getBilete_Cumparate()<<" bilete"<<"\n";

    sala1-=sala2;
    cout<<"Sala1 are cu "<<sala1.getLocuri_Sala()<<" mai multe locuri decat Sala2"<<"\n";

    if(sala1==sala2)
        cout<<"Filmele ruleaza in aceeasi dimensiune"<<"\n";
    else
        cout<<"Filmele nu ruleaza in aceeasi dimensiune"<<"\n";

    cout<<"\n"<<"\n"<<"\n";

    Film sala1A("The Batman", 3, 10, 40, 39);
    Film sala1B("Uncharted", 3, 10, 30, 12);


    Cinema cinema1("Cinemaplex", 15000, 20, 10000, 12000, sala1, sala2);
    Cinema cinema2("Megacinema", 10000, 15, 8000, 9000, sala1A, sala1B);

    cout<<"Salariul unui angajat la Cinemaplex este "<<cinema1.salariuangajat()<<" lei"<<"\n";
    cout<<"Salariul unui angajat la Megacinema este "<<cinema2.salariuangajat()<<" lei"<<"\n";


    cout<<"Incasarile totale de la cele 2 cinema-uri sunt de "<<cinema1+cinema2<<" lei"<<"\n";
    cout<<"Profitul facut de cele 2 cinema-uri este de "<<cinema1-cinema2<<" lei"<<"\n";

    if(cinema1!=cinema2)
        cout<<"Cele 2 cinema-uri nu fac parte din aceeasi franciza"<<"\n";
    else
        cout<<"Cele 2 cinema-uri fac parte din aceeasi franciza"<<"\n";

    Cinema cinema3("Megacinema", 10000, 15, 8000, 9000, sala1A, sala1B);

     if(cinema2!=cinema3)
        cout<<"Cele 2 cinema-uri nu fac parte din aceeasi franciza";
    else
        cout<<"Cele 2 cinema-uri fac parte din aceeasi franciza";
}

