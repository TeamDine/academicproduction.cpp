#include "academicproduction.h"
///Constructor Base
AcademicProduction::AcademicProduction()
{
        type = "NON";
        id = 0;
        status = "NON";
}

///Constructor Copia
AcademicProduction::AcademicProduction(const AcademicProduction& e) : name(e.name), type(e.type), author(e.author), id(e.id), status(e.status){ }

///Constructor Parametrizado
AcademicProduction::AcademicProduction(const Name& n, std::string& t, Date& d, Name& a, int& i, std::string& s) : name(n), type(t), elaborationDate(d), author(a), id(i), status(s){ }


Name AcademicProduction::getName()
{
    return name;
}

std::string AcademicProduction::getType()
{
    return type;
}

Date AcademicProduction::getElaborationDate()
{
    return elaborationDate;
}

int AcademicProduction::getId()
{
    return id;
}

std::string AcademicProduction::getStatus()
{
    return status;
}

void AcademicProduction::setName(const Name& n)
{
    name = n;
}

void AcademicProduction::setType(const std::string& t)
{
    type = t;
}

void AcademicProduction::setElaborationDate(const Date& d)
{
    elaborationDate = d;
}

void AcademicProduction::setAuthor(const Name& a)
{
    author = a;
}

void AcademicProduction::setId(const int& i)
{
    id = i;
}

void AcademicProduction::setStatus(const std::string& s)
{
    status = s;
}

std::string AcademicProduction::toString(){
    std::string result;

    result = "Nombre: ";
    result += name.toString();
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
