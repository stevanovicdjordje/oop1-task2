#ifndef OOP1DZ2V1_ERRORS_H
#define OOP1DZ2V1_ERRORS_H

#include <exception>

class InvalidTime : public std::exception {
    const char *error_message = "Error: You entered invalid time format!";
public:
    InvalidTime() = default;

    const char *what() const noexcept override {
        return error_message;
    }
};

class WrongTireParameters : public std::exception {
    const char *error_message = "Error: Wrong tire parameters!";
public:
    WrongTireParameters() = default;

    const char *what() const noexcept override {
        return error_message;
    }
};


class MinimalTreadDepth : public std::exception {
    const char *error_message = "Error: Tread depth will be below minimum!";
public:
    MinimalTreadDepth() = default;

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


#endif //OOP1DZ2V1_ERRORS_H
