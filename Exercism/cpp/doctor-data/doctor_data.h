#include "string"


namespace star_map{
    enum System{
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven{




    class Vessel{



    public:

        std::string m_probe;
        int generation;
        star_map::System current_system;
        int busters =0;

        Vessel(std::string probe,int num): m_probe(probe), generation(num){};
        Vessel(std::string probe,int num,star_map::System system): m_probe(probe), generation(num), current_system(system){};


        Vessel replicate(std::string probe);

        void make_buster();

        bool shoot_buster();
    };

    std::string get_older_bob(const heaven::Vessel& vesselA,const heaven::Vessel& vesselB);

    bool in_the_same_system(const heaven::Vessel& vesselA,const heaven::Vessel& vesselB);
}