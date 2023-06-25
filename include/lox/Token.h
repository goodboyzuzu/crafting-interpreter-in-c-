#pragma once

#include "TokenType.h"
#include <string>
#include <any>

namespace Lox {
class Token {
public:
    Token(TokenType type, std::string lexeme, std::any literal, int line);
private:
    TokenType type;
    std::string lexeme;
    std::any literal;
    int line;
};
}
