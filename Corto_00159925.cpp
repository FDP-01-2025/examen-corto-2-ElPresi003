#include <iostream>

using namespace std;

int main () {
cout << "Bienvenido a nuestra tienda" << endl;
int edad;
cout << "Por favor introduzca su edad" << endl;
cin >> edad;

if (edad < 16) {
    cout << "Lo sentimos, no tienes edad suficiente para realizar la compra" << endl;
return 0;
}

else if (edad >= 16) {
    cout << "Tienes la edad suficiente para comprar, bienvenido" << endl;
    
    int categoria;
    cout << "Por favor selecciona una categoria para ver" << endl;
    cout << "Escribe 1 para Estudiante" << endl;
    cout << "Escribe 2 para profesional" << endl;
    cout << "Escribe 3 para ver todas las categorias" << endl;    
    cin >> categoria;

        int Laptopbas = 900;
        int Tabest = 600;
        int Chromebook = 700;
        int laptopavan = 1500;
        int Tabpro = 1200;
        int Estrab = 2000;
        int saldo = 1000;

    switch (categoria) {
        int prod1;
        float descuento;
        float prodf;
        float comprob;
        int prod2;
        float descuento1;
        float prodf2;
        float descuento2;
        float comprob2;
        float saldores2;
        float descuento2;
        float prodf3;
        float descuento3;
        float comprob3;
        float saldores3;
        case 1:
        cout << "Has elegido estudiante" << endl;
        cout << "Los productos disponibles son los siguientes, por favor escribe el numero del producto que desees" << endl;
        cout << "1. Laptop Basica $900.00" << endl;
        cout << "2. Tablet estudiantil $600.00" << endl;
        cout << "3. Chromebook $700.00" << endl;
        cin >> prod1;
            if (prod1 = 1) {
                descuento = Laptopbas * 0.20;
                prodf = Laptopbas - descuento;
                cout << "Su producto cuenta con un 20% de descuento, su precio final es de" << prodf << endl;
                comprob = saldo - prodf;
                if (comprob > saldo)
                {
                    float saldores;
                    saldores = saldo - prodf;
                    cout << "Compra exitosa, su saldo restante es de" << saldores << endl;
                }

                else if (prod1 = 2) {
                descuento2 = Tabest * 0.20;
                prodf2 = Tabest - descuento;
                cout << "Su producto cuenta con un 20% de descuento, su precio final es de" << prodf << endl;
                comprob2 = saldo - prodf2;
                if (comprob2 > saldo)
                {
                    float saldores2;
                    saldores2 = saldo - prodf;
                    cout << "Compra exitosa, su saldo restante es de" << saldores2 << endl;
                }

                else if (prod1 = 3) {
                descuento3 = Chromebook * 0.20;
                prodf3 = Chromebook - descuento3;
                cout << "Su producto cuenta con un 20% de descuento, su precio final es de" << prodf << endl;
                comprob2 = saldo - prodf3;
                if (comprob3 > saldo)
                {
                    float saldores3;
                    saldores3 = saldo - prodf;
                    cout << "Compra exitosa, su saldo restante es de" << saldores3 << endl;

            

            
                }
            }

    }


else {cout << "Has seleccionado una opcion no valida" << endl;}
return 0;}

                     case 2:
                     prod2;
                             cout << "Has elegido Profesional" << endl;
        cout << "Los productos disponibles son los siguientes, por favor escribe el numero del producto que desees" << endl;
        cout << "1. Laptop Basica $900.00" << endl;
        cout << "2. Tablet estudiantil $600.00" << endl;
        cout << "3. Chromebook $700.00" << endl;
        cin >> prod1;
            if (prod1 = 1) {
                descuento = Laptopbas * 0.20;
                prodf = Laptopbas - descuento;
                cout << "Su producto cuenta con un 20% de descuento, su precio final es de" << prodf << endl;
                comprob = saldo - prodf;
                if (comprob > saldo)
                {
                    float saldores;
                    saldores = saldo - prodf;
                    cout << "Compra exitosa, su saldo restante es de" << saldores << endl;
                }

                else if (prod1 = 2) {
                descuento2 = Tabest * 0.20;
                prodf2 = Tabest - descuento;
                cout << "Su producto cuenta con un 20% de descuento, su precio final es de" << prodf << endl;
                comprob2 = saldo - prodf2;
                if (comprob2 > saldo)
                {
                    float saldores2;
                    saldores2 = saldo - prodf;
                    cout << "Compra exitosa, su saldo restante es de" << saldores2 << endl;
                }

                else if (prod1 = 3) {
                descuento3 = Chromebook * 0.20;
                prodf3 = Chromebook - descuento3;
                cout << "Su producto cuenta con un 20% de descuento, su precio final es de" << prodf << endl;
                comprob2 = saldo - prodf3;
                if (comprob3 > saldo)
                {
                    float saldores3;
                    saldores3 = saldo - prodf;
                    cout << "Compra exitosa, su saldo restante es de" << saldores3 << endl;

            

            
                }
            }

    }


else {cout << "Has seleccionado una opcion no valida" << endl;}
return 0;}

} }
}