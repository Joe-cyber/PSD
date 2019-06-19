typedef struct equazione *Equazione;
Equazione acquisisci_equazione(float,float,float);
float valorexquadro(Equazione);
float valorex(Equazione);
float termine_noto(Equazione);
int delta(Equazione);
int risolvi_equazione(Equazione, float*, float*);

