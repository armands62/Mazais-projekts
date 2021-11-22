#include <iostream>
#include <stdlib.h>
#include <time.h>

 //void ClearScreen(){
    //std::cout << std::string( 100, '\n' );
  //}

void matricu_saskaitisana(){
  // Pirmās matricas ievade
  int MasivsA[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
        MasivsA[i][j] = rand() % 100;
    }
  }
  // Otrās matricas ievade
  int MasivsB[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      MasivsB[i][j] = rand() % 100;
    }
  }

  // Izvade uz ekrāna
  for( int i = 0; i < 3; i++){
    for( int j = 0; j < 3; j++){
        std::cout << MasivsA[i][j] << "\t";
    }
    std::cout << "\t";
    for( int j = 0; j < 3; j++){
      std::cout << MasivsB[i][j] << "\t";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
  // Matricu saskaitīšana
  int MasivsAB[3][3], Lietotajs[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      MasivsAB[i][j] = MasivsA[i][j] + MasivsB[i][j];
    }
  }
  std::cout << "Ievadiet matricu summu!";
  std::cout << std::endl;
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cout << "Ievadiet [" << i << "]" << "[" << j << "] skaitļu summu: ";
      std::cin >> Lietotajs[i][j];
      std::cout << std::endl;
    }
  }
  // Salīdzināšana
  int pareizs;
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      if (MasivsAB [i][j] == Lietotajs[i][j])
      {
        pareizs += 1;
      }
    }
  }
  if (pareizs == 9)
  {
    std::cout << "Pareizi!";
  }
  else
  {
    std::cout << "Nepareizi! Mēģiniet vēlreiz" << std::endl << std::endl << std::endl;
  }
};

void matricu_atnemsana(){
  // Pirmās matricas ievade
  int MasivsA[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
        MasivsA[i][j] = rand() % 100;
    }
  }
  // Otrās matricas ievade
  int MasivsB[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      MasivsB[i][j] = rand() % 100;
    }
  }

  // Izvade uz ekrāna
  for( int i = 0; i < 3; i++){
    for( int j = 0; j < 3; j++){
        std::cout << MasivsA[i][j] << "\t";
    }
    std::cout << "\t";
    for( int j = 0; j < 3; j++){
      std::cout << MasivsB[i][j] << "\t";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;

  // Matricu atņemšana
  int MasivsAB[3][3], Lietotajs[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      MasivsAB[i][j] = MasivsA[i][j] - MasivsB[i][j];
    }
  }
  std::cout << "Ievadiet matricu starpību!";
  std::cout << std::endl;
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cout << "Ievadiet [" << i << "]" << "[" << j << "] skaitļu starpību: ";
      std::cin >> Lietotajs[i][j];
      std::cout << std::endl;
    }
  }

  // Salīdzināšana
  int pareizs;
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      if (MasivsAB [i][j] == Lietotajs[i][j])
      {
        pareizs += 1;
      }
    }
  }
  if (pareizs == 9)
  {
    std::cout << "Pareizi!";
  }
  else
  {
    std::cout << "Nepareizi! Mēģiniet vēlreiz" << std::endl << std::endl << std::endl;
  }
}


int main(){
    srand(time(0));
    int tema;
    std::cout << "Izvēlieties matemātikas tēmu, ievadot atbilstošo numuru!" << std::endl;
    std::cout << "1. Matricas saskaitīšana" << std::endl;
    std::cout << "2. Matricas atņemšana" << std::endl;
    std::cout << std::endl << "Ievadiet tēmas numuru: ";
    std::cin >> tema;
    if (tema == 1)
    {
      matricu_saskaitisana();
      //ClearScreen();
      return main();
    }
    else if (tema == 2)
    {
      matricu_atnemsana();
      return main();
    }
};