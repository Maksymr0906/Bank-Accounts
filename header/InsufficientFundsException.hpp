#pragma once

#include <exception>

class InsufficientFundsException : public std::exception {
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept override {
        return "Insufficient funds exception";
    }
};