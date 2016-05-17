#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define MIN 1

/*- sono date n persone; di ogni persona si vuole calcolare l'età; l'età si calcola conoscendo la data di nascita (g/m/a) rispetto alla data attuale; nell'acquisire i dati sono richiesti opportuni controlli

Funzioni da implementare:
"	funzione per input controllato di un intero: int inputIntComp(int,int); i due parametri in ingresso sono i valori di controllo
"	funzione per controllare la correttezza della data: int controllo(int,int,int); in ingresso riceve giorno, mese e anno; esce 0 se errata, 1 se corretta
"	funzione per il calcolo dell'età: int calcolata(int,int,int,int,int,int); in ingresso riceve giorno,mese, anno di nascita, giorno, mese e anno attuali; esce l'età

traccia di soluzione:
"	acquisire n
"	per n volte: 
-	acquisire data di nascita (tre interi giorno, mese, anno)
-	controllare data di nascita
-	inserire data corrente
-	controllare data corrente
-	calcolare e comunicare l'età
*/

int inputintcomp (int,int);
int controllo (int,int,int);
int calcolata(int,int,int,int,int,int);

main(){
	int n=0,i=0,giorno,mese,anno,flag,giornoatt,meseatt,annoatt,risultato;
	
		printf("inserire il numero delle persone:");
	do{
		n=inputintcomp(MIN,MAX);
	}while (n<MIN || n>MAX);
	
	do{
	printf("inseire la data attuale:  ");
	printf("inserisci un giorno ");
	scanf("%d",&giornoatt);
	printf("inserire il mese attuale ");
	scanf("%d",&meseatt);
	printf("inserire l'anno attuale ");
	scanf("%d",&annoatt);
	flag=controllo(giornoatt,meseatt,annoatt);
	if(flag==1)
	printf("data corretta \n");
		else 
		printf("data non corretta\n");}
	while(flag!=1);
		
		
	
for(i=0;i<n;i++){
	do{
	printf("inseire una data :  ");
	printf("inserisci il giorno di nascita ");
	scanf("%d",&giorno);
	printf("inserire il mese di nascita ");
	scanf("%d",&mese);
	printf("inserire l'anno di nascita' ");
	scanf("%d",&anno);
	flag=controllo(giorno,mese,anno);
	//ho impostato un messaggio di errore scritto al posto di stampare 0 e 1 per renderlo comprensibile all'utente 
	if(flag==1)
	printf("data corretta \n");
		else 
		printf("data non corretta\n");}
	while(flag!=1);
		
	
	risultato=calcolata(giorno,mese,anno,giornoatt,meseatt,annoatt);
	printf("l'eta' della persona %d e' %d:  ",i+1,risultato);
	printf("\n\n");
	}
	
	
}

int inputintcomp(int a, int b){
	int persone;
		scanf("%d",&persone);
		if(persone<a || persone>b)
		printf("errore, reinserire\n");
			else
			return persone;
}


int controllo (int g, int m, int a){
	if(m>=1 && m<=12){
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			if( g>=1 && g<=31)
			return 1;
			else 
			return 0;}
		else if (m==4 || m==6 || m==9 || m==11){
			if(g>=1 && g<=30)
			return 1;
			else 
			return 0;}
		else if (m==2){
			if(g>=1 && g<=28)
			return 1;
			else
			return 0; }
		}
		
 else
 return 0; // else del mese 			
}

int calcolata(int g,int m,int a,int ga,int ma ,int aa){
	int eta;
	eta=aa-a;
	if (ma<m){
	eta-=1;
	return eta;
	}
	else if(ma==m){
		if(ga<g){
		eta-=1;
		return eta;
	}
	else return eta;
	} // else legato a ma==mm
	
	else return eta;// else legato al primo if
}

