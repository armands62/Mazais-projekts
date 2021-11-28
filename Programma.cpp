#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

void matricu_saskaitisana() {
    system("CLS");
    std::cout << "Matricu saskaitisana" << std::endl << std::endl;
    // Pirmās matricas ievade
    int MasivsA[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsA[i][j] = rand() % 100;
        }
    }
    // Otrās matricas ievade
    int MasivsB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsB[i][j] = rand() % 100;
        }
    }

    // Izvade uz ekrāna
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << MasivsA[i][j] << "\t";
        }
        std::cout << "\t";
        for (int j = 0; j < 3; j++) {
            std::cout << MasivsB[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    // Matricu saskaitīšana
    int MasivsAB[3][3], Lietotajs[3][3], pareizs = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsAB[i][j] = MasivsA[i][j] + MasivsB[i][j];
        }
    }
    std::cout << "Ievadiet matricu summu!";
    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Ievadiet [" << i << "]" << "[" << j << "] skaitlu summu: ";
            std::cin >> Lietotajs[i][j];
            if (Lietotajs[i][j] == MasivsAB[i][j])
            {
                pareizs += 1;
            }
            std::cout << std::endl;
            std::cout << std::endl;
        }
    }
    if (pareizs == 9)
    {
        std::cout << "Pareizi!";
    }
    else
    {
        std::cout << "Nepareizi! Meginiet velreiz" << std::endl << std::endl << std::endl;
    }
    Sleep(2 * 1000);
    system("CLS");
};


void matricu_atnemsana() {
    // Pirmās matricas ievade
    int MasivsA[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsA[i][j] = rand() % 100;
        }
    }
    // Otrās matricas ievade
    int MasivsB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsB[i][j] = rand() % 100;
        }
    }

    // Izvade uz ekrāna
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << MasivsA[i][j] << "\t";
        }
        std::cout << "\t";
        for (int j = 0; j < 3; j++) {
            std::cout << MasivsB[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Matricu atņemšana
    int MasivsAB[3][3], Lietotajs[3][3], pareizs = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsAB[i][j] = MasivsA[i][j] - MasivsB[i][j];
        }
    }
    std::cout << "Ievadiet matricu starpibu!";
    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Ievadiet [" << i << "]" << "[" << j << "] skaitļu starpibu: ";
            std::cin >> Lietotajs[i][j];
            if (Lietotajs[i][j] == MasivsAB[i][j])
            {
                pareizs += 1;
            }
            std::cout << std::endl;
            std::cout << std::endl;
        }
    }
    if (pareizs == 9)
    {
        std::cout << "Pareizi!";
    }
    else
    {
        std::cout << "Nepareizi! Meginiet velreiz" << std::endl << std::endl << std::endl;
    }
    Sleep(2 * 1000);
    system("CLS");
};


void matricu_reizinasana() {

    // Pirmās matricas ievade
    int MasivsA[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsA[i][j] = rand() % 10;
        }
    }

    // Otrās matricas ievade
    int MasivsB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsB[i][j] = rand() % 10;
        }
    }

    // Izvade uz ekrāna
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << MasivsA[i][j] << "\t";
        }
        std::cout << "\t";
        for (int j = 0; j < 3; j++) {
            std::cout << MasivsB[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Matricu reizināšana
    int MasivsAB[3][3], Lietotajs[3][3], pareizs = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MasivsAB[i][j] = 0;
            for (int a = 0; a < 3; a++)
            {
                MasivsAB[i][j] += MasivsA[i][a] * MasivsB[a][j];
            }
        }
    }
    std::cout << "Ievadiet matricu reizinajumu!";
    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Ievadiet [" << i << "]" << "[" << j << "] skaitlu reizinajumu: ";
            std::cin >> Lietotajs[i][j];
            if (Lietotajs[i][j] == MasivsAB[i][j])
            {
                pareizs += 1;
            }
            std::cout << std::endl;
        }
    }
    if (pareizs == 9)
    {
        std::cout << "Pareizi!";
    }
    else
    {
        std::cout << "Nepareizi! Meginiet velreiz" << std::endl << std::endl << std::endl;
    }
    Sleep(2 * 1000);
    system("CLS");
};


void pitagors() {
    system("CLS");
    int malas_izvade = rand() % 2 + 1;
    if (malas_izvade == 1)
    {
        int lietotajs;
        int m = rand() % 10 + 1;
        int n = rand() % 10 + 1;
        int a = 0;
        do {
            m = rand() % 10 + 1;
            n = rand() % 10 + 1;
            a = pow(m, 2) - pow(n, 2);
        } while (a <= 0);
        int b = 2 * m * n;
        int c = pow(m, 2) + pow(n, 2);
        std::cout << "Pirma katetes mala ir " << a << " cm." << " Otra katetes mala ir " << b << " cm." << std::endl;
        std::cout << "Aprekiniet hipotenuzas garumu!" << std::endl;
        std::cout << "Ievadiet hipotenuzas garumu: ";
        std::cin >> lietotajs;
        if (c == lietotajs)
        {
            std::cout << std::endl << "Pareizi!";
        }
        else
        {
            std::cout << std::endl << "Nepareizi!";
        }
    }
    else
    {
        int lietotajs;
        int m = rand() % 10 + 1;
        int n = rand() % 10 + 1;
        int a = 0;
        do {
            m = rand() % 10 + 1;
            n = rand() % 10 + 1;
            a = pow(m, 2) - pow(n, 2);
        } while (a <= 0);
        int b = 2 * m * n;
        int c = pow(m, 2) + pow(n, 2);
        std::cout << "Viena katetes mala ir " << a << " cm." << " Hipotenuza ir " << c << " cm." << std::endl << std::endl;
        std::cout << "Aprekiniet otras katetes garumu!" << std::endl;
        std::cout << "Ievadiet katetes garumu: ";
        std::cin >> lietotajs;
        if (b == lietotajs)
        {
            std::cout << std::endl << "Pareizi!";
        }
        else
        {
            std::cout << std::endl << "Nepareizi!";
        }
    }
    Sleep(2 * 1000);
    system("CLS");
};


void kvadratvienadojumi() {
    system("CLS");
    int b, c, lietotajs, lietotajs2;
    int pareizs = 0;
    int x1 = rand() % 30 - 10;
    int x2 = rand() % 30 - 10;
    if (x2 > x1)
    {
        int temp = x1;
        x1 = x2;
        x2 = temp;
    }
    b = -(x1 + x2);
    c = x1 * x2;
    std::cout << "KVADRATVIENADOJUMI" << std::endl << std::endl;
    std::cout << "Izrekini kvadratvienadojuma saknes!" << std::endl << std::endl;
    if (b < 0 && c < 0)
        std::cout << "x2 - " << -b << "x - " << -c;
    else if (b < 0)
        std::cout << "x2 - " << -b << "x + " << c;
    else if (c < 0)
        std::cout << "x2 + " << b << "x - " << -c;
    else
        std::cout << "x2 + " << b << "x + " << c;
    std::cout << std::endl << "Ievadiet x1 (lielako skaitli): ";
    std::cin >> lietotajs;
    if (x1 == lietotajs)
        pareizs += 1;
    std::cout << "Ievadiet x2 (mazako skaitli): ";
    std::cin >> lietotajs2;
    if (x2 == lietotajs2)
        pareizs += 1;

    if (pareizs == 2)
    {
        std::cout << "Pareizi!";
    }
    else
        std::cout << "Nepareizi!";
    Sleep(2 * 1000);
    system("CLS");
};


int main() {
    srand(time(0));
    int tema;
    std::cout << "Izvelieties matematikas temu, ievadot atbilstoso numuru!" << std::endl;
    std::cout << "1. Matricas saskaitisana" << std::endl;
    std::cout << "2. Matricas atnemsana" << std::endl;
    std::cout << "3. Matricas reizinasana" << std::endl;
    std::cout << "4. Trijstura malas aprekinasana" << std::endl;
    std::cout << "5. Kvadratvienadojumi" << std::endl;
    std::cout << std::endl << "Ievadiet temas numuru: ";
    std::cin >> tema;
    if (tema == 1)
    {
        matricu_saskaitisana();
        return main();
    }
    else if (tema == 2)
    {
        matricu_atnemsana();
        return main();
    }
    else if (tema == 3)
    {
        matricu_reizinasana();
        return main();
    }
    else if (tema == 4)
    {
        pitagors();
        return main();
    }
    else if (tema == 5)
    {
        kvadratvienadojumi();
        return main();
    }

    return 0;
};