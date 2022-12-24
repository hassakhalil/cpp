#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145,137){
    std::cout<<"ShrubberyCreationForm default constructor called"<<std::endl;
    this->target = "Default_value";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string t): Form("ShrubberyCreationForm", 145,137){
    std::cout<<"ShrubberyCreationForm constructor called"<<std::endl;
    this->target = t;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f): Form("ShrubberyCreationForm", 145,137){
     std::cout<<"ShrubberyCreationForm copy constructor called"<<std::endl;
     this->target = f.target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& f){
    std::cout<<"ShrubberyCreationForm copy assignment operator called"<<std::endl;
    this->target = f.target;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout<<"ShrubberyCreationForm destructor called"<<std::endl;
}
void ShrubberyCreationForm::PrintTree()const
{
    std::string filename;
    std::fstream fs;
    filename = this->target;
    filename += "_shrubbery";
    fs.open(filename, std::fstream::out);
    if (fs.is_open())
    {
        fs<<"               ,@@@@@@@,"<<std::endl;
        fs<<"       ,,,.   ,@@@@@@/@@,  .oo8888o."<<std::endl;
        fs<<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"<<std::endl;
        fs<<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"<<std::endl;
        fs<<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"<<std::endl;
        fs<<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"<<std::endl;
        fs<<"   `&%\\ ` /%&'    |.|        \\ '|8'"<<std::endl;
        fs<<"       |o|        | |         | |"<<std::endl;
        fs<<"       |.|        | |         | |"<<std::endl;
        fs<<"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"<<std::endl;
        fs.close();
    }
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (this->GetSign())
    {
        if (executor.GetGrade() <=137)
        {
            this->PrintTree();
            std::cout<<"ShrubberyCreationForm executed"<<std::endl;
        }
        else
            throw this->l;
    }
    else
        throw this->s;
}
