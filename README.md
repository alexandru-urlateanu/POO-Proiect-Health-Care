# POO-Proiect01---Health-Care

Programul implementeaza o clasa care ar putea fi folosita de o firma privata de sanatate pentru a oferi servicii medicale clientilor sai.

Firma care se va folosi de aceasta aplicatie are o gama variata de clienti, care pot fi copii de pana in 16 ani, tineri care n-au depasit varsta de 25 ani, adulti de pana in 50 de ani si pensionari.

Clasa va contine datele despre un pachet promotional al companiei: varsta clientului, daca a mai folosit serviciile (caz in care primeste o reducere de 10%), valabilitatea pachetului (cate luni de zile este valabil), pretul pachetului care va fi calculat dupa cum urmeaza:
* daca clientul este copil si nu a mai fost niciodata client, pretul va fi nul pentru orice pachet, iar daca este client recurent va primi o reducere de 15%.
* daca clientul este un tanar, va primi reducere de 10% din costul pachetului.
* clientii adulti vor primi o reducere de 5% din costul pachetului
* pensionarii vor primi reducere de 35%

Pretul de baza (adica fara reduceri) este de 300RON pentru 1 luna, 790.99 RON pentru 3 luni si 2900 RON pentru un an de zile.
Mentionam ca reducerile de 15%, 10%, 5%, 35% se aplica cumulat (prin adunare) cu reducerea de 10% in cazul in care clientul este recurent. Spre exemplu, un copil pentru care a fost achizitionat pentru a doua oara un pachet va primi reducere totala de 25% (15% + 10%). Prin urmare, costul unui pachet lunar, in acest caz, ajunge la pretul de 225RON.
