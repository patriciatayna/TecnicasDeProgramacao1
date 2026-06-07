#ifndef PAPEL_HPP_INCLUDED
#define PAPEL_HPP_INCLUDED

#include <string>

class Papel {
private:
    std::string papel;

public:
    void setPapel(const std::string& novoPapel);
    std::string getPapel() const;
};

#endif
