#include <iostream>

using namespace std;

class Persona{
    protected:
        string codigo;
        string nombre;
        string apellido;
    public:
        Persona(string,string,string);
        string GetCodigo();
        string GetNombre();
        string GetApellido();
        void PrintPe();
};
    Persona::Persona(string C,string N,string A){
        codigo = C;
        nombre = N;
        apellido = A;
    }
    void Persona::PrintPe(){
        cout<< " C\242digo: " << codigo <<endl;
        cout<< " Nombre: " << nombre <<endl;
        cout<< " Apellido: " << apellido <<endl;
    }
    string Persona::GetCodigo(){
        return codigo;
    }
    string Persona::GetNombre(){
        return nombre;
    }
    string Persona::GetApellido(){
        return apellido;
    }
class Paciente: public Persona{
     private:
         string nacimiento;
         string direccion;
     public:
        Paciente(string,string,string,string,string);
        void PrintPa();
};
    Paciente::Paciente(string C,string N,string A,string F, string D) : Persona(C,N,A){
        nacimiento = F;
        direccion = D;
    }
    void Paciente::PrintPa(){
        cout<< " C\242digo: " << codigo <<endl;
        cout<< " Nombre: " << nombre <<endl;
        cout<< " Apellido: " << apellido <<endl;
        cout<< " Fecha de nacimiento: " << nacimiento <<endl;
        cout<< " Direcci\242n: " << direccion <<endl;
    }
class Doctor: public Persona{
     private:
         string especialidad;
     public:
        Doctor(string,string,string,string);
        void PrintDoc();
};
    Doctor::Doctor(string C,string N,string A,string E) : Persona(C,N,A){
        especialidad = E;
    }
    void Doctor::PrintDoc(){
        cout<< " C\242digo: " << codigo <<endl;
        cout<< " Nombre: " << nombre <<endl;
        cout<< " Apellido: " << apellido <<endl;
        cout<< " Especialidad: " << especialidad <<endl;
    }
int main()
{
    Persona A("78","Arturo","Ceballos");
    Persona *ptr = &A;
    cout<< " \n";
    ptr->PrintPe();
    cout << ptr->GetCodigo() << endl;

    Paciente B("23","Luis","Salas","22/12/01","Pablo VI O-22");
    Paciente *ptr1 = &B;
    cout<< " \n";
    ptr1->PrintPa();
    cout << ptr1->GetNombre() << endl;

    Paciente C("45","Fernando","Arzubialde","24/06/01","Av. Alianza 700");
    Paciente *ptr2 = &C;
    cout<< " \n";
    ptr2->PrintPa();
    cout << ptr2->GetNombre() << endl;

    Doctor D("54","Bergie","Davila","Traumatologia");
    Doctor *ptr3 = &D;
    cout<< " \n";
    ptr3->PrintDoc();
    cout << ptr3->GetApellido() << endl;

    return 0;
}
