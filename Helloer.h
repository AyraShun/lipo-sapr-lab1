

#ifndef HELLOER_H
#define	HELLOER_H

#include <iostream>

using namespace std;

class Helloer {
public:
    Helloer();
    Helloer(const string& awho);
    Helloer(const Helloer& orig);
    virtual ~Helloer();
    string message() const;
private:
    string who;

};

#endif	/* HELLOER_H */