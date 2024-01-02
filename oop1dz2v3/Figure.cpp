#include "Figure.h"

bool Figure::is_hit(const Field &field){
    for (int i = 0; i < spread_fields.get_number_of_elements(); i++) {
        if (spread_fields[i] == field and !list_hit[i]) {
            list_hit[i] = true;
            return true;
        }
    }
    return false;
}

bool Figure::is_whole_figure_affected() const {
    for (int i = 0; i < spread_fields.get_number_of_elements(); i++) {
        if (!list_hit[i]) return false;
    }
    return true;
}

bool Figure::operator&(const Figure &figure) const {
    for (int i = 0; i < spread_fields.get_number_of_elements(); i++) {
        for (int j = 0; j < figure.spread_fields.get_number_of_elements(); j++) {
            if (spread_fields[i] == figure.spread_fields[j]) return true;
        }
    }
    return false;
}

bool operator==(const Figure &figure1, const Figure &figure2) {
    if (figure1.get_type() == figure2.get_type()) return true;
    return false;
}


