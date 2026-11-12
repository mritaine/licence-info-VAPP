#include "gigasecond.h"
#include <string>
#include <boost/date_time/posix_time/posix_time.hpp>
namespace gigasecond {
    boost::posix_time::ptime advance(boost::posix_time::ptime date){
        //Le format boost::posix_time::ptime stock un point précis dans le temps en deux parties (jour, mois, année + le temps écoulé depuis minuit ce jour là). c'est une sorte de concaténation des objet boost::gregorian::date et boost::posix_time::time_duration.
        boost::posix_time::seconds duree(1000000000);
        // boost::posix_time::seconds est un constructeur permettant de transformer un nombre en une durée en seconde qui peut être manipulée conjointement avec le ptime.
        date = date + duree;
        return date;
    }
}