/** @file dirty.cpp
 *  @brief Main file.
 *
 *  This file contains all the functions and variables
 *  to fully execute the fourth project of TAG 2017/1.
 *
 *  @author Dayanne Fernandes da Cunha 13/0107191
 *  @author Renato Avellar Nobre 15/0146698
 *  @bug No bug known.
 */

#include "dirty.inl"

/**
 * Main function.
 *  Reads and loads basic data, then executes all main functionalities
 *  of the program.
 *
 * @return int 0 represents good exit, -1 represents bad exit
 */
int main(){

  string header, line;
  ifstream infile("dirty_deputies_v2.csv");

  getline(infile, line);
  header = line;

  while (getline(infile, line))
  {
    break;
  }
  cout << header << endl << line << endl;

  return 0;
}
