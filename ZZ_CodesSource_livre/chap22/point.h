       /* ------------ Declaration de la classe point ------------- */
class point
{           /* declaration des membres publics */
  public :
    void initialise (int, int) ;
    void deplace (int, int) ;
    void affiche () const ;
            /* declaration des membres prives */
  private :
    int x, y ;
} ;