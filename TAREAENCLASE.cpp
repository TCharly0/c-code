//TABLA DEL 4
/*#include <iostream>

using namespace std;
int main(){
    int num=4,resp;

    cout<<"la tabla del " <<num<<" es: \n";
    for(int i=0; i<=12; i++){
        resp = num * i;
        cout<<num<<" * "<<i<<" = "<<resp<<"\n";
    }
    getchar();
}
 //TABLA DEL 6
 #include <iostream>

using namespace std;
int main(){
    int num=6,resp;

    cout<<"la tabla del " <<num<<" es: \n";
    for(int i=0; i<=12; i++){
        resp = num * i;
        cout<<num<<" * "<<i<<" = "<<resp<<"\n";
    }
    getchar();
}
    //Numero par
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;

    if(num % 2 == 0)
        cout << num << " es un numero par." << endl;
    else
        cout << num << " es un numero impar." << endl;

    return 0;
}
    //SERIE DE FIBONACCI
#include<iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    fibonacci(12);
    return 0;
}
    //TABLAS DE MULTIPLICAR
#include <iostream>
using namespace std;

int main()
{
    int multiplicacion, numero, a=1;

    cout<<"Ingresa el numero de la tabla :";
    cin>>numero;

    cout<<"La tabla del "<<numero<<" es :"<<endl;
    do{
        multiplicacion = numero * a;
        cout<< numero <<" x "<< a <<" = "<<multiplicacion <<endl;
        a++;
    }
    while(a<=10);
}
    //NUMERO PRIMO
#include<iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;

    if(esPrimo(num))
        cout << num << " es un numero primo." << endl;
    else
        cout << num << " no es un numero primo." << endl;

    return 0;
}
*/