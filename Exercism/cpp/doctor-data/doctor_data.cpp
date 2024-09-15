#include "doctor_data.h"

heaven::Vessel heaven::Vessel::replicate(std::string probe) {
    return Vessel(probe, ++generation, star_map::Sol);
}

void heaven::Vessel::make_buster() {
    busters++;

}

bool heaven::Vessel::shoot_buster() {
    if(busters >0){

        busters--;
        return true;
    }

    return false;
}

std::string heaven::get_older_bob(const heaven::Vessel &vesselA, const heaven::Vessel &vesselB) {
    if(vesselA.generation < vesselB.generation)
    {
        return vesselA.m_probe;
    }
    return vesselB.m_probe;
}

bool heaven::in_the_same_system(const heaven::Vessel &vesselA, const heaven::Vessel &vesselB) {
    return vesselA.current_system == vesselB.current_system;
}
