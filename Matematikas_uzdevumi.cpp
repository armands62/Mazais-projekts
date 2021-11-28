#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>
#include <conio.h>

void matricu_saskaitisana() {
    system("CLS");
    std::cout << "MATRICU SASKAITISANA" << std::endl << std::endl;
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
        }
    }
    if (pareizs == 9)
    {
        std::cout << "Pareizi!" << std::endl;
    }
    else
    {
        std::cout << "Nepareizi!" << std::endl << "Pareiza atbilde: " << std::endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << MasivsAB[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Piespiediet taustinu lai turpinatu...";
    _getch();
    system("CLS");
};


void matricu_atnemsana() {
    system("CLS");
    std::cout << "MATRICAS ATNEMSANA" << std::endl << std::endl;
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
            std::cout << "Ievadiet [" << i << "]" << "[" << j << "] skaitlu starpibu: ";
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
        std::cout << "Pareizi!" << std::endl;
    }
    else
    {
        std::cout << "Nepareizi!" << std::endl << "Pareiza atbilde: " << std::endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << MasivsAB[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Piespiediet taustinu lai turpinatu...";
    _getch();
    system("CLS");
};


void matricu_reizinasana() {
    system("CLS");
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
        std::cout << "Nepareizi!" << std::endl << "Pareiza atbilde: " << std::endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << MasivsAB[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Piespiediet taustinu lai turpinatu...";
    _getch();
    system("CLS");
};


void determinants() {
    system("CLS");
    std::cout << "MATRICAS DETERMINANTA APREKINASANA" << std::endl << std::endl;
    int MasivsA[3][3], i, j, lietotajs, det = 0;

    // Matricas ievade
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MasivsA[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << MasivsA[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Determinanta aprēķināšana
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            det = MasivsA[0][0] * ((MasivsA[1][1] * MasivsA[2][2]) - (MasivsA[2][1] * MasivsA[1][2]))
                - MasivsA[0][1] * (MasivsA[1][0] * MasivsA[2][2] - MasivsA[2][0] * MasivsA[1][2])
                + MasivsA[0][2] * (MasivsA[1][0] * MasivsA[2][1] - MasivsA[2][0] * MasivsA[1][1]);
        }
    }
    std::cout << "Ievadiet dotas matricas determinantu: ";
    std::cin >> lietotajs;
    std::cout << std::endl;
    if (lietotajs == det)
    {
        std::cout << "Pareizi!" << std::endl << std::endl;
    }
    else
    {
        std::cout << "Nepareizi!" << std::endl << "Pareiza atbilde: " << det << std::endl << std::endl;
    }
    std::cout << "Piespiediet taustinu lai turpinatu...";
    _getch();
    system("CLS");
};


void pitagors() {
    system("CLS");
    std::cout << "TRIJSTURA MALAS APREKINASANA" << std::endl << std::endl;
    int malas_izvade = rand() % 2 + 1;
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
    if (malas_izvade == 1)
    {
        std::cout << "Pirma katetes mala ir " << a << " cm." << " Otra katetes mala ir " << b << " cm." << std::endl << std::endl;
        std::cout << "Aprekiniet hipotenuzas garumu!" << std::endl;
        std::cout << "Ievadiet hipotenuzas garumu: ";
        std::cin >> lietotajs;
        if (c == lietotajs)
        {
            std::cout << std::endl << "Pareizi!" << std::endl;
        }
        else
        {
            std::cout << std::endl << "Nepareizi!" << std::endl << "Pareiza atbilde: " << c << std::endl;
        }
    }
    else
    {
        std::cout << "Viena katetes mala ir " << a << " cm." << " Hipotenuza ir " << c << " cm." << std::endl << std::endl;
        std::cout << "Aprekiniet otras katetes garumu!" << std::endl;
        std::cout << "Ievadiet katetes garumu: ";
        std::cin >> lietotajs;
        if (b == lietotajs)
        {
            std::cout << std::endl << "Pareizi!" << std::endl;
        }
        else
        {
            std::cout << std::endl << "Nepareizi!" << std::endl << "Pareiza atbilde: " << b << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Piespiediet taustinu lai turpinatu...";
    _getch();
    system("CLS");
};

//Kvadrātvienādojumi
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

    std::cout << std::endl;

    if (pareizs == 2)
    {
        std::cout << "Pareizi!" << std::endl;
    }
    else
    {
        std::cout << "Nepareizi!" << std::endl << "x1 = " << x1 << std::endl << "x2 = " << x2 << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Piespiediet taustinu lai turpinatu...";
    _getch();
    system("CLS");
};

// Kombinatorika
int faktorials(int skaitlis) {
    int factorial = 1;
    for (int i = 1; i <= skaitlis; ++i) {
        factorial *= i;
    }
    return factorial;
};

void kombinatorika() {
    system("CLS");
    std::string pukes[6] = { "rozes", "tulpes", "gerberas",
        "kallas", "begonijas", "lillijas" };
    int RandIndex = rand() % 6;
    int n, k, lietotajs;
    n = rand() % 12 + 1;
    k = 2;
    do {
        n = rand() % 12 + 1;
    } while (n < 4);
    std::cout << "KOMBINATORIKA" << std::endl << std::endl;
    std::cout << "Veikala bija atrodamas " << n << " " << pukes[RandIndex] << "." << std::endl;
    std::cout << "Cik veidos var izveleties " << k << " " << pukes[RandIndex] << "?" << std::endl;
    int pirmaisSk = faktorials(n);
    int otraisSk = 2 * faktorials(n - 2);
    int rezultats = pirmaisSk / otraisSk;
    std::cout << std::endl << "Ievadiet atbildi: ";
    std::cin >> lietotajs;
    std::cout << std::endl;
    if (rezultats == lietotajs)
        std::cout << "Pareizi!" << std::endl;
    else
        std::cout << "Nepareizi!" << std::endl << "Pareiza atbilde: " << rezultats << std::endl;
    std::cout << std::endl;
    std::cout << "Piespiediet taustinu lai turpinatu...";
    _getch();
    system("CLS");
};

void uzdevumi() {
    system("CLS");
    int tema = 0;
    std::cout << "Izvelieties matematikas temu, ievadot atbilstoso numuru!" << std::endl << std::endl;
    std::cout << " 1. Matricas Saskaitisana" << std::endl;
    std::cout << " 2. Matricas Atnemsana" << std::endl;
    std::cout << " 3. Matricas Reizinasana" << std::endl;
    std::cout << " 4. Matricas Determinants" << std::endl;
    std::cout << " 5. Trijstura Malas Aprekinasana" << std::endl;
    std::cout << " 6. Kvadratvienadojumi" << std::endl;
    std::cout << " 7. Kombinatorika" << std::endl;
    std::cout << std::endl << " 8. Atpakal uz izvelni" << std::endl;
    std::cout << std::endl << " Ievadiet temas numuru: ";
    std::cin >> tema;
    if (tema == 1)
    {
        matricu_saskaitisana();
        return uzdevumi();
    }
    else if (tema == 2)
    {
        matricu_atnemsana();
        return uzdevumi();
    }
    else if (tema == 3)
    {
        matricu_reizinasana();
        return uzdevumi();
    }
    else if (tema == 4)
    {
        determinants();
        return uzdevumi();
    }
    else if (tema == 5)
    {
        pitagors();
        return uzdevumi();
    }
    else if (tema == 6)
    {
        kvadratvienadojumi();
        return uzdevumi();
    }
    else if (tema == 7)
    {
        kombinatorika();
        return uzdevumi();
    }
    else if (tema == 8)
        std::cout << " ";
    else
    {
        std::cout << "Nepareizs numurs! Ludzu meginiet velreiz!";
        Sleep(1 * 1000);
        return uzdevumi();
    }
}


void macibu_materials() {
    system("CLS");
    std::cout << "MACIBU MATERIALS" << std::endl << std::endl;
    std::cout << " Matricas - https://www.uzdevumi.lv/p/matematika/1-kurss/matricas-1927/re-1050716f-640c-474d-a676-3b4fa6fbedc9";
    std::cout << std::endl;
    std::cout << " Pitagora teorema - https://lv.wikipedia.org/wiki/Pitagora_teor%C4%93ma";
    std::cout << std::endl;
    std::cout << " Kvadratvienadojumi - https://www.uzdevumi.lv/p/matematika/10-klase/racionalas-algebriskas-izteiksmes-993/kvadratvienadojums-un-kvadrattrinoms-12974/re-89b5a5e7-2221-436c-a463-71afbf4a40e6";
    std::cout << std::endl;
    std::cout << " Kombinatorika - https://www.uzdevumi.lv/p/matematika/11-klase/varbutibu-teorijas-elementi-2675/re-1339d1a2-66b2-46bb-9da0-2b3ffd02cd17";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << " Piespiediet taustinu lai turpinatu...";
    _getch();
}


int main() {
    system("CLS");
    srand(time(0));
    std::cout << " MATEMATIKAS UZDEVUMI\n\n 1. Uzdevumi\n 2. Macibu materials\n 3. Iziet" << std::endl << std::endl;
    int izvele;
    std::cout << " Ievadiet savu izveli: ";
    std::cin >> izvele;
    if (izvele == 1)
    {
        uzdevumi();
        return main();
    }
    else if (izvele == 2)
    {
        macibu_materials();
        return main();
    }
    else if (izvele == 3)
    {
        std::cout << " ";
    }
    else
        return main();

    return 0;
};