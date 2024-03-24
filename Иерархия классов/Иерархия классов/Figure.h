#ifndef FIGURE_H
#define FIGURE_H

#include <vector>
#include <string>

class Figure {
public:
    std::vector<double> getSides() const;
    std::vector<double> getAngles() const;
    virtual ~Figure() {}
    const char* getName() const;
protected:
    const char* name;
    std::vector<double> sides;
    std::vector<double> angles;
};

#endif // FIGURE_H