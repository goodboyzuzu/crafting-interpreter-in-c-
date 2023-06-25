#include "lox/Token.h"

namespace Lox {
Token::Token(TokenType type, std::string lexeme, std::any literal, int line) :
    type(type),
    lexeme(std::move(lexeme)),
    literal(literal),
    line(line)
{}

}