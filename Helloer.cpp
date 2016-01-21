

#include "Helloer.h"

Helloer::Helloer() {
}

Helloer::Helloer(const string& awho)
{
    who = awho;
}

Helloer::Helloer(const Helloer& orig) {
}

Helloer::~Helloer() {
}

string Helloer::message() const
{
    return (string)"Hello " + who;
}