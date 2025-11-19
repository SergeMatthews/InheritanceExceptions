#include "CreationErrorClass.h"

creation_error::creation_error(std::string err_message) : err_message(err_message)
{}
const char* creation_error::what()const noexcept  { return err_message.c_str(); }