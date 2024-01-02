#ifndef OOP1DZ2V4_ERRORS_H
#define OOP1DZ2V4_ERRORS_H
#include <exception>


class NoCurrentElement : public std::exception {
    const char *error_message = "Error: Element does not exists!";
public:
    NoCurrentElement() = default;

    const char *what() const noexcept override {
        return error_message;
    }
};

class NoColumnsInTable: public std::exception {
    const char *error_message = "Error: Column does not exists!";
public:
    NoColumnsInTable() = default;

    const char *what() const noexcept override {
        return error_message;
    }
};


#endif //OOP1DZ2V4_ERRORS_H
