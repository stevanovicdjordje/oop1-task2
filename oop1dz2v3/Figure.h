#ifndef OOP1DZ2V3_FIGURE_H
#define OOP1DZ2V3_FIGURE_H

#include "List.h"
#include "Field.h"


class Figure {
protected:
    Field center;
    List<Field &> spread_fields;
    List<bool> list_hit;
public:
    Figure(const Field& field) : center(field) {}

    virtual char get_type() const = 0;

    virtual ~Figure() = default;

    bool is_hit(const Field& field);

    bool is_whole_figure_affected() const;

    bool operator&(const Figure& figure) const;

    friend bool operator==(const Figure& figure1, const Figure& figure2);
};

#endif //OOP1DZ2V3_FIGURE_H
