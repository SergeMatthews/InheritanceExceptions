#ifndef _CREATIONERRORCLASS_H_
#define _CREATIONERRORCLASS_H_
#include <iostream>

class creation_error : public std::exception
{
private:
    std::string err_message{};
public:
    creation_error(std::string err_message); 
    const char* what() const noexcept override;
};

#endif
