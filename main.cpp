#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

bool component ( double & );

int verificar_acerto ( int, int, int, int );

int main()
{
	srand( ( int ) time ( 0 ) );
    double percent_acerto = 0.9;
    double percent_problem = 0.0;
    const int ITERACAO = 100000;
    int count = 0;
    double perc_final = 0.0;
   

    for (int i = 0; i <= ITERACAO; i++) 
        if( ( component( percent_acerto ) &&  component( percent_acerto )  ) ||  ( component( percent_acerto ) &&  component( percent_acerto )  ) )
            count++;   
       
       
    perc_final = double( count ) / double( ITERACAO );
    cout << "O percentual de acerto foi: " << perc_final;
        
    percent_problem = 2 * pow(percent_acerto,2) - pow(percent_acerto,4);
        
    cout << "O percentual teorico eh: " << percent_problem  << '\n';
        
    return 0;
}



bool component ( double & perc )
{
    if( double(rand() % 100 + 1)/100  < perc )
        return true;
    else 
        return false;
}