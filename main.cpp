#include <stdio.h>
#include <stdlib.h>

int main(){
	int op;
	printf("\nCHAMPIONS LEAGUE 2019\n");
	printf("\n1.-OCTAVOS DE FINAL\n");
	printf("\n2.-CUARTOS DE FINAL\n");
	printf("\n3.-SEMIFINAL\n");
	printf("\n4.-FINAL\n");
	
	scanf("%d",&op);
	
	system("cls");
	
	switch(op){
		case 1:
			printf("\nOCTAVOS DE FINAL\n\n");
			printf("\nROMA (ITALIA) VS PORTO (PORTUGAL)\n");
			printf("PARTIDO DE IDA     ROMA 2 - 1 PORTO\n");
			printf("PARTIDO DE VUELTA  ROMA 1 - 3 PORTO\n");
			printf("MARCADOR FINAL     ROMA 3 - 4 PORTO\n");
			printf("PORTO AVANZA A CUARTOS DE FINAL\n");
		
			printf("\nMANCHESTER UNITED (INGLATERRA) VS PSG (FRANCIA)\n");
			printf("PARTIDO DE IDA     MANCHESTER UNITED 0 - 2 PSG\n");
			printf("PARTIDO DE VUELTA  MANCHESTER UNITED 3 - 1 PSG\n");
			printf("MARCADOR FINAL     MANCHESTER UNITED 3 - 3 PSG\n");
			printf("MANCHESTER UNITED AVANZA A CUARTOS DE FINAL POR POSICION\n");
			
			printf("\nTOTTENHAM (INGLATERRA) VS DORTMUND (ALEMANIA)\n");
			printf("PARTIDO DE IDA     TOTTENHAM 3 - 0 DORTMUND\n");
			printf("PARTIDO DE VUELTA  TOTTENHAM 1 - 0 DORTMUND\n");
			printf("MARCADOR FINAL     TOTTENHAM 4 - 0 DORTMUND\n");
			printf("TOTTENHAM AVANZA A CUARTOS DE FINAL\n");
			
			printf("\nAJAX (HOLANDA) VS REAL MADRID (ESPAÑA)\n");
			printf("PARTIDO DE IDA     AJAX 1 - 2 REAL MADRID\n");
			printf("PARTIDO DE VUELTA  AJAX 4 - 1 REAL MADRID\n");
			printf("MARCADOR FINAL     AJAX 5 - 3 REAL MADRID\n");
			printf("AJAX AVANZA A CUARTOS DE FINAL\n");
			
			printf("\nLYON (FRANCIA) VS BARCELONA (ESPAÑA)\n");
			printf("PARTIDO DE IDA     LYON 0 - 0 BARCELONA\n");
			printf("PARTIDO DE VUELTA  LYON 1 - 5 BARCELONA\n");
			printf("MARCADOR FINAL     LYON 1 - 5 BARCELONA\n");
			printf("BARCELONA AVANZA A CUARTOS DE FINAL\n");
			
			printf("\nLIVERPOOL (INGLATERRA) VS BAYERN DE MUNICH (ALEMANIA)\n");
			printf("PARTIDO DE IDA     LIVERPOOL 0 - 0 BAYERN DE MUNICH\n");
			printf("PARTIDO DE VUELTA  LIVERPOOL 3 - 1 BAYERN DE MUNICH\n");
			printf("MARCADOR FINAL     LIVERPOOL 3 - 1 BAYERN DE MUNICH\n");
			printf("LIVERPOOL AVANZA A CUARTOS DE FINAL\n");
			
				printf("\nATLETICO MADRID (ESPAÑA) VS JUVENTUS (ITALIA)\n");
			printf("PARTIDO DE IDA     ATLETICO MADRID 2 - 0 JUVENTUS\n");
			printf("PARTIDO DE VUELTA  ATLETICO MADRID 0 - 3 JUVENTUS\n");
			printf("MARCADOR FINAL     ATLETICO MADRID 2 - 3 JUVENTUS\n");
			printf("JUVENTUS AVANZA A CUARTOS DE FINAL\n");
			
				printf("\nSCHALKE 04 (ALEMANIA) VS MANCHESTER CITY (INGLATERRA)\n");
			printf("PARTIDO DE IDA     SCHALKE 04 2 - 3 MANCHESTER CITY\n");
			printf("PARTIDO DE VUELTA  SCHALKE 04 0 - 7 MANCHESTER CITY\n");
			printf("MARCADOR FINAL     SCHALKE 04 2 - 10 MANCHESTER CITY\n");
			printf("MANCHESTER CITY AVANZA A CUARTOS DE FINAL\n");
			break;
			
			case 2:
			printf("\nCUARTOS DE FINAL\n\n");
			printf("\nTOTTENHAM (INGLATERRA) VS MANCHESTER CITY (INGLATERRA)\n");
			printf("PARTIDO DE IDA     TOTTENHAM 1 - 0 MANCHESTER CITY\n");
			printf("PARTIDO DE VUELTA  TOTTENHAM 3 - 4 MANCHESTER CITY\n");
			printf("MARCADOR FINAL     TOTTENHAM 4 - 4 MANCHESTER CITY\n");
			printf("TOTTENHAM AVANZA A SEMIFINAL POR POSICION\n");

			printf("\nLIVERPOOL (INGLATERRA) VS PORTO (PORTUGAL)\n");
			printf("PARTIDO DE IDA     LIVERPOOL 2 - 0 PORTO\n");
			printf("PARTIDO DE VUELTA  LIVERPOOL 4 - 1 PORTO\n");
			printf("MARCADOR FINAL     LIVERPOOL 6 - 1 PORTO\n");
			printf("LIVERPOOL AVANZA A SEMIFINAL\n");
			
			printf("\nAJAX (HOLANDA) VS JUVENTUS (ITALIA)\n");
			printf("PARTIDO DE IDA     AJAX 1 - 1 JUVENTUS\n");
			printf("PARTIDO DE VUELTA  AJAX 2 - 1 JUVENTUS\n");
			printf("MARCADOR FINAL     AJAX 3 - 2 JUVENTUS\n");
			printf("AJAX AVANZA A SEMIFINAL\n");
			
			printf("\nMANCHESTER UNITED (INGLATERRA) VS BARCELONA (ESPAÑA)\n");
			printf("PARTIDO DE IDA     MANCHESTER UNITED 0 - 1 BARCELONA\n");
			printf("PARTIDO DE VUELTA  MANCHESTER UNITED 0 - 3 BARCELONA\n");
			printf("MARCADOR FINAL     MANCHESTER UNITED 0 - 4 BARCELONA\n");
			printf("BARCELONA AVANZA A SEMIFINAL\n");
			break;
			
			case 3:
			printf("\nSEMIFINAL\n\n");
			printf("\nTOTTENHAM (INGLATERRA) VS AJAX (HOLANDA)\n");
			printf("PARTIDO DE IDA     TOTTENHAM 0 - 1 AJAX\n");
			printf("PARTIDO DE VUELTA  TOTTENHAM 3 - 2 AJAX\n");
			printf("MARCADOR FINAL     TOTTENHAM 3 - 3 AJAX\n");
			printf("TOTTENHAM AVANZA A LA FINAL POR POSICION\n");
			
			printf("\nSEMIFINAL\n\n");
			printf("\nBARCELONA (ESPAÑA) VS LIVERPOOL (INGLATERRA)\n");
			printf("PARTIDO DE IDA     BARCELONA 3 - 0 LIVERPOOL\n");
			printf("PARTIDO DE VUELTA  BARCELONA 0 - 4 LIVERPOOL\n");
			printf("MARCADOR FINAL     BARCELONA 3 - 4 LIVERPOOL\n");
			printf("LIVERPOOL AVANZA A LA FINAL\n");
			break;
			
			case 4:
				printf("\nFINAL\n\n");
			printf("\nLIVERPOOL (INGLATERRA) VS TOTTENHAM (INGLATERRA)\n");
			printf("MARCADOR FINAL     LIVERPOOL 2 - 0 TOTTENHAM\n");
			printf("LIVERPOOL CAMPEON!!!\n");
			break;
	}
	return 0;
}
