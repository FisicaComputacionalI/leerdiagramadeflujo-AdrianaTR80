// Tarea leer diagrama de flujo
// Adriana Tapia Ramírez
// Fisica Computacional
# include  < iostream >

using namespace  std ;

int  main ()
{
    int s = 12 , p, i;
    int prime = 1 ;
    int f = 1 ;
    cout << " Teclea un número entero positivo: " << endl;
    cin >> p;
    hacer {
        hacer {
            if (p% 2 == 0 ) p = p + 1 ;
            para (i = 2 ; i <= p / 2 ; ++ i)
                if (p% i == 0 )
                {primo = 0 ;
                    p = p + 2 ;
                }
                else primo = 1 ;
        } while (prime = 0 );
        if (p <s) {s = sp;}
        else {s = s- 1 ;}
        if (s == 0 ) { break ;}
        else {p = p + 2 ;}
    } while (f = 1 );
    
    cout << " P = " << p << endl;
    return  0 ;
}
