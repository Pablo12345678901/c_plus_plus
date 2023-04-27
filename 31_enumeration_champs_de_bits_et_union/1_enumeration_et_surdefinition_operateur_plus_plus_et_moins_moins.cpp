#include <iostream>
#include <string>
#include <chrono>
#include <thread>

// couleurs des feux de circulation
// avec simulation du temps à chaque feux (vert et rouge : 7s / orange : 1s si après rouge / orange : 3s si après vert

enum class couleur {vert, orange, rouge} ;
couleur & operator ++(couleur & c) ; // prototype
couleur operator++(couleur & c, int) ; // prototype
couleur & operator --(couleur & c) ; // prototype
couleur operator--(couleur & c, int) ; // prototype
void affiche(const couleur & c, const std::string etat, const bool sens) ;

int main()
{
    couleur feu ;
    feu = couleur::vert ;
    std::string etat ;
    bool sens = true ;

    for (int i=0; i<10; i++)
    {   if (feu==couleur::vert)
        {   etat = "vert" ;
            sens = true ;
        }
        else if (feu==couleur::orange) etat = "orange" ;
        else if (feu==couleur::rouge)
        {   etat = "rouge" ;
            sens = false ;
        }
        affiche(feu, etat, sens) ;
        if (sens) feu++ ;
        else feu-- ;
    }
}


couleur & operator ++(couleur & c) // si ++c
{
    switch (static_cast<int>(c))
    {
        case 0 : return c = static_cast<couleur>(1) ;
        case 1 : return c = static_cast<couleur>(2) ;
        case 2 : return c = static_cast<couleur>(0) ;
        default : std::cout << "ERREUR" << std::endl ;
    }
    return c ;
}

couleur operator++(couleur & c, int) // si c++ 
{   couleur tmp(c);
    ++c; // fait appel à l'autre fonction pour modifier "c"
    return tmp; // mais retourne la valeur avant modification
}

couleur & operator --(couleur & c) // si --c 
{
    switch (static_cast<int>(c))
    {
        case 0 : return c = static_cast<couleur>(2) ;
        case 1 : return c = static_cast<couleur>(0) ;
        case 2 : return c = static_cast<couleur>(1) ;
        default : std::cout << "ERREUR" << std::endl ;
    }
    assert(false); // déclenche l'arrêt du programme et appel "abort"
    return c ;
}

couleur operator--(couleur & c, int)// si c--
{   couleur tmp(c);
    --c; // fait appel à l'autre fonction pour modifier "c"
    return tmp; // mais retourne la valeur avant modification
}

void affiche(const couleur & c, const std::string etat, const bool sens) // tous les objets sont considérés constant car ils ne seront pas modifiés par la fonction
{   using namespace std::chrono_literals ;
    std::cout << "Feu : " << etat << " " ;
    switch (static_cast<int>(c))
    {   case 0 :
            std::cout << "  -> Roulez !" << std::endl ;
            std::this_thread::sleep_for(7000ms);
            break ;
        case 1 :
            if (sens)
            {   std::cout << "-> Freinez !" << std::endl ;
                std::this_thread::sleep_for(3000ms);
            }
            else
            {   std::cout << "-> Démarrez !" << std::endl ;
                std::this_thread::sleep_for(1000ms);  
            }
            break ;
        case 2 :
            std::cout << " -> STOP !" << std::endl ;
            std::this_thread::sleep_for(7000ms);  
            break ;
        default : std::cout << "ERREUR" << std::endl ;
    }
}



  