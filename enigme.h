#include "SDL/SDL.h"
struct typedef{
	SDL_Surface* ImageEnigme[5];
	SDL_Rect posImageEnigme;
}enigme;
void afficherEnigme(enigme e, SDL_Surface * screen);
void InitEnigme(enigme * e, char *nomfichier);
void animer(enigme* e);
void sauvegarder(personne p,background b,char* nomfichier);
