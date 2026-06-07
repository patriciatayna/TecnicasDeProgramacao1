#ifndef PAPEL_HPP_INCLUDED
#define PAPEL_HPP_INCLUDED
#include <string>

class Papel {
    private:
        std::string papel;

    public:
        void setPapel(const std::string&);
        std::string getValor();
};

inline void Nome::setPapel(std::string novoPapel) {
    papel = novoPapel;
}

inline string Papel::getValor() {
    return papel;
}

#endif // PAPEL_HPP_INCLUDED
