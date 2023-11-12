#pragma once
#include "Medicamento.h"

Medicamento::Medicamento(System::String^ nombre, Clasificación categoría,
	double dosisRecomendadaMg, System::String^ principiosActivos) {
	this->nombre = nombre;
	this->categoría = categoría;
	this->dosisRecomendada_mg = dosisRecomendadaMg;
	this->principiosActivos = principiosActivos;
	this->numRegistro = idRegistro - 1;
}
Medicamento::Medicamento(Medicamento% m) {
	nombre = m.nombre;
	categoría = m.categoría;
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
Clasificación Medicamento::getCategoría() {
	return categoría;
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

void Medicamento::setCategoría(Clasificación categoría)
{
	this->categoría = categoría;
}