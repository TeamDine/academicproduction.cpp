#include "academicproduction.h"
///Constructor Base
AcademicProduction::AcademicProduction() {
    name = "NON";
    type = "NON";
    id = "NON";
    status = "NON";
    }

///Constructor Copia
AcademicProduction::AcademicProduction(const AcademicProduction& e) : name(e.name), type(e.type), author(e.author), id(e.id), status(e.status) { }

///Constructor Parametrizado
AcademicProduction::AcademicProduction(const std::string& n, std::string& t, Date& d, Name& a, std::string& i, std::string& s) : name(n), type(t), elaborationDate(d), author(a), id(i), status(s) { }


std::string AcademicProduction::getName() {
    return name;
    }

std::string AcademicProduction::getType() {
    return type;
    }

Date AcademicProduction::getElaborationDate() {
    return elaborationDate;
    }

std::string AcademicProduction::getId() {
    return id;
    }

std::string AcademicProduction::getStatus() {
    return status;
    }

Name AcademicProduction::getAuthor(){
    return author;
}

void AcademicProduction::setName(const std::string& n) {
    name = n;
    }

void AcademicProduction::setType(const std::string& t) {
    type = t;
    }

void AcademicProduction::setElaborationDate(const Date& d) {
    elaborationDate = d;
    }

void AcademicProduction::setAuthor(const Name& a) {
    author = a;
    }

void AcademicProduction::setId(const std::string& i) {
    id = i;
    }

void AcademicProduction::setStatus(const std::string& s) {
    status = s;
    }

std::string AcademicProduction::toString() {
    std::string result;

    result = "Nombre: ";
    result += name;
    result += "Tipo: ";
    result += type;
    result += "Fecha De Elaboracion: ";
    result += elaborationDate.toString();
    result += "Autor: ";
    result += author.toString();
    result += "Id: ";
    result += id;
    result += "Status: ";
    result += status;

    return result;
    }
