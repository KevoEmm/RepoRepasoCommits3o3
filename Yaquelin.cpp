#include "Yaquelin.h"
#include <iostream>
using namespace std;

Yaquelin::Yaquelin(string n, int m)
{
	nombre = n;
	matricula=m;
}

Yaquelin::~Yaquelin()
{
	
}

string Yaquelin::getNombre()
{
	return nombre;
}
int Yaquelin::getMatricula()
{
	return matricula;
}
