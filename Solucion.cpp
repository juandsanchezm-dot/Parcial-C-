#include <iostream>
#include <string>
using namespace std;
/*    ================== Parcial C++ ==================
Nombre: _Juan David Sanchez Muñoz  Codigo: 202561468   Fecha: 18/10/2025 
Duración:  3 horas    Total: 100 pts equivalente a 5 
Temas: Nivel 1 — Variables/Tipos/IO, Operadores, Condicionales, Bucles; Nivel 2 — Funciones 

Instrucciones 
•  Usa C++17 o superior. 
•  Lee cuidadosamente cada pregunta. Marca una sola opción en la Sección A. 
•  En la Sección B, escribe exactamente lo que se imprime (respeta espacios y saltos de línea). 
•  En la Sección C, implementa solo las funciones solicitadas. No uses librerías fuera de <iostream> y <string>. */

int main() {
    cout << "Solucion Parcial C++ - Juan David Sanchez Muñoz" << endl;
    // ============= Sección A =============
    cout << "Sección A — Selección múltiple (10 × 7 pts = 70 pts)" << endl;
    cout<<" 1) ¿Cuál declara y define una variable entera con valor 10?"<<endl;
    cout<<"( ) A) int x; x == 10;"<<endl;
    cout<<"(x) B) int x = 10; "<<endl;
    cout<<"( ) C) int x( ); x = '10'; "<<endl;
    cout<<"( ) D) int x { 0 };" <<endl;
    //Respuesta correcta B
    int q = 10;
    (void)q; // Para evitar advertencias de variable no usada

    cout<<" \n2) ¿Qué imprime?   std::cout << 7/2 << " " << 7/2.0; "<<endl;
    cout<<"•  ( ) A) 3 3 "<<endl;
    cout<<"•  (x) B) 3 3.5 "<<endl;
    cout<<"•  ( ) C) 3.5 3.5 "<<endl;
    cout<<"•  ( ) D) 3 3.0 "<<endl;
    //Respuesta correcta C
    cout << 7/2 << " " << 7/2.0 << endl;

    cout<<" \n3) Con bool a=true, b=false; ¿Qué imprime?   std::cout << (a&&b) << " " << (a||b) << " " << (!b); "<<endl;
    cout<<"•  ( ) A) true true false "<<endl;
    cout<<"•  (x) B) 0 1 1 "<<endl;
    cout<<"•  ( ) C) 1 1 0 "<<endl;
    cout<<"•  ( ) D) false true true "<<endl;
    //Respuesta correcta B
    bool w=true, e=false;
    cout << (w&&e) << " " << (w||e) << " " << (!e) << endl;

    cout<<" \n4) Dado int x=3; if (x=0) { ... } else { ... } ¿qué ocurre? "<<endl;
    cout<<"•  ( ) A) Error de compilación por asignación en if. "<<endl;
    cout<<"•  ( ) B) Entra al if siempre. "<<endl;
    cout<<"•  (x) C) Entra al else porque el valor es 0 tras la asignación. "<<endl;
    cout<<"•  ( ) D) Comportamiento indefinido. "<<endl;
    //Respuesta correcta A
    int r=3;
    if (r=0) // Asignación, no comparación; genera 0 (falso)
    {
        cout << "Dentro del if" << endl;
    }
    else 
    {
        cout << "Dentro del else" << endl;
    }

    cout<<" \n5) do-while respecto a while: "<<endl;
    cout<<"•  ( ) A) Nunca ejecuta si la condición es falsa. "<<endl;
    cout<<"•  (x) B) Ejecuta al menos una vez. "<<endl;
    cout<<"•  ( ) C) Ejecuta exactamente una vez. "<<endl;
    cout<<"•  ( ) D) Es más rápido por definición. "<<endl;
    //Respuesta correcta B
    int t=0;
    do {
        cout << "Dentro del do-while" << endl;
        t++;
    } while (t < 0);

    cout<<" \n6) ¿Cuál lee dos enteros separados por espacio? "<<endl;
    cout<<"•  ( ) A) cin << a << b; "<<endl;
    cout<<"•  ( ) B) cin >> a, b; "<<endl;
    cout<<"•  (x) C) cin >> a >> b; "<<endl;
    cout<<"•  ( ) D) cin (a, b); "<<endl;
    //Respuesta correcta C
    int y, u;
    cout << "Ingrese dos enteros separados por espacio: ";
    cin >> y >> u;
    cout << "Leídos: " << y << " " << u << endl;

    cout<<" \n7) ¿Qué imprime? "<<endl;
    cout<<"int a=5, b=2; "<<endl;
    cout<<"std::cout << a + b*3 << '\n'; "<<endl;
    cout<<"•  (x) A) 11 "<<endl;
    cout<<"•  ( ) B) 21 "<<endl;
    cout<<"•  ( ) C) 10 "<<endl;
    cout<<"•  ( ) D) 7 "<<endl;
    //Respuesta correcta A
    int o=5, p=2;
    cout << o + p*3 << endl;

    cout<<" \n8) ¿Cuál firma pasa un entero por referencia? "<<endl;
    cout<<"•  ( ) A) void f(int n&); "<<endl;
    cout<<"•  (x) B) void f(int& n); "<<endl;
    cout<<"•  ( ) C) void f(ref int n); "<<endl;
    cout<<"•  ( ) D) int& f(int n); "<<endl;
    //Respuesta correcta B
    auto func = [](int& a) { a += 1; };
    int num = 5;
    func(num);
    cout << "Valor después de la función: " << num << endl;


    cout<<" \n9) ¿Qué hace continue en un for? "<<endl;
    cout<<"•  ( ) A) Termina por completo el bucle. "<<endl;
    cout<<"•  (x) B) Salta a la siguiente iteración. "<<endl;
    cout<<"•  ( ) C) Reinicia el contador a 0. "<<endl;
    cout<<"•  ( ) D) Salta dos iteraciones. "<<endl;
    //Respuesta correcta B
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        cout << "i = " << i << endl;
    }

    cout<<" \n10) ¿Cuál condición es verdadera? "<<endl;
    cout<<"•  (x) A) (3 == 3) && !(2 > 5) "<<endl;
    cout<<"•  ( ) B) (3 = 3) || (2 < 1) "<<endl;
    cout<<"•  ( ) C) !(3 == 3) || (2 > 5) "<<endl;
    cout<<"•  ( ) D) (3 != 3) && (2 <= 5) "<<endl;
    //Respuesta correcta A
    if ( (3 == 3) && !(2 > 5) ) {
        cout << "La condición es verdadera." << endl;
    } else {
        cout << "La condición es falsa." << endl;
    }

    // ============= Sección B =============
    cout<<"\nSección B — Predice la salida (5 × 6 pts = 30 pts)"<<endl;
    cout<<"Escribe exactamente lo que se imprime (respeta espacios y saltos de línea)."<<endl;
    
    cout<<"\n1)"<<endl;
    cout<<"int a=5, b=2; "<<endl;
    cout<<"std::cout << a + b*3 << std::endl; "<<endl;
    cout<<"Respuesta: ";
    int s=5, d=2;
    cout << s + d*3 << endl;
    
    cout<<"\n2)"<<endl;
    cout<<"int n=0; "<<endl;
    cout<<"while (n<3) { "<<endl;
    cout<<"    std::cout << n << " "; "<<endl;
    cout<<"    n++; "<<endl;
    cout<<" } "<<endl;
    cout<<"Respuesta: ";
    int f=0;
    while (f<3) {
        cout << f << " ";
        f++;
    }
    cout<<endl;
    
    cout<<"\n3) "<<endl;
    cout<<"int x=10; "<<endl;
    cout<<"if (x%2==0) std::cout << par; "<<endl;
    cout<<"else        std::cout << impar; "<<endl;
    cout<<"Respuesta: "<<endl;
    int g=10;
    if (g%2==0) cout << "par";
    else        cout << "impar";
    cout<<endl;

    cout<<"\n4) "<<endl;
    cout<<"int i=3; "<<endl;
    cout<<"do { "<<endl;
    cout<<"    std::cout << i--; "<<endl;
    cout<<"} while (i>0); "<<endl;
    cout<<"Respuesta: ";
    int h=3;
    do {
        cout << h--;
    } while (h>0);
    cout<<endl;

    cout<<"\n5) "<<endl;
    cout<<"int a=1; "<<endl;
    cout<<"int b = (a++ > 1) ? 100 : 200; "<<endl;
    cout<<"std::cout << a << " " << b; "<<endl;
    cout<<"Respuesta: ";
    int j=1;
    int k = (j++ > 1) ? 100 : 200;
    cout << j << " " << k << endl;

    // ============= Sección C =============
    cout<<"\nSección C — Implementación de funciones (4 × 10 pts = 40 pts) "<<endl;
    cout<<"Programa solo las funciones pedidas. Puedes probar mentalmente con casos de ejemplo. "<<endl;
    
    cout<<"\nC1) Firma: int max3(int a, int b, int c); "<<endl;
    cout<<"   Devuelve el mayor de tres enteros usando if/else. "<<endl;
    cout<<"   Implementación: "<<endl;
    auto max3 = [](int l, int z, int x) -> int {
        if (l >= z && l >= x) {
            return l;
        } else if (z >= l && z >= x) {
            return z;
        } else {
            return x;
        }
    };
    int num1, num2, num3;
    cout<<"Ingrese tres numeros enteros separados por un espacio: ";
    cin >> num1 >> num2 >> num3;
    cout<<"El numero mayor de ( "<<num1<<", "<<num2<<", "<<num3<<" ) es: "<<max3(num1,num2,num3)<<endl;

    
    cout<<"\nC2) Firma: int sumaRango(int a, int b); "<<endl;
    cout<<"   Devuelve la suma de todos los enteros en [a, b] (se asume a <= b) usando un bucle. "<<endl;
    cout<<"   Implementación: "<<endl;
    auto sumaRango = [](int c, int v) -> int {
        int suma = 0;
        for (int i = c; i <= v; i++) {
            suma += i;
        }
        return suma;
    };
    int inicio, fin;
    cout<<"Ingrese el numero rango de numeros a sumar [a, b] separados por un espacio: ";
    cin>>inicio>>fin;
    cout<<"La suma de los numeros en el rango es: "<<sumaRango(inicio, fin)<<endl;

    cout<<"\nC3) Firma: bool contieneDigito(int n, int d); "<<endl;
    cout<<"   Devuelve true si n (no negativo) contiene el dígito d (0–9). Usa operadores aritméticos. "<<endl;
    cout<<"   Implementación: "<<endl;
    auto contieneDigito = [](int b, int n) -> bool {
        while (b > 0) {
            if (b % 10 == n) {
                return true;
            }
            b /= 10;
        }
        return false;
    };
    int numero, digito;
    cout<<"Ingrese un numero y un digito separados por un espacio: ";
    cin>>numero>>digito;
    cout<<"El numero "<<numero<<" "<<(contieneDigito(numero, digito) ? "si" : "no")<<" contiene el digito "<<digito<<endl;

    cout<<"\nC4) Firma: void tablaMultiplicar(int n); "<<endl;
    cout<<"   Imprime la tabla de n del 1 al 10 con el formato exacto: n x i = resultado (un renglón por i). "<<endl;
    cout<<"   Implementación: "<<endl;
    auto tablaMultiplicar = [](int m) -> void {
        for (int i = 1; i <= 10; i++) {
            cout << m << " x " << i << " = " << m * i << endl;
        }
    };
    int tabla;
    cout<<"Ingrese el numero de la tabla de multiplicar: ";
    cin>> tabla;
    cout<<"La tabla de multiplicar del "<<tabla<< " es: \n";
    tablaMultiplicar(tabla);

    return 0;
}


