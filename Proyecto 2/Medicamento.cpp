#pragma once
#include "Medicamento.h"

Medicamento::Medicamento(System::String^ nombre, Clasificaci�n categor�a,
	double dosisRecomendadaMg, System::String^ principiosActivos) {
	this->nombre = nombre;
	this->categor�a = categor�a;
	this->dosisRecomendada_mg = dosisRecomendadaMg;
	this->principiosActivos = principiosActivos;
	this->numRegistro = idRegistro - 1;
}
Medicamento::Medicamento(Medicamento% m) {
	nombre = m.nombre;
	categor�a = m.categor�a;
	dosisRecomendada_mg = m.dosisRecomendada_mg;
	principiosActivos = m.principiosActivos;
	numRegistro = m.numRegistro;
}
System::String^ Medicamento::getNombre() {
	return nombre;
}
int Medicamento::getNumRegistro() {
	return numRegistro;
}
Clasificaci�n Medicamento::getCategor�a() {
	return categor�a;
}
double Medicamento::getDosisMg() {
	return dosisRecomendada_mg;
}
System::String^ Medicamento::getPrincipiosActivos() {
	return principiosActivos;
}

void Medicamento::setNombre(System::String^ nombre)
{
	this->nombre = nombre;
}

void Medicamento::setNumRegistro(int numRegistro)
{
	this->numRegistro = numRegistro;
}

void Medicamento::setDosisMg(double dosisRecomendada_mg)
{
	this->dosisRecomendada_mg = dosisRecomendada_mg;
}

void Medicamento::setPrincipiosActivos(System::String^ principiosActivos)
{
	this->principiosActivos = principiosActivos;
}

void Medicamento::setCategor�a(Clasificaci�n categor�a)
{
	this->categor�a = categor�a;
}