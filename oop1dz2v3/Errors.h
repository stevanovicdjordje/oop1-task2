#ifndef OOP1DZ2V3_ERRORS_H
#define OOP1DZ2V3_ERRORS_H

#include <exception>

class InvalidValue : public std::exception {
    const char *error_message = "Error: Value out of range!";
public:
    InvalidValue() = default;

    const char *what() const noexcept override {
        return error_message;
    }
};

class InvalidIndex : public std::exception {
    const char *error_message = "Error: Index out of range!";
public:
    InvalidIndex() = default;

    const char *what() const noexcept override {
        return error_message;
    }
};



#endif //OOP1DZ2V3_ERRORS_H
