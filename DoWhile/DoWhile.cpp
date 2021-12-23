#include <iostream>

int main()
{
    // seleccion debe estar declarada fuera del do-while para que podamos usarla más tarde
    int seleccion{};
    

    do
    {
        std::cout << "Por favor, haz una selección: \n";
        std::cout << "1) Suma\n";
        std::cout << "2) Resta\n";
        std::cout << "3) Multiplicación\n";
        std::cout << "4) División\n";
        std::cin >> seleccion;
    } while (seleccion != 1 && seleccion != 2 &&
        seleccion != 3 && seleccion != 4);

    // hacer algo con la selección aquí
    // tal como una declaración switch

    std::cout << "Has seleccionado la opción #" << seleccion << "\n";

    return 0;

   
}






/*#include <iostream>

int main()
{
    int seleccion{ 0 };
    bool invalido{ true }; // nueva variable solo para cerrar el loop

    while (invalido)
    {
        std::cout << "Por favor, haz una selección: \n";
        std::cout << "1) Suma\n";
        std::cout << "2) Resta\n";
        std::cout << "3) Multiplicación\n";
        std::cout << "4) División\n";

        std::cin >> seleccion;
        invalido = (seleccion != 1 && seleccion != 2 &&  seleccion != 3 && seleccion != 4);
    }

    // hacer algo con la selección aquí
    // como una declaración switch

    std::cout << "Has seleccionado la opción #" << seleccion << "\n";

    return 0;
}*/




/*#include <iostream>

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    // seleccion debe estar declarado fuera del loop while para poder usarlo más tarde
    int seleccion{ 0 };

    while (seleccion != 1 && seleccion != 2 && seleccion != 3 && seleccion != 4)
    {
        std::cout << "Por favor, haz una selección: \n";
        std::cout << "1) Suma\n";
        std::cout << "2) Resta\n";
        std::cout << "3) Multiplicación\n";
        std::cout << "4) División\n";
        std::cin >> seleccion;
    }

    // hacer algo con la selección aquí
    // como con una declaración switch

    std::cout << "Has seleccionado la opción #" << seleccion << "\n";

    return 0;
}*/







