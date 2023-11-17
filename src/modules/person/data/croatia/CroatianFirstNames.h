#pragma once

#include <string>
#include <vector>

namespace faker
{
const std::vector<std::string> croatianMalesFirstNames = {
    "Adi",      "Ado",       "Andel",   "Andelin",  "Andelko",   "Andelo",    "Andi",       "Andras",   "Andrej",
    "Andrija",  "Andro",     "Anko",    "Ante",     "Antek",     "Antonin",   "Antonio",    "Antun",    "Bela",
    "Belimir",  "Berti",     "Boris",   "Borko",    "Borna",     "Božidar",   "Branimir",   "Bruno",    "Časlav",
    "Dado",     "Damil",     "Damir",   "Danijel",  "Dario",     "Darko",     "David",      "Davor",    "Davorin",
    "Domagoj",  "Donat",     "Dražen",  "Držimir",  "Držislav",  "Dubravko",  "Duje",       "Dujo",     "Emil",
    "Emilijan", "Erik",      "Fabijan", "Filip",    "Franjo",    "Gaj",       "Gašpar",     "Goran",    "Gordan",
    "Gradimir", "Grga",      "Grgo",    "Grgur",    "Gvozden",   "Hrvoj",     "Hrvoje",     "Ico",      "Igor",
    "Ilija",    "Ilko",      "Ino",     "Ivan",     "Ive",       "Ivek",      "Ivica",      "Ivo",      "Jadran",
    "Jadranko", "Jadro",     "Jakov",   "Jan",      "Janko",     "Jasen",     "Jasenko",    "Josip",    "Joško",
    "Joso",     "Joža",      "Jože",    "Krešimir", "Kristijan", "Kruno",     "Krunoslav",  "Ladislav", "Ljudevit",
    "Lucijan",  "Luka",      "Marin",   "Marko",    "Martin",    "Matan",     "Mate",       "Matej",    "Matija",
    "Matko",    "Mato",      "Mihael",  "Milan",    "Mile",      "Milivoj",   "Miljenko",   "Mimo",     "Miran",
    "Mirko",    "Miro",      "Mislav",  "Mladen",   "Nedjeljko", "Neven",     "Nikola",     "Nino",     "Ozren",
    "Pavel",    "Pepo",      "Pero",    "Petar",    "Pravdan",   "Rino",      "Robert",     "Roberto",  "Robi",
    "Roko",     "Sanjin",    "Saša",    "Slavek",   "Slaven",    "Slavko",    "Srećko",     "Stanko",   "Štef",
    "Stipan",   "Stipe",     "Stjepan", "Stribor",  "Svebor",    "Tihomir",   "Toma",       "Tome",     "Tomislav",
    "Tomo",     "Tonči",     "Tone",    "Toni",     "Tonko",     "Trpimir",   "Trpko",      "Tvrtko",   "Valentin",
    "Vanja",    "Vatroslav", "Vedran",  "Velimir",  "Vijeko",    "Vjekoslav", "Vjenceslav", "Vladek",   "Vladislav",
    "Vlado",    "Vlatko",    "Zdenko",  "Zdravko",  "Željko",    "Zoltan",    "Zrinislav",  "Zrinko",   "Zvonimir"};

const std::vector<std::string> croatianFemalesFirstNames = {
    "Ada",       "Adina",     "Adriana",   "Adrijana",  "Agata",     "Alemka",     "Alenka",    "Alisa",    "Alka",
    "Alma",      "Amalija",   "Ana",       "Ančica",    "Anamarija", "Anastazija", "Anci",      "Anči",     "Ancica",
    "Anda",      "Anđela",    "Anđelika",  "Anđelina",  "Andi",      "Andrea",     "Andreja",   "Andrina",  "Anesa",
    "Aneta",     "Ani",       "Anica",     "Anja",      "Anka",      "Antea",      "Antonija",  "Asija",    "Asja",
    "Bara",      "Barbara",   "Barica",    "Beata",     "Bela",      "Biserka",    "Borka",     "Borna",    "Božena",
    "Božica",    "Branimira", "Branka",    "Brankica",  "Brigita",   "Dada",       "Dagmar",    "Dalibora", "Daliborka",
    "Danica",    "Danijela",  "Danka",     "Dara",      "Darinka",   "Dea",        "Đina",      "Dona",     "Donka",
    "Dora",      "Dorana",    "Dorica",    "Draga",     "Ela",       "Eli",        "Elka",      "Evelin",   "Ina",
    "Inga",      "Inge",      "Inja",      "Inka",      "Ita",       "Iva",        "Ivančica",  "Ivanka",   "Ivica",
    "Ivna",      "Jagica",    "Jana",      "Janica",    "Janka",     "Jasna",      "Jela",      "Jelica",   "Ješa",
    "Kata",      "Kate",      "Katica",    "Katija",    "Katina",    "Kika",       "Lara",      "Laura",    "Lea",
    "Lela",      "Lena",      "Leona",     "Lola",      "Maca",      "Magda",      "Maja",      "Majda",    "Manda",
    "Mara",      "Mare",      "Marena",    "Marica",    "Marta",     "Maša",       "Mica",      "Mika",     "Mila",
    "Milica",    "Milka",     "Mima",      "Mina",      "Mira",      "Mirka",      "Naja",      "Nana",     "Natalija",
    "Nataša",    "Natka",     "Neda",      "Nela",      "Neli",      "Nena",       "Nera",      "Nesa",     "Neva",
    "Nevenka",   "Nina",      "Nuša",      "Paulina",   "Pava",      "Pave",       "Pavica",    "Rajna",    "Rija",
    "Rina",      "Ružica",    "Staša",     "Tasa",      "Teja",      "Tija",       "Tijana",    "Tina",     "Tončica",
    "Tonija",    "Tonka",     "Vala",      "Valera",    "Vali",      "Vela",       "Velana",    "Velina",   "Vera",
    "Verica",    "Vinka",     "Zlatica",   "Zlatka",    "Darija",    "Darina",     "Divna",     "Donata",   "Doroteja",
    "Dragica",   "Dubravka",  "Dunja",     "Đurda",     "Edita",     "Elena",      "Ema",       "Eva",      "Gabrijela",
    "Goranka",   "Gordana",   "Grozdana",  "Helena",    "Hrvojka",   "Ira",        "Irena",     "Irma",     "Ivana",
    "Jadranka",  "Jaga",      "Jasmina",   "Josipa",    "Karmela",   "Katarina",   "Kristina",  "Leda",     "Leonida",
    "Lidija",    "Ljiljana",  "Ljubica",   "Lovorka",   "Lucija",    "Magdalena",  "Marija",    "Marijana", "Marina",
    "Martina",   "Miranda",   "Mirna",     "Monika",    "Nada",      "Nadalina",   "Nedjeljka", "Nevena",   "Nora",
    "Paula",     "Petra",     "Renata",    "Romana",    "Rosana",    "Ruža",       "Sanja",     "Silvija",  "Slavica",
    "Snježana",  "Tereza",    "Tomislava", "Valentina", "Valerija",  "Vedrana",    "Velimira",  "Veronika", "Vesna",
    "Vladimira", "Zdenka",    "Zdeslava",  "Zlata"};
}
