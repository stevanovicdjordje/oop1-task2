#include "SailBoat.h"

void SailBoat::generate_fields() {
    spread_fields += center.get_relative_field(0, 0);
    spread_fields += center.get_relative_field(-1, 0);
    spread_fields += center.get_relative_field(1, 0);
    spread_fields += center.get_relative_field(0, -1);
    spread_fields += center.get_relative_field(0, 1);
    spread_fields += center.get_relative_field(-1, -1);
    spread_fields += center.get_relative_field(1, 1);
}
