/** @file dirty.inl
 *  @brief File of libraries.
 *
 *  This file includes all general libraries
 *  of C++ as well as the signature of each funcion of the program.
 *  Also, all global variables are kept here.
 *
 *  @author Dayanne Fernandes da Cunha 13/0107191
 *  @author Renato Avellar Nobre 15/0146698
 *  @bug No bug known.
 */

#ifndef HEADERS_INL_INCLUDED
#define HEADERS_INL_INCLUDED

/* -- Basic libraries for the better functioning of the program -- */

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

/* ----------- Definition of all functions of the program ----------- */

/* -- Functions to show data on command terminal -- */
void printcVertex();
void printdVertex();
void printGrafo();

/* -- Functions to create and populate the base graph -- */
int readFile();
void add_rEdge(string r_desc, string r_date, float r_value, int dVertex, int cVertex);
int add_cVertex(string c_name, string c_id);
int add_dVertex(string d_name, string d_state, string d_party);
int nameExistence(int deputyOrCompany, string name);
int edgeExistence(string r_desc, string nome, int d_index);


/* -- Global variables definitions -- */
typedef struct cVertex{
    string name;
    string id;
}t_cVertex;

typedef struct rEdge{
    /* Tipo de trancação e valor */
    string tipoT;
    /* Vetor de pares data da trancação e valor */
    vector< pair<string, float> > transac;
    /* */
    cVertex empresa;

}t_rEdge;

typedef struct dVertex{
    string name;
    string state;
    string party;
    vector<rEdge> gastos;
}t_dVertex;

pair< vector<dVertex>, vector<cVertex> > GRAPH;

#endif // HEADERS_INL_INCLUDED
